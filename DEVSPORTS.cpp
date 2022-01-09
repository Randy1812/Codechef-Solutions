#include <iostream>
using namespace std;

int main() {
	int t,z,y,a,b,c;
	cin>>t;
	while(t--){
	    cin>>z>>y>>a>>b>>c;
	    if(y+a+b+c <= z){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
