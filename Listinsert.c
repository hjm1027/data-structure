#define MAXSIZE 20
typedef int ElemType;
typedef struct
{
    ElemType data[MAXSIZE];
    int length;
}sqlist;

Status ListInsert(sqlist *L,int i,ElemType e){
    int n;
    if (i >= L->length || length == MAXSIZE)
        return ERROR;
    if (i<1)
    return ERROR;
    for (n = L->length;n>=i;n--){
        L->data[n] = l->data[n-1];
    }
    L->data[i-1] = e;
    L->length++;
    return OK;
}
