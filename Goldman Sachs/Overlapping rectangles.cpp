class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        // either one of the rectangles are left aand one is right so they are not overlapping
        if(L1[0]>R2[0]||L2[0]>R1[0])
          return 0;
          
        // if((L1[1]>L2[1]&&R1[1]>R2[1])||((L1[1]<L2[1])&&(R1[1]<R2[1])))
        
        // if any of the rectangles is above the other so it is not overlapping
        if(L1[1]<R2[1] || L2[1]<R1[1])
          return 0;
        else
         return 1;
    }
};
