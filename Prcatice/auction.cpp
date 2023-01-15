#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int res=0;
	    int p=max(a,b);
	    res=max(p,c);
	    
	    if(res==a)
	    cout<<"Alice"<<endl;
	    else if(res==b)
	    cout<<"Bob"<<endl;
	    else
	    cout<<"Charlie"<<endl;
	}
	return 0;
}
