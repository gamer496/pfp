int comp(Node *node, int *hei)
{
    if(node == NULL)
    {
        return 0;
    }
    else
    {
        int lh = 0, rh = 0;
        comp(node->left, *lh);
        comp(node->right, *rh);
        *hei = max(lh,rh)+1;
        return *hei;
    }
}



int height(Node *node)
{
    int hei = 0;
    return comp(node, &hei);
}
