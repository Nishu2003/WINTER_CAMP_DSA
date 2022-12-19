#include<iostream>
using namespace std;
void copy(char name[]){
    char copy[20]={};
    for(int i=0;name[i]!='\0';i++){
        copy[i]=name[i];
    }

    cout<<"Original character : ";
    for(int i=0;name[i]!='\0';i++){
        cout<<name[i];
    }
    cout<<endl;
    cout<<"Copied character : ";
    for(int i=0;copy[i]!='\0';i++){
        cout<<copy[i];
    }
    
}

int main(){
    char name[20];
    cout<<"Enter a string : ";
    gets(name);
    copy(name);

}