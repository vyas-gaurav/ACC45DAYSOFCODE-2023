#include <iostream>
using namespace std;

int main() {
    int n,h,x,count=0;
	int t[n];
	int flag = 0;
	cin>>n>>h>>x;
	for(int i=0; i<n; i++){
	    cin>>t[i];
	    if(x+t[i] >= h){
	        flag = 1;
	        break;
	    }
	}
	if(flag){
	    cout << "YES"<<endl;
	}
	else{
	    cout << " NO "<<endl;
	}
	
}
