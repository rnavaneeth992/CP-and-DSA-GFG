class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    void inorder(struct Node * root,vector<int> &a)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,a);
        a.push_back(root->data);
        inorder(root->right,a);
    }
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
        vector<int> a;
        inorder(root,a);
        int i,z=-1,l=0,h=a.size()-1;
        while(l<=h)
        {
            if(a[l]+a[h]==target)
            {
                z=1;
                break;
            }
            else if(a[l]+a[h]>target)
            {
                h--;
            }
            else
            {
                l++;
            }
        }
        return z==1;
    }
};
