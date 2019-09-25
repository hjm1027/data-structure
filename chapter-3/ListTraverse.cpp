typedef int ElemType;
#include <iostream>
using namespace std;
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <LinkList.h>

//typedef struct Node{
//    ElemType data;
//    struct Node *next;
//}LNode,*LinkList;

void ReverseLinlList(LinkList &head){
    LinkList p,q;
    p = head->next;
    head->next = NULL;
    while(p){
        q = p;
        p = p->next;
        q->next = head->next;
        head->next = q;
    }
}

void ReverseLinlList2(LinkList &head){
    LinkList p,q;
    p=q=head->next;
    ElemType e;
    while(p->next){
        p=p->next;
        e=p->data;
           ListInsert_L(head,1,e);
     }
    q->next= NULL;
}

int main(void){
    LinkList L;
    InitList_L(L);
    int a[]={1,3,5,7,9,16,24,56,99};
    CreateList_L_Front(L,a,9);
    ListTraverse_L(L);
    ReverseLinlList(L);
    ListTraverse_L(L);
    ReverseLinlList2(L);
    ListTraverse_L(L);
    return 0;
}
