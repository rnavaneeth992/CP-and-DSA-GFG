{
    public:
    int postorder(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=postorder(root->left);
        int r=postorder(root->right);
        if(l==-1)
        {
            return -1;
        }
        if(r==-1)
        {
            return -1;
        }
        if((root->left==NULL&&root->right==NULL)||l+r==root->data)
        {
            return l+r+root->data;
        }
        else
        {
            return -1;
        }
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         int r=postorder(root);
         return r!=-1;
    }
};
