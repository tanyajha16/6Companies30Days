class Solution{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int>v;
    void help(Node* root)
    {
        if(!root)
        {
            return;
        }
        help(root->left);
        v.push_back(root->data);
        help(root->right);
    }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        help(root);
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       struct Node*newRoot = new Node(-1);
       Node* res = newRoot;
       int n = A.size();
       for(int i = 0; i<n; i++)
       {
           res->right = new Node(A[i]);
           res = res->right;
       }
       return newRoot->right;
    }
};