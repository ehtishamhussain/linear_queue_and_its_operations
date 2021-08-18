#include <iostream>
#include <stdlib.h>
using namespace std;

struct queue {
    int r;
    int f;
    int size;
    int *arr;
};

int isfull(struct queue *q){
    if(q->r==(q->size-1)){
        return 1;
    }
    else{
    return 0;
    }
}
int isempty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    else{
        return 0;
    }
}

int dequeue(struct queue *q){
    if (isempty(q)){
        cout<<"Stack underflow";
        return 0;
    }
    else{
    
    int val=-1;
    q->f++;
    val=q->arr[q->f];
    cout<<val<<endl;
    return 1;
    }

}

int enqueue(struct queue *q, int val){
    if(isfull(q)){
        cout<<"Stack overflow";
        return 0;
    }
    else{
    
    q->r++;
    q->arr[q->r]=val;
    return 1;
    }


}
int main(){

    struct queue *q;
    q=(struct queue *)malloc(sizeof(struct queue));
    q->size=10;
    q->r=q->f=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));


    enqueue(q,12);
    enqueue(q,14);
    enqueue(q,16);
    enqueue(q,18);

    dequeue(q);
    dequeue(q);
    dequeue(q);
    

    
}