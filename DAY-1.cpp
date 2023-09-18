#include <iostream>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	
	while(T--){
	    int X;
	    std:: cin>> X;
	    
	    if (X >= 2000){
	        std::cout<<"YES" << std::endl;
	    }else{
	        std::cout<<"NO" << std::endl;
	    }
	}
	return 0;
}
