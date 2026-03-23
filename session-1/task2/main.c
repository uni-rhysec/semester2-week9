
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"
#include "stack_structures.h"
#include "stack.h"

int main( void ) {

    // create an empty stack
    Stack *stack = createStack();

    // push a node
    push(stack,1);
    traverseI(stack->top);  // display the stack

    pop(stack);
    traverseI(stack->top);
    // push values 1-20
    int i;
    for (i=1;i<=20;i++) {
        push(stack,i);
        traverseI(stack->top);
    }
    // pop values 1-20
    for (i=1;i<=20;i++) {
        printf("popped %d\n",pop(stack)->data->value);
        //traverseI(stack->top);
    }


    // free stack memory
    freeNodes( stack->top );
    // free stack
    free(stack);

    return 0;
}
