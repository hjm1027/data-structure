#define QUENU_INIT_SIZE 100
#define QUENUINCREMENT 10
typedef struct {
    ElemType *queue;
    int front;
    int rear;
    int tag=0;
    int queuesize;
    int incrementsize;
}SqQueue;

void InitQueue_Sq(SqQueue &Q,int maxsize=QUENU_INIT_SIZE,int incresize=QUENUINCREMENT){
    Q.queue=(ElemType*)malloc(maxsize*sizeof(ElemType));
    if(!Q.queue) exit(01);
    Q.front=Q.rear=0;
    Q.queuesize=maxsize;
    Q.incrementsize=incresize;
}

bool EnQueue_Sq(SqQueue &Q,ElemType e){
    if(Q.rear==Q.front&&Q.tag==1)
    {
        Q.queue=(ElemType*)realloc(Q.queue,(Q.queuesize+Q.incrementsize)*sizeof(ElemType));
        if(!Q.queue) return false;
        if(Q.front>Q.rear){
            for(int i=Q.queuesize;i>=Q.front;i--){
                Q.queue[i+Q.incrementsize]=Q.queue[i];
            }
            Q.front+=Q.incrementsize;
        }
        Q.queuesize+=Q.incrementsize;
    }
    Q.queue[Q.rear]=e;
    Q.rear=(Q.rear+1)%Q.queuesize;
    Q.tag=1;
    return true;
}

bool DeQueue_Sq(SqQueue &Q,ElemType &e){
    if(Q.front==Q.rear&&Q.tag==0) return false;
    e=Q.queue[Q.front];
    Q.front=(Q.front+1)%Q.queuesize;
    Q.tag=0;
    return true;
}
