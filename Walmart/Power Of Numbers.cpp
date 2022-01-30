long long power(int N,int R)
    {
       //Your code here
          if(R==0) return 1;
       if(R==1) return N;
       long long ans=power(N, R/2)%1000000007;
       ans=(ans*ans)%1000000007;
       if(R%2==0) {return ans%1000000007;}
       else {return (ans*N)%1000000007;}
    }
