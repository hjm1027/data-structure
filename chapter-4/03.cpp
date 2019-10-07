typedef int ElemType;
#include <iostream>
using namespace std;
#include <iomanip>
#include <stdio.h>
#include <SqStack.h>
#include <stdlib.h>

int main(void){
	int e;
	SqStack L;
	InitStack_Sq(L);
	while(scanf("%d",&e)&&e!=-1){
		Push_Sq(L,e);
	}
	while(GetTop_Sq(L,e)){
		Pop_Sq(L,e);
		printf("%d ",e);
	}
	return 0;
}
