class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int>st;
       st.push(0);
       vector<int>count(n,1);
       count[0]=1;
      
       for(int i=1;i<n;i++)
       {
           if(price[st.top()]>price[i])
           {
           
             count[i]=1;
           }
           else
           {
               while(!st.empty() && price[st.top()]<=price[i] )
               {
                   st.pop();
               }
               if(st.empty())
                  count[i]=i+1;
                else
                count[i]=i-st.top();
           }
             st.push(i);
             
       }
       return count;
       
    }
};