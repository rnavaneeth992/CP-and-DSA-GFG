class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        //code here
        int i,s,max,j;
        vector<vector<int>> r;
        queue<Node*> q;
        q.push(root);
        while(q.size()!=0)
        {
            s=q.size();
            vector<int> a;
            for(i=0;i<s;i++)
            {
                Node* temp=q.front();
                q.pop();
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
                a.push_back(temp->data);
            }
            r.push_back(a);
        }
        vector<int> result;
        for(i=0;i<r.size();i++)
        {
            max=-1;
            for(j=0;j<r[i].size();j++)
            {
                if(max<r[i][j])
                {
                    max=r[i][j];
                }
            }
            result.push_back(max);
        }
        return result;
    }
};
