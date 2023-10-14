#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int X,Y;
	    cin>>X>>Y;
	    cout<<min(X/2,Y)<<endl;
	}
	return 0;
}
