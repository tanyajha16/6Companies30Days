
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
       int *a=new int[2]();
   
        for(int i=0;i<n;i++)
        {
                
            int val=arr[abs(arr[i])-1];
            if(val>0)
              arr[abs(arr[i])-1]*=-1;
            else
            a[0]=abs(arr[i]);
            
      
        }
     for(int i=0;i<n;i++)
     {
         if(arr[i]>0)
         a[1]=i+1;
     }
        return a;
    }
};
