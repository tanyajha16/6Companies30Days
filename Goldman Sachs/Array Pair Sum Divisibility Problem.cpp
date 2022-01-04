class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n=nums.size();
        if(n%2==1)
         return false;
        int count=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
          nums[i]=nums[i]%k;
         for(int i=0;i<n;i++)
         {
             int val=k-nums[i];
             if(val==k)
             {
                 if(mp.find(0)!=mp.end() && mp[0]>0)
                 {
                     count++;
                     mp[0]--;
                     mp[nums[i]]--;
                 }
             }
             else if(mp.find(val)!=mp.end() && mp[val]>0)
             {
             count++;
             mp[val]--;
             mp[nums[i]]--;
             }
             mp[nums[i]]++;
         }
         if(count==(n/2))
         return true;
         else
         return false;
    }
};
