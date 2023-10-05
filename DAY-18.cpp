#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>=y)
        cout<<7-x<<endl;
        else
        cout<<7-y<<endl;
    }
}
