class Solution
{
    public:
    void inorder1(struct Node * root, int &s)
    {
        if(root==NULL)
        {
            return;
        }
        inorder1(root->left,s);
        s=s+root->data;
        inorder1(root->right,s);
    }
    void inorder2(struct Node * root, int &s)
    {
        if(root==NULL)
        {
            return;
        }
        inorder2(root->left,s);
        s=s-root->data;
        root->data=s;
        inorder2(root->right,s);
    }
    void transformTree(struct Node *root)
    {
        //code here
        int sum=0;
        inorder1(root,sum);
        inorder2(root,sum);
    }
};
