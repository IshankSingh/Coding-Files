/*
*/

#include <iostream>
#include <queue>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left, *right;
};

TreeNode * insert(TreeNode *root, int item)
{
    // Here, however you want to insert you can insert it, the only thing you have to keep in mind is that you can have onl 2 childs for each node

    // I will insert in the order of root, left, right for each level.

    TreeNode *temp = new TreeNode();
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else if (item <= root->data)
    {
        root->left = insert(root->left, item);
    }
    else
    {
        root->right = insert(root->right, item);
    }
    return root;    
}

int Height(TreeNode *root)
{
    if (root == NULL) return -1;
    else return max(Height(root->left), Height(root->right)) + 1;
}

int minElement(TreeNode *root)
{
    if (root->left == NULL) return root->data;
    else return minElement(root->left);
}

bool Search(TreeNode *root, int item)
{
    if (root == NULL) return false;
    else if(root->data == item) 
    {
        cout << root->data;
        return true;
    }
    else if(item < root->data) return Search(root->left, item);
    else return Search(root->right, item);
}

void LevelOrderTraversal(TreeNode *root)
{
    if (root == NULL) return;
    
    queue<TreeNode *> q;
    q.push(root);
    cout << "Level order traversal: ";
    while (!q.empty())
    {
        TreeNode *current = q.front();
        cout << current->data << " ";
        if (current->left != NULL) q.push(current->left);
        if (current->right != NULL) q.push(current->right);
        q.pop();
    }
    cout << endl;
    
}

void InOrder (TreeNode *root)
{
    if (root->left != NULL)
        InOrder(root->left);

    if (root != NULL) cout << root->data << " ";
    if (root->right != NULL)
        InOrder(root->right);
}

void PreOrder (TreeNode *root)
{
    if (root != NULL) cout << root->data << " ";
    if (root->left != NULL)
        PreOrder(root->left);

    if (root->right != NULL)
        PreOrder(root->right);
}

void PostOrder (TreeNode *root)
{
    if (root->left != NULL)
        PostOrder(root->left);

    if (root->right != NULL)
        PostOrder(root->right);

    if (root != NULL) cout << root->data << " ";
}
int main()
{
    TreeNode *root = new TreeNode();
    root = NULL;
    int ch;
    do
    {
        cout << "1. Insert\n2. Level Order Traversal\n3. Search\n4. Minimum\n6. Height of a tree\n7. Inorder traversal\n8. Preorder traversal\n9. Postorder traversal\n10. Exit\n";
        cin >> ch;
        switch(ch)
        {
            
            case 1: 
            {
                int item;
                cout << "Enter the item u want to insert\n";
                cin >> item;
                root = insert(root, item);
                break;
            }
            case 2:
            {
                LevelOrderTraversal(root);
                break;
            }
            case 3:
            {
                int item;
                cout << "Enter the item u want to seach\n";
                cin >> item;
                if (Search(root, item)) cout << "Found.\n";
                else cout << "Not found.\n";
                break;
            }
            case 4:
            {
                cout << "Minimum: " << minElement(root) << endl;
                break;
            }
            case 5:
            {
                break;
            }
            case 6:
            {
                cout << "Height: " << Height(root) << endl;
                break;
            }
            case 7:
            {
                cout << "Inorder traversal: ";
                InOrder(root);
                cout << endl;
                break;
            }
            case 8:
            {
                cout << "Preorder traversal: ";
                PreOrder(root);
                cout << endl;
                break;
            }
            case 9:
            {
                cout << "Postorder traversal: ";
                PostOrder(root);
                cout << endl;
                break;
            }
        }
    } while (ch != 10);

    return 0;
}