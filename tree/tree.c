/*
Binary Search Tree
*/
typedef struct NodeElement {
    struct NodeElement *left;
    struct NodeElement *right;
    int data;
} NodeElement;

#define MAX(a,b)    ((a>b)?a:b) 

NodeElement *findNode(NodeElement *root, int value)
{
    if( !root )
        return null;
    
    int curValue = root->data;
    if(curValue == value)
        return root;
    else if(curValue < value)
        return findNode(root->right, value);
    else
        return findNode(root->left, value);
}

/*
Height of a Tree
*/
int treeHeight(NodeElement *node)
{
    if( !node )
        return 0;
    else
        return 1+MAX(treeHeight(node->left), treeHeight(node->right));
}

/*
Preorder traversal
*/
void preoderTraversal(NodeElement *root)
{
    if( !root )
        return;
    printf("%d\n", root->data);
    preoderTraversal(root->left);
    preoderTraversal(root->right);
}

/*
Inorder traversal
*/
void inorderTraversal(NodeElemnt *root)
{
    if(!root)
        return;
    inorderTraversal(root->left);
    printf("%d\n", root->data);
    inorderTraversal(root->right);
}

/*
Postorder traversal
*/
void postorderTraversal(NodeElemnt *root)
{
    if(!root)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d\n", root->data);
}