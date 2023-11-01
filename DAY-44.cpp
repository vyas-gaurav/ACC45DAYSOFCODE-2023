#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int x=n*2;
	    if(n<m)
	    {
	        cout<<n<<endl;
	    }
	    else{
	        cout<<x-m<<endl;
	    }
	}
	return 0;
}
