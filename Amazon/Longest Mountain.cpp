class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        int max=0;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                int j=i-1;
                int k=i+1;
             
                while(j>0 && arr[j]>arr[j-1] )
                {
                        j--;
                   
                }
                while(k<n-1 && arr[k]>arr[k+1])
                {
                        k++;
                }
                
                // cout<<"j"<<j<<"k"<<k<<endl;
                count=k-j+1;
               
            }
             if(count>max)
                    max=count;
            // cout<<count<<endl;   
        }
         
        return max;
    }
};