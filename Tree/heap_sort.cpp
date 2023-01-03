// build the heap
// delete the max heap
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

    if(l<n && a[l]<a[largest])
    largest=l;
    if(r<n && a[r]<a[largest])
    largest=r;

    if(largest!=i){
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}


void heap_sort(int a[],int n){
   for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}


int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=n-1;
    heap_sort(a,n);
    print(a,n);
    return 0;
}