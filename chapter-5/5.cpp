typedef int ElemType;
#include <iostream>
using namespace std;
#include <iomanip>
#include <stdio.h>
#include <DSqString.h>
#include <stdlib.h>

void replace(DSqString &S,DSqString T,int i,int j){
	StrDelete_Sq(S,i,j-i-1);
	StrInsert_Sq(S,i+1,T);
}

int main(void){
	DSqString S;
	DSqString T;
	int i,j;
	char a[50],b[50];
	printf("输入串s:");
	scanf("%s",a);
	printf("输入串t:");
	scanf("%s",b);
	printf("输入i,j");
	scanf("%d%d",&i,&j);
	StrAssign_Sq(S,a);
	StrAssign_Sq(T,b);
	StrTraveres_Sq(S);
	replace(S,T,i,j);
	StrTraveres_Sq(S);
	return 0;
}
