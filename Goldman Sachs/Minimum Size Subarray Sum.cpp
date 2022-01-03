class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int n=nums.size();
        int start=0;
        int end=0;
        int sum=0;
        int ans=INT_MAX;
        while(start<n && end<n)
        {
          sum+=nums[end];
            if(sum>=target)
            {
                while(start<=end && sum>=target)
                {
                    ans=min(ans,end-start+1);
                    sum-=nums[start];
                    start++;
                }
            }
            end++;
        }
        if(ans==INT_MAX)
            ans=0;
        return ans;
    }
};
