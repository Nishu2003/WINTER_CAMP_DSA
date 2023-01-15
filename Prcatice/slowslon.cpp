#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int maxt,maxn,sumn;
	    cin>>maxt>>maxn>>sumn;
	    
	    int ans=0;
	    
	    while(maxt--  &&  sumn>0){
	        if(sumn>=maxn){
	            ans=ans+pow(maxn,2);
	            sumn-=maxn;
	        }
	        else{
	            ans=ans+pow(sumn,2);
	            break;
	        }
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
