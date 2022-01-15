class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       queue<Node*>q;
        q.push(root);
        while(!q.empty()){
          int c=q.size();
          for(int i=0;i<c;i++){
              Node* n=q.front();
              q.pop();
              if(n->left)
              q.push(n->left);
              if(n->right)
              q.push(n->right);
              if(i+1==c)
              n->nextRight=NULL;
              else
              n->nextRight=(q.front());
            }
        }
    }    
      
};
