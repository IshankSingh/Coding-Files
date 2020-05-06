/*
 * @author : Ishank Singh
 * Write a program that processes the following queries on a Binary Search Tree: (CodeChef, Beginer, Easy, Data Structures, Tree, BST)
 *       i x: Insert x in the BST
 *       d x: Delete x from the BST 
 */

#include <iostream>
#include "BST.h"

using namespace std;

int insert(BST_Nodes **root, int data)
{
    int p = 1;
    BST_Nodes *first = new BST_Nodes();
    BST_Nodes *second = new BST_Nodes();
    if (*root == NULL)
    {
        first->data = data;
        *root = first;
        return p;
    }
    else
    {
        first = *root;
        while (first->right != NULL || first->left != NULL)
        {
            if (data > first->data && first->right != NULL)
            {
                first = first->right;
            }
            if (data < first->data && first->left != NULL)
            {
                first = first->left;
            }
            p++;
        }
        if (first->data > data)
        {
            second->data = data;
            first->left = second;
            return 2 * p;
        }
        else
        {
            second->data = data;
            first->right = second;
            return 2 * p + 1;
        }
    }
    return 0;
}

int main()
{
    BST_Nodes *root = NULL;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int pos = insert(&root, a[i]);
        cout << pos << " ";
    }
}
