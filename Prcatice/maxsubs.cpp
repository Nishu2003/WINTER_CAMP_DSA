#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    
	    int seconds=x*60;
	    cout<<(seconds)/30<<endl;
	}
	return 0;
}
