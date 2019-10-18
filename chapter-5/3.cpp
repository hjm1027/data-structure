typedef int ElemType;
#include <iostream>
using namespace std;
#include <iomanip>
#include <stdio.h>
#include <SLinkString.h>
#include <stdlib.h>

void delect_ch(SLinkString &S){
	SLinkString p = S->next;
	SLinkString q = S;
	q->next=p;
	while (p->next) {
		if (p->str=='c'&&p->next->str){
			if(!p->next->next){
				q->next=NULL;
			}
			else{
				q->next=p->next->next;
				p=q->next;
			}
		}
		p = p->next;
		q = q->next;
	}	
}

int main(){
	SLinkString s;
	char str1[80];
	scanf("%s",str1);
	StrAssign_L(s,str1);
	StrTraveres_L(s);
	delect_ch(s);
	StrTraveres_L(s);
	return 0;
}
