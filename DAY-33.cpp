#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, a, b;
        cin>>a>>b>>x>>y;     //x +1; y -1;
        if(a==b)
        cout<<"YES"<<endl;
        else if(a<b)
        {
            if(x>=b-a)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
        else if(b<a)
        {
            if(y>=a-b)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

