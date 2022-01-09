#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode
{
    char data[100];
    struct stackNode *nextPtr;    
}StackNode;

typedef StackNode *StackNodePtr;
void push(StackNodePtr *topPtr, char info[], int i);
void printStack(StackNodePtr currentPtr, int i);

int main (int argc, char *argv){
    StackNodePtr stackPtr = NULL;
    int i = 0;
    char name[100];
    while (scanf("%s", &name[i]) != EOF)
    {
        push(&stackPtr, &name[i], i);
        i++;
    }
    printStack(stackPtr, i);
}

void push(StackNodePtr *topPtr, char info[], int i){
    StackNodePtr newPtr = malloc(sizeof(StackNode));
    newPtr -> data[i] = info[i];
    newPtr -> nextPtr = *topPtr;
    *topPtr = newPtr;
}

void printStack(StackNodePtr currentPtr, int i){
    while (currentPtr != NULL)
    {   
        for (int j = 0; j < i; j++)
        {
            printf("%s", currentPtr -> data[j]);
            currentPtr = currentPtr -> nextPtr;
        }
    }
}