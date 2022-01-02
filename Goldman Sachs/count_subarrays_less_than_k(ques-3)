//using sliding window for this approach if product is less than k count all the subarrays
//else divide the product until it is less than k and then get the subarrays


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long s=0,e=0,count=0,p=1;
        while(e<n)
        {
            p*=a[e];
            while(p>=k && s<n)
            {
                p/=a[s];
                s++;
                
            }
            if(p<k)
            count+=(e-s)+1;
            e++;
        }
        return count;
    }
};
