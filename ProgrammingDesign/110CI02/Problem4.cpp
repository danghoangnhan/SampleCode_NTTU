#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

using namespace std;

int showTop(NODE* node){
    return node->data;
}
void pushStack(NODE** top, int data){
    NODE* node;
    node  = (NODE*)malloc(sizeof(NODE));
    if(node == NULL){
        printf("Memory allocation failure\n");
        exit(1);
    }
    node->data = data;
    node->next = *top;
    *top = node;
}
void showStack(NODE* top){
    NODE* node = top;
    while (node != NULL)
    {
        printf("%d\n",node->data);
        node = node->next;
    }
    printf("\n");
}
int popStack(NODE** top){
    int value;
    NODE* node = *top;
    if (node == NULL)
    {
        printf("Stack is empty\n");
        exit(1);
    }
    value = (int) (node->data);
    *top  = node->next;
    free(node);
    return value;
}
int main(void){
    NODE* stackTop = NULL;
    pushStack(&stackTop,5);
    pushStack(&stackTop,6);
    pushStack(&stackTop,2);
    showStack(stackTop);
    printf("%d\n",popStack(&stackTop));
    printf("%d\n", showTop(stackTop));
    return 0;
}