class Solution
{
    public:
    vector<int> a1,a2,a3,a4,a5,a6;
    void inorder(Node * temp, vector<int> a)
    {
        if(temp==NULL)
        {
            return;
        }
        inorder(temp->left,a);
        a.push_back(temp->data);
        inorder(temp->right,a);
    }
    void preorder(Node * temp, vector<int> a)
    {
        if(temp==NULL)
        {
            return;
        }
        a.push_back(temp->data);
        preorder(temp->left,a);
        preorder(temp->right,a);
    }
    void postorder(Node * temp, vector<int> a)
    {
        if(temp==NULL)
        {
            return;
        }
        postorder(temp->left,a);
        postorder(temp->right,a);
        a.push_back(temp->data);
    }
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        inorder(r1,a1);
        inorder(r2,a2);
        postorder(r1,a3);
        postorder(r2,a4);
        preorder(r1,a5);
        preorder(r2,a6);
        int z=-1,i;
        for(i=0;i<a1.size();i++)
        {
            cout<<a1[i]<<" ";
            if(a1[i]!=a2[i])
            {
                z=1;
            }
        }
        cout<<"\n";
        for(i=0;i<a1.size();i++)
        {
            cout<<a3[i]<<" ";
            if(a3[i]!=a4[i])
            {
                z=1;
            }
        }
        cout<<"\n";
        for(i=0;i<a1.size();i++)
        {
            cout<<a5[i]<<" ";
            if(a5[i]!=a6[i])
            {
                z=1;
            }
        }
        cout<<"\n";
        if(z==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
