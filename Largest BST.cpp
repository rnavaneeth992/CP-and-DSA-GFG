class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    vector<int> postorder(Node *root)
    {
        if(root==NULL)
        {
            vector<int> b;
            b.push_back(0);
            b.push_back(-10000000);
            b.push_back(10000000);
            return b;
        }
        if(root->left==NULL&&root->right==NULL)
        {
            vector<int> b;
            b.push_back(1);
            b.push_back(root->data);
            b.push_back(root->data);
            return b;
        }
        vector<int> l=postorder(root->left);
        vector<int> r=postorder(root->right);
        if(l[1]<root->data&&root->data<r[2])
        {
            vector<int> b;
            b.push_back(l[0]+r[0]+1);
            b.push_back(max(root->data,r[1]));
            b.push_back(min(root->data,l[2]));
            return b;
        }
        else
        {
            vector<int> b;
            b.push_back(max(l[0],r[0]));
            b.push_back(10000002);
            b.push_back(-10000002);
            return b;
        }
    }
    int largestBst(Node *root)
    {
    	//Your code here
    	vector<int> a=postorder(root);
    	return a[0];
    }
};
