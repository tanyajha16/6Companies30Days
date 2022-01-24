/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    Node* construct(int r1,int r2,int c1,int c2,vector<vector<int>>& g){
        int tot=(r2-r1+1)*(c2-c1+1);
        if(r1>r2 or c1>c2 or r1<0 or c1<0)
            return NULL;
        
        int tl=0,tr=0,bl=0,br=g[r2][c2];
        Node* root=new Node();
        
        if(r1 and c1)
            tl=g[r1-1][c1-1];
        
        if(r1)
            tr=g[r1-1][c2];
        
        if(c1)
            bl=g[r2][c1-1];
        
        int cnt=br-bl-tr+tl;
        
                // all  values are either 1s or 0s
        if(tot==cnt or cnt==0){
            root->isLeaf=true;
            root->val=cnt;
            return root;
        }
        
        int rm=r1+((r2-r1)>>1),cm=c1+((c2-c1)>>1);
        root->topLeft=construct(r1,rm,c1,cm,g);
        root->topRight=construct(r1,rm,cm+1,c2,g);
        root->bottomLeft=construct(rm+1,r2,c1,cm,g);
        root->bottomRight=construct(rm+1,r2,cm+1,c2,g);
        
        return root;
    }
    
    Node* construct(vector<vector<int>>& g) {
        int i,j,r=g.size(),c=g[0].size();
        
        for(i=1;i<r;i++)
            for(j=0;j<c;j++)
                g[i][j]+=g[i-1][j];
        
        for(i=1;i<c;i++)
            for(j=0;j<r;j++)
                g[j][i]+=g[j][i-1];
        
        return construct(0,r-1,0,c-1,g);
    }

};