class Solution {
public:
    vector<vector<int>>dp;
public:
bool checkIfAliceWin(int turn,vector<int>& piles,int ali,int bob,int start,int end){
    
    if(start == end){
        if(turn == 0) ali += piles[start];
        else bob += piles[end];
        
        return ali > bob;
    }
    
    if(dp[start][end] != -1) return dp[start][end];
    
    if(turn == 0) dp[start][end] = checkIfAliceWin(1,piles,ali+piles[start],bob,start+1,end) || checkIfAliceWin(1,piles,ali+piles[end],bob,start,end-1);
    else dp[start][end] = checkIfAliceWin(0,piles,ali,bob+piles[start],start+1,end) || checkIfAliceWin(0,piles,ali,bob+piles[end],start,end-1);
    
    return dp[start][end];
}

bool stoneGame(vector<int>& piles) {
    
  dp.resize(piles.size(), vector<int>(piles.size(), -1));
  
  return checkIfAliceWin(0,piles,0,0,0,piles.size()-1);
}
};
