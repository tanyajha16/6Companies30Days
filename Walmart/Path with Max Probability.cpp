class Solution {
public:
  double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
    vector<vector<pair<int,double>>> g(n);
    vector<int> visited(n,0);
    
    for(int i = 0; i != edges.size(); i++)
      g[edges[i][0]].push_back({edges[i][1], succProb[i]}), g[edges[i][1]].push_back({edges[i][0], succProb[i]});
    
    auto comp = [](pair<double,int> &a, pair<double,int> &b) -> bool {return a.first < b.first;};
    priority_queue< pair<double,int> ,vector<pair<double,int>>, decltype(comp)> q(comp);
    
    q.push({1.0, start});
    while(!q.empty()){
      auto[p , v] = q.top(); q.pop();
      if(visited[v]) continue;
      if(v == end) return p;
      visited[v] = 1;
      
      for(auto &[tv, tp] : g[v])
        if(!visited[tv]) q.push({p*tp ,tv});
    }
    
    return 0.0;
  }
};
