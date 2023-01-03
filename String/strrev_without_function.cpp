#include<iostream>
using namespace std;

void reverse(char a[],int n){
    for(int i=0;i<n/2;i++){
            swap(a[i],a[n-i-1]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}

int main(){
    cout<<"Enter a string of 5 caharacters : ";
    char name[5];
    gets(name);

    reverse(name,5);
return 0;
}
