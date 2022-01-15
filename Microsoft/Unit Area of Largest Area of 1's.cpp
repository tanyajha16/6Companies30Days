class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int max=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1){
                  int ans=helper(i,j,grid);
                  if(ans>max)
                  max=ans;
                }
            }
        }
        return max;
    }
    int helper(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0 || j<0 || i>=grid.size()|| j>=grid[0].size()|| grid[i][j]==0)
          return 0;
         grid[i][j]=0;
        int sum=0;
        sum+=helper(i+1,j,grid);
        sum+=helper(i,j+1,grid);
        sum+=helper(i+1,j+1,grid);
        sum+=helper(i-1,j-1,grid);
        sum+=helper(i-1,j,grid);
        sum+=helper(i,j-1,grid);
        sum+=helper(i+1,j-1,grid);
        sum+=helper(i-1,j+1,grid);
        return sum+1;
    }
};