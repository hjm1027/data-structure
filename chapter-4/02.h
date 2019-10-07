typedef struct LNode{
	ElemType data;
	struct LNode *next;
}*QueuePtr;

typedef struct{
	QueuePtr rear;
}LinkQueue;

void InitQueue_L(LinkQueue &Q){
	Q.rear=Q;
}

bool EnQueue_L(LinkQueue &Q,ElemType e){
	QueuePtr s;
	if((s=(LNode*)malloc(sizeof(LNode)))==NULL) return false;
	s->data=e;
	s->next=NULL;
	if(Q.rear==NULL) {
		Q.rear=s;
	}else{
		Q.rear=Q.rear->next=s;
	}
	return true;
}

bool DeQueue_L(LinkQueue &Q,ElemType &e){
	QueuePtr p;
	while(p->data==0)
		p=p->next;
	e=p->data;
	free(p);
	return true;
}
