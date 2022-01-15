class Solution{
public:
    int minSteps(int D){
        // code here
        int st = 0, s = 0;
        while(true)
        {
            s += st;
            st++;
            if(s == D)
            {
                return (st-1);
                break;
            }
            if(s > D && (s-D)%2 == 0)
            {
                return (st-1);
                break;
            }
        }
        return 0;
    }
};