#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
// 	formula of number of squares in a chessboard is (n*(n+1)*(2n+1))/6 

int ans= (n*(n+1)/2) * ((2*n+1)/3);
 cout<<ans<<endl;
}
