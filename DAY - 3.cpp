#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=1;i<=t;i++)
	{
	    int x,y;
	    cin>>x>>y;
	    int required_chair;
	    
	    if(x>y)
	    {
	     required_chair=x-y; 
	     cout<<required_chair<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	    
	}
	return 0;
}
