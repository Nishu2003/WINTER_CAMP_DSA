#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void heapify(int a[],int n ,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && a[l]>a[largest])
    largest=l;
    if(r<n && a[r]>a[largest])
    largest=r;

    if(largest!=i){
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
    else{ 
    print(a,n);
    }
}

void deletenode(int a[],int n){
    swap(a[0],a[n-1]);
    n=n-1;
    heapify(a,n,0);
}




int main(){
    /*int a[]={70,40,45,50,39,16,10,9,35};*/
    int a[]={10,5,3,2,4};
    /*int n;
    cout<<"Enter the size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        insertnode()
    }*/
    int n=sizeof(a)/sizeof(a[0]);
    deletenode(a,n);
    
    return 0;
}