class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>>v;
        int n=string_list.size();
        map<string,vector<string>>mp;
        for(int i=0;i<n;i++)
        {
            string word=string_list[i];
            sort(word.begin(),word.end());
            
             mp[word].push_back(string_list[i]);
            
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            
           v.push_back(it->second);    
        }
    
    return v;
    }
};