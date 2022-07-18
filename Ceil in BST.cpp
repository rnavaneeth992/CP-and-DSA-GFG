void inorder(Node *root,int &r,int &z,int input)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,r,z,input);
    if(z==-1&&root->data>=input)
    {
        z=1;
        r=root->data;
    }
    inorder(root->right,r,z,input);
}
int findCeil(Node* root, int input) {
    int result=-1,z=-1;
    inorder(root,result,z,input);
    return result;
    // Your code here
}
