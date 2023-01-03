#include<iostream>
using namespace std;

void cyclic_rotation(int *a,int n){
    int temp=a[n-1];
    for(int i=n-1;i<=0;--i){
        cout<<i<<endl;
    }
    a[0]=temp;

    cout<<"Array after cyclic roattion : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the array elements  : ";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cyclic_rotation(a,n);
    return 0;
}