class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& P) {
        vector<unordered_map<int,int>>table(P.size());
    
    int ans = 0;
    for(int i = 0; i != P.size(); i++){
      for(int j = i+1; j != P.size(); j++){
        int dx = P[i][0] - P[j][0], dy = P[i][1] - P[j][1];
        int dis = dx*dx + dy*dy;
        table[i][dis]++, table[j][dis]++;
      }
      for(auto [d, n]: table[i]) ans += n*(n-1);
    }
              
    return ans;  

    }
};