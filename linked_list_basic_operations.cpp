/*
 *  @author : Ishank Singh
 * 
 *  Linked List Basic Operations like INSERTION, DELETION, TRAVERSING, CREATION.
 */

#include <iostream>

class Node
{

public:
    int data;
    Node *next;
};

void print_linked_list(Node *head)
{
    std::cout << "Nodes are given below\n";
    while (head != NULL)
    {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

void push_front(Node **root)
{
    int val;
    std::cout << "Enter data\n";
    std::cin >> val;
    Node *first = new Node();
    first->data = val;
    first->next = *root;
    *root = first;
}

// Linked List creation
void linked_list_creation()
{
    Node *root = NULL;
    Node *first = NULL;

    root = new Node();
    first = new Node();

    int val, ch;
    std::cout << "Enter data\n";
    std::cin >> val;
    root->data = val;
    root->next = NULL;
    first->next = root;
    first = first->next;
    std::cout << "1. for creating node\n2. For printing linkedlist\n3. for push_front\n4. quit\n";
    std::cin >> ch;

    int count = 1;
    while (ch <= 4)
    {
        switch (ch)
        {
        case 1:
        {
            std::cout << "Enter data\n";
            std::cin >> val;
            Node *second = new Node();
            second->data = val;
            first->next = second;
            second->next = NULL;
            first = first->next;

            std::cout << "1. for creating node\n2. For printing linkedlist\n3. for push_front\n4. quit\n";
            std::cin >> ch;
        }
        break;

        case 2:
            if (root == NULL)
            {
                std::cout << "Linked List is empty\n";
            }
            else
            {
                print_linked_list(root);
                std::cout << "1. for creating node\n2. For printing linkedlist\n3. for push_front\n4. quit\n";
                std::cin >> ch;
            }
            break;

        case 3:
        {
            push_front(&root);
            std::cout << "1. for creating node\n2. For printing linkedlist\n3. for push_front\n4. quit\n";
            std::cin >> ch;
        }
        break;

        case 4:
            return;
            break;

        default:
        {
            std::cout << "Wrong choice! Enter again\n";
            std::cin >> ch;
        }
        break;
        }
    }
}

int main(void)
{
    linked_list_creation();
    return 0;
}