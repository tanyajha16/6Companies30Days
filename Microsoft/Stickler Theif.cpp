class Solution{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        if(n==1) return arr[0];
        int a = 0;
        int b = arr[0];
        
        for(int i=2;i<=n;i++)
        {
            int c = max(b, a+arr[i-1]);
            a = b;
            b = c;
        }
        
        return b;
    }
};