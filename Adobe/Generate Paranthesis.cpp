class Solution
{
    public:
    void solve(int a,int b,vector<string>&v,string t)
   {
       if(a==0 and b==0)
       {
           v.push_back(t);
           return;
       }
       
       if(a<b)
       {
           if(a>=0)
           solve(a-1,b,v,t+'(');
           if(b>=0)
           solve(a,b-1,v,t+')');
       }
       else if(a==b)
       {   if(a>=0)
            solve(a-1,b,v,t+'(');
       }
       else
       return;
   }
   
   vector<string> AllParenthesis(int n) 
   {
       vector<string>v;
       solve(n,n,v,"");
       return v;
   }
};