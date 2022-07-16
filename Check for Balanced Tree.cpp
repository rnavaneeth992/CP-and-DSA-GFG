class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            int lh=height(root->left);
            int lr=height(root->right);
            if(lh<lr)
            {
                return lr+1;
            }
            else
            {
                return lh+1;
            }
        }
    }
    void inorder(Node * root,int &z)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,z);
        int k1=height(root->left);
        int k2=height(root->right);
        if(abs(k1-k2)>1)
        {
            z=1;
        }
        inorder(root->right,z);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        int z=-1;
        inorder(root,z);
        return z==-1;
    }
};
