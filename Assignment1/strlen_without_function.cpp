#include<iostream>
using namespace std;

int length(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[]={};
    cout<<"Enter a string : ";
    gets(name);

    cout<<"The length of the string is :  "<<length(name);
    return 0;
}