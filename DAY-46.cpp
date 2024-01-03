//  ?????? ??? ??????????  ?????? ??? ??????????  ?????? ??? ?????????
#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Code Written By: Vikash Patel

/*
    ?????? ??? ??????????  ?????? ??? ??????????  ?????? ??? ??????????
    __     __  ___   _  __     _      ____    _   _ 
    \ \   / / |_ _| | |/ /    / \    / ___|  | | | |
     \ \ / /   | |  | ' /    / _ \   \___ \  | |_| |
      \ V /    | |  | . \   / ___ \   ___) | |  _  |
       \_/    |___| |_|\_\ /_/   \_\ |____/  |_| |_|

     
    +-+ +-+ +-+ +-+ +-+ +-+
    |V| |I| |K| |A| |S| |H|
    +-+ +-+ +-+ +-+ +-+ +-+
   
      _     _     _     _     _     _  
     / \   / \   / \   / \   / \   / \ 
    ( V ) ( I ) ( K ) ( A ) ( S ) ( H )
     \_/   \_/   \_/   \_/   \_/   \_/
  
    #     #  ###  #    #     #      #####   #     # 
    #     #   #   #   #     # #    #     #  #     # 
    #     #   #   #  #     #   #   #        #     # 
    #     #   #   ###     #     #   #####   ####### 
     #   #    #   #  #    #######        #  #     # 
      # #     #   #   #   #     #  #     #  #     # 
       #     ###  #    #  #     #   #####   #     #
    

    ?????? ??? ??????????  ?????? ??? ??????????  ?????? ??? ?????????
*/

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int l[n], r[n];
       for(int i=0; i<n; i++)
       {
           cin>>l[i];
       }
       for(int i=0; i<n; i++)
       {
           cin>>r[i];
       }
       int index, maxi = -1, rmax = -1;
       for(int i=0; i<n; i++)
       {
           int prod = l[i]*r[i];
           if(prod > maxi || (prod == maxi && r[i] > rmax))
			{
				maxi = prod;
				rmax = r[i];
				index = i+1;
			}
       }
       cout<<index<<endl;
    }
    return 0;
}
