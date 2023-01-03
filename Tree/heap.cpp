#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void heapify(int a[],int n ,int i){
    int p=floor(i/2);
    if(a[p]<a[i]){
        swap(a[p],a[i]);
        i=p;
        
heapify(a,n,i);
    }
    else{
        print(a,n);
    }

}

void insertnode(int a[],int n,int value){
    n++;
    a[n-1]=value;
    int i=n-1;
    heapify(a,n,i);
}




int main(){
    int a[]={70,40,45,50,39,16,10,9,35};
    /*int n;
    cout<<"Enter the size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        insertnode()
    }*/
    int n=sizeof(a)/sizeof(a[0]);
    int value;
    cout<<"Enter the key : ";
    cin>>value;
    insertnode(a,n,value);
    return 0;
}