typedef int ElemType;
#include <iostream>
using namespace std;
#include <iomanip>
#include <stdio.h>
#include <DSqString.h>
#include <stdlib.h>

int count(DSqString S,DSqString T,int n,int i){
    int j=0;
    if (i==S.length) return n;
    while(i<S.length&&j<T.length){
        if(S.str[i]==T.str[j]){
            i++;
            j++;
        }
        else{
            i=i-j+1;
            j=0;
        }
    }
    if (j==T.length) n++;
    count(S,T,n,i);
}

int main(void){
    int i=0;
    DSqString S;
    DSqString T;
    char a[100],b[20];
    printf("输入串s:");
    scanf("%s",a);
    printf("输入串t:");
    scanf("%s",b);
    StrAssign_Sq(S,a);
    StrAssign_Sq(T,b);
    printf("共出现了%d次。\n",count(S,T,0,0));
    return 0;
}
