#include <string>
using namespace std;
#define m 1000000007
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    int n=str.length();
		    
		    int *dp=new int[n+1]();
		    dp[0]=1;
		    dp[1]=1;
		    if(n==1 && str[0]!='0')
		      return 1;
		   if(str[0]=='0' )
		   return 0;
		    
		    for(int i=2;i<=n;i++)
		    {
		        if(str[i-1]>'0')
		        dp[i]=dp[i-1]%m;
		        if(str[i-2]=='1' || str[i-2]=='2' && str[i-1]<'7')
		         dp[i]+=dp[i-2]%m;
		    }
		    int ans= dp[n]%m;
		    return ans;
		 
		    
		}

};
