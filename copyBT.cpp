
void copyTree(node *& tree2, node *& tree)
{
if(tree == NULL)
{
    tree2 = NULL;
}
else
{
    tree2 = new node;
    tree2->data = tree->data;

    copyTree(tree2->left, tree->left);
    //cout << tree2->data << " ";
    copyTree(tree2->right, tree->right);
}
}


