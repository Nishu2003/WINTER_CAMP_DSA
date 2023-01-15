#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    int min1=min(a,b);
	    int max1=max(a,b);
	    
	    
	   while(min1<max1){
	       min1=min1*2;
	   }
	   if(min1==max1)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
	}
	return 0;
}
