class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    void inorder(Node* root,int &z)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,z);
        if(root->left!=NULL||root->right!=NULL)
        {
            int sum=0;
            if(root->left!=NULL)
            {
                sum+=root->left->data;
            }
            if(root->right!=NULL)
            {
                sum+=root->right->data;
            }
            if(sum!=root->data)
            {
                z=1;
            }
        }
        inorder(root->right,z);
    }
    int isSumProperty(Node *root)
    {
     // Add your code here
        int z=-1;
        inorder(root,z);
        return z==-1;
    }
};
