

//-----------------------------------------------------------------------------
// ExpTree.h
// Header file for the ExpTree ADT
// ADD COMMENTS
//-----------------------------------------------------------------------------

#ifndef _EXPTREE_H_INCLUDE_
#define _EXPTREE_H_INCLUDE_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Stack.h"


#define MAX_INPUT_STR 80
#define MAX_TOKEN_LENGTH 80
#define MAX_OPERATOR_LENGTH 1
typedef enum {PLUS, MINUS, MUL, DIV, OPERAND, END} tokenType;
    
typedef StackObj ExpT;

typedef struct TNode{
    tokenType type;
    int value;
    struct TNode *leftOperand;
    struct TNode *rightOperand;
} TNode;


// should not be called with empty tree
int expressionEval( TNode *T);
void inorderTraverse(FILE *out, TNode  *T);
void outputExpressionTree(ExpT *T);
void inputExpressionTree(ExpT *T);
void deleteExpressionTree(ExpT *T);
ExpT *newExpressionTree();
#endif
