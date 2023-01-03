#include<iostream>
using namespace std;
void common(int a1[],int a2[],int a3[],int min){
    cout<<"Common elements are : ";
    for(int i=0;i<min;i++){
        if(a1[i]==a2[i] && a1[i]==a3[i]){
            cout<<a1[i]<<" ";
        }
    }
}

int main(){
        cout<<"Enter the size of array 1"<<" : ";
        int size1;
        cin>>size1;
        cout<<"Enter the array elements for array 1 :";
        int a1[size1];
        for(int i=0;i<size1;i++){
            cin>>a1[i];
        }

        cout<<"Enter the size of array 2"<<" : ";
        int size2;
        cin>>size2;
        cout<<"Enter the array elements for array 2 :";
        int a2[size2];
        for(int i=0;i<size2;i++){
            cin>>a2[i];
        }

        cout<<"Enter the size of array 3"<<" : ";
        int size3;
        cin>>size3;
        cout<<"Enter the array elements for array 3 :";
        int a3[size3];
        for(int i=0;i<size3;i++){
            cin>>a3[i];
        }
        int min=0;
        if(size1<size2 && size1<size3)
        min=size1;
        else if(size2<size1 && size2<size3){
            min=size2;
        }
        else
        min=size3;

        common(a1,a2,a3,min);
    return 0;
}