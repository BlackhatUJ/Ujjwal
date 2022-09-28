#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int data)
{

    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;

    node->left = NULL;
    node->right = NULL;
    return (node);
}

void inorder(struct node *node)
{
    if (node == NULL)
        return;
    inorder(node->left);
    printf("%d\t", node->data);
    inorder(node->right);
}
void preorder(struct node *node)
{
    if (node == NULL)
        return;
    printf("%d\t", node->data);
    preorder(node->left);
    preorder(node->right);
}
void postorder(struct node *node)
{
    if (node == NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    printf("%d\t", node->data);
}
int main()
{

    struct node *root = newnode(1);
    root->left = newnode(2);
    root->left->left = newnode(10);
    root->right = newnode(5);
    root->right->right = newnode(15);
    root->left->right = newnode(9);
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");

    postorder(root);

    return 0;
}
