class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int total = 0;
        for(int i = 0; i < n; i++)total += arr[i];
        if(total%2)return false;
        total = total/2;
        vector<vector<bool>> dp(n + 1, vector<bool> (total + 1, false));
        
        for(int i = 0; i <= n; i++)dp[i][0] = true;
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= total; j++)
            {
                if(arr[i - 1] <= j){
                    dp[i][j] = (dp[i - 1][j - arr[i - 1]])||(dp[i - 1][j]);
                }
                else dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][total];
    }
};