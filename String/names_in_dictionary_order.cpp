#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    char name[n][20];
    cout<<"Enter "<<n<<" names : "<<endl;
    for(int i=0;i<n;i++){
        cin>>name[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(name[i],name[j])>0){
                swap(name[i],name[j]);
            }
        }
    }

    cout<<endl;
    cout<<"Sorted as per alphabetical order :"<<endl;
    for(int i=0;i<n;i++){
        cout<<name[i]<<endl;
    }

return 0;}
