class Solution{
  public:
  vector<int> arr;
  int k=0;
  void postorder(Node *root)
  {
      if(root==NULL)
      {
          return;
      }
      postorder(root->left);
      postorder(root->right);
      root->data=arr[k];
      k++;
  }
  void inorder(Node *root)
  {
      if(root==NULL)
      {
          return;
      }
      inorder(root->left);
      arr.push_back(root->data);
      inorder(root->right);
  }
    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        inorder(root);
        postorder(root);
    }    
};
