#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int p[n-1];
	    int sum=0;
	    for(int i=0;i<n-1;i++){
	        cin>>p[i];
	        sum+=p[i];
	    }
	    int max=0;
	    for(int i=0;i<n-1;i++){
	        if(max<p[i])
	        max=p[i];
	    }
	    
	    cout<<sum+max<<endl;
	    
	}
	return 0;
}
