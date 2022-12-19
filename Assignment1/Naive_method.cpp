#include<iostream>
#include<string.h>
using namespace std;

void pattern_matching(char* name,char* text){
    int text_len=strlen(text);
    int name_len=strlen(name);
    for(int i=0;i<=name_len-text_len;i++){
            int j=0;
        for(j=0;j<text_len;j++){
            if(name[i+j]!=text[j]){
                break;
            }
        }
        if(j==text_len){
                cout<<"Pattern found at index "<<i<<endl;
                exit(0);
            }
    }
    cout<<"Pattern not found "<<endl;
}

int main(){
    int size1;
    cout<<"Enter the size of text : ";
    cin>>size1;
    char name[size1];
    cout<<"Enter the characters : ";
    for(int i=0;i<size1;i++){
        cin>>name[i];
    }

    int size2;
    cout<<"Enter the size of pattern : ";
    cin>>size2;
    char text[size2];
    cout<<"Enter the pattern : ";
    for(int i=0;i<size2;i++){
        cin>>text[i];
    }


    pattern_matching(name,text);  

  return 0;
}

