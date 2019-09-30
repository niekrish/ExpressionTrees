
//-----------------------------------------------------------------------------
// Stack.h
// Header file for the Stack ADT
// Array implmentation with stack size limitation
// Array of points to arbitrary structures, users will have to cast the pointer
// to set pointer type and keep track of their own logical use of pointers
//
//-----------------------------------------------------------------------------

#ifndef _STACK_H_INCLUDE_
#define _STACK_H_INCLUDE_

#define MAX_STACK 100

typedef struct StackObj {
    void *items[MAX_STACK];
    int	 top;
} StackObj;


StackObj 	*newStack();
void 		deleteStack(StackObj * S);
int 		stackSize( StackObj * S);
void 		*pop(StackObj *S);
void 		push(StackObj *S,  void *ref);
void		printStack(StackObj *S);
#endif
