#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s[2000]="Ana are mere si   nuci",s1[2000]="";
    char *p;
    p=strtok(s," ");
    while(p){
        strcat(s1,p);
        cout<<s1<<endl;
        p=strtok(NULL," ");
    }
    cout<<endl<<s1;
    return 0;
}
