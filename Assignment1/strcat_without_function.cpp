#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[20] = "nishu";
    char p[7] = "kumari";
    int i=0;
    while(s[i]!='\0')
        ++i;
    for(int j=0;p[j]!='\0';j++){
        s[i]=p[j];
        ++i;
    }
    s[i] = '\0';
    cout<<s;
return 0;}
