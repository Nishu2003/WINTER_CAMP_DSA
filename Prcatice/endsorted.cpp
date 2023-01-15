#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int p[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    
	    int first=0,last=0;
	    
	    for(int i=0;i<n;i++){
	        if(p[i]==1)
	        first=i;
	        if(p[i]==n)
	        last=i;
	    }
	    
	    if(last<first)
	    cout<<(first+((n-1)-last))-1<<endl;
	    else
	    cout<<first+((n-1)-last)<<endl;
	    
	}
	return 0;
}
