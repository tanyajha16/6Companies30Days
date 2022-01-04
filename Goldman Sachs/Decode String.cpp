class Solution{
public:
    string decodedString(string s){
        // code here
        int i=0;
        return helper(s,i);
    }
    string helper(string s,int &i)
   {
        string ans; 
        while (i < s.length() && s[i] != ']') {

            if (!isdigit(s[i]))
                ans += s[i++];
            else {
                int n = 0;
                while (i < s.length() && isdigit(s[i]))
                    n = n * 10 + s[i++] - '0';
                i++; 
                string t = helper(s, i);

                i++; 
                while (n--)
                    ans += t;
            }
        }
        
        return ans;
   }
   
};
