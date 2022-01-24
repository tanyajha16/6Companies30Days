class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(isConnected[i][i]!=1) continue;
            q.push(i);
            count++;
                while(!q.empty())
                {
                    int p=q.front();
                    q.pop();
                    isConnected[p][p]=2;
                    for(int j=0;j<n;j++)
                    {
                        if(isConnected[p][j]==1 && isConnected[p][j]!=2)
                        {
                            q.push(j);
                            isConnected[p][j]=2;
                            isConnected[j][p]=2;
                            isConnected[j][j]=2;
                        }
                    }
                }
            }
        return count;

    }
};