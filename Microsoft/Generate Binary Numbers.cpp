vector<string> generate(int N)
{
	// Your code here
	vector<string>res;
    string ans="";
	// Your code here
	for(int i=1;i<=N;i++){
	    int a=i;
	    while(a){
	        int b= a%2;
	        ans=to_string(b)+ans;
	        a=a/2;
	    }
	    res.push_back(ans);
	    ans="";
	}
	return res;
}
