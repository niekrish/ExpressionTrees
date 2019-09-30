

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ExpTree.h"
/*
 * read input string with contains a post-fix expression and buid the corresponding expression evaluation
 *
 * handles input of one post-fix expressio of integers n read from stdin. Examples:
 *   a b c + +    a b - c +   where a,b,c are integers
 * ignores all white space and uses C's sscanf to find acceptable integer formats.
 *
 */

int
main () {
 
    ExpT  *T;
   
    T = newExpressionTree();
    inputExpressionTree(T);
    outputExpressionTree(T);
    deleteExpressionTree(T);
}


