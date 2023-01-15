#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    
	    if(y>=x)
	    cout<<y-x<<endl;
	    
	    else
	    cout<<0<<endl;
	}
	return 0;
}
