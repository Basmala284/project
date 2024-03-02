#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MaxStack 5

typedef int StackEntry ;
typedef struct {

     int top ;
     StackEntry entry[MaxStack]
     }stack ;

void initializeStack(stack *ps);
void push(StackEntry e, stack *ps);
void pop(StackEntry *pe, stack *ps);
int StackFull(stack *ps);
int StackEmpty(stack *ps);
void ClearStack(stack *ps);
void TraverseStack(stack *ps , void(*pf)(StackEntry e));
void Stacktop(stack *ps , StackEntry *pe);
int StackSize(stack *ps);



#endif // STACK_H_INCLUDED
