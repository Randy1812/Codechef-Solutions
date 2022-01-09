#include <iostream>
using namespace std;

int main() {
	int t,m,n;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    if(m%2==0){
	        m/=2;
	    }
	    else{
	        m=(m+1)/2;
	    }
	    if(n%2==0){
	        n/=2;
	    }
	    else{
	        n=(n+1)/2;
	    }
	    cout<<m*n<<"\n";
	}
	return 0;
}
