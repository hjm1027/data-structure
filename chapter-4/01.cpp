typedef int ElemType;
#include <iostream>
using namespace std;
#include <iomanip>
#include <stdio.h>
#include <SqStack.h>
#include <stdlib.h>

bool judge(SqStack &L,char a[]){
	int i=0,e=0;
	while(a[i]){
		e=0;
		if (a[i]=='{'||a[i]=='['||a[i]=='(')
			Push_Sq(L,a[i]);
		if (a[i]=='}'){
			GetTop_Sq(L,e);
			if (e=='{')
				Pop_Sq(L,e);
			else
				return false;
		}
		if (a[i]==']'){
            GetTop_Sq(L,e);
            if (e=='[')
                Pop_Sq(L,e);
            else
                return false;
        }
		if (a[i]==')'){
            GetTop_Sq(L,e);
            if (e=='(')
                Pop_Sq(L,e);
            else
                return false;
        }
		i++;
	}
	if (StackLength_Sq(L)!=0)
		return false;
	return true;
}

int main(void){
	char a[50];
	scanf("%s",a);
	SqStack L;
	InitStack_Sq(L);
	if (judge(L,a))
		printf("正确配对\n");
	else
		printf("没有正确配对\n");
	return 0;
}
