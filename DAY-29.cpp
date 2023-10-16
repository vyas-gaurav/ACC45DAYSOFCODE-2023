#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,x;
	    cin>>a>>b>>c>>x;
	    if(a+b>=x || b+c>=x || c+a>=x || a>=x || b>=x || c>=x)
	    {
	      cout<<"YES"<<endl;  
	    }
	    else
	    cout<<"NO"<<endl;
	}
}
