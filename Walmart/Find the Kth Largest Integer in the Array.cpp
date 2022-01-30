class helper {
public:
    bool operator()(string &s1, string &s2)
    {
        if(s1.size() != s2.size())
            return s1.size() < s2.size();

        return s1 < s2;
    }
};

class Solution {
public:    
    string kthLargestNumber(vector<string>& nums, int k) {
        
        priority_queue<string, vector<string>, helper> pq;
        for(auto i : nums)
            pq.push(i);
        
        while(--k)
            pq.pop();
        
        return pq.top();
    }
};
