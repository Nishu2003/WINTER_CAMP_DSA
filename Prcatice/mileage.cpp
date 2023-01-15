#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;
	    
	    float pet=(x*1.0/a)*n;
	    float die=(y*1.0/b)*n;
	    
	    if(pet>die)
	    cout<<"DIESEL"<<endl;
	    else if(pet<die)
	    cout<<"PETROL"<<endl;
	    else
	    cout<<"ANY"<<endl;
	}
	
	return 0;
}
