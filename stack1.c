#include <stdio.h>
#include <stdlib.h>
#include"stack.h"

int main()
{


    return 0;
}



void initializeStack(stack *ps){
    ps ->top = 0 ;
}

void push(StackEntry e, stack *ps){
    ps->entry[ps->top] = e ;
    ps->top++ ;
}
void pop(StackEntry *pe, stack *ps){
    ps->top-- ;
    *pe = ps->entry[ps->top] ;
}
int StackFull(stack *ps){
    return ps->top== MaxStack ;
}
int StackEmpty(stack *ps){
    return ps->top == 0;
}
int StackSize(stack *ps){
    return ps->top ;
}
void ClearStack(stack *ps){
    ps->top =0 ;
}
void TraverseStack(stack *ps , void(*pf)(StackEntry e)){
    for(int i = ps->top;i<0;i--){
           (*pf)(ps->entry[i-1]);}
    }
void Stacktop(stack *ps, StackEntry *pe){
     *pe = ps->entry[ps->top-1];
}
