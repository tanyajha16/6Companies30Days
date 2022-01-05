class Solution{
public:
  string printMinNumberForPattern(string S){
        // code here 
        string ans = "";
        int i = 0, j = 0;
        int c = 1;
        while(i <= S.size())
        {
            if(S[i] == 'I' || i == S.size())
            {
                while(c >= 1)
                {
                    if(c<=j)
                    {
                        break;
                    }
                    char ch = c + '0';
                    ans.push_back(ch);
                    c--;
                }
                j = i+1;
                c = i+1;
            }
            c++;
            i++;
        }
        return ans;
    }
};
