 #define ll unsigned long long
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    if(n==0 || n==1)
	      return n;
	    ll *dp=new ll [n]();
	    dp[0]=1;
	    ll i2=0,i3=0,i5=0;
	    ll min_num;
	    for(ll i=1;i<n;i++)
	    {
	       ll num1=dp[i2]*2;
	       ll num2=dp[i3]*3;
	       ll num3=dp[i5]*5;
	       min_num=min({num1,num2,num3});
	       dp[i]=min_num;
	       if(min_num==num1)
	         i2++;
	       if(min_num==num2)
	         i3++;
	       if(min_num==num3)
	         i5++;
	         
	         
	    }
	    return dp[n-1];
	}
};
