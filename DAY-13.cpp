#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A,B,X,Y;
	    cin>>A>>B>>X>>Y;
	    if((A*B)<=(X*Y)){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
