class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        if(N==1)
          return 1;
        int ans=M%N;
        if(ans+K-1==N)
          return ans+K-1;
        else
         return (ans+K-1)%N;
    }
};
