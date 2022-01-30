 vector<int> find3Numbers(vector<int> a, int n) {
       stack<int> s;
       for(int i=n-1;i>=0;i--){
           while(!s.empty()&&s.top()<=a[i])//Pop the elements that are smaller than current number
           s.pop();    
           s.push(a[i]); //push every element since it will always be smaller than stacks top
           if(s.size()==3)break;   //we found answer
       }
       vector<int> ans;
       while(!s.empty()){
           ans.push_back(s.top());
           s.pop();
       }
       if(ans.size()!=3)return {}; // when we don't get three numbers
       return ans;
   
   }
