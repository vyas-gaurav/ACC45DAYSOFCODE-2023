#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int s, x, y, z;
	    cin>>s>>x>>y>>z;
	    
	    if (s < x+y+z) {
	        if (s>=y+z || s>=x+z) cout<<1;
	        else cout<<2;
	    }
	    else cout<<0;
	    cout<<endl;
	}
	return 0;
}
