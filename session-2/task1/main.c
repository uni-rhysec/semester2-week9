
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"
#include "list_structures.h"
#include "list.h"

int main( void ) {

    // create an empty list
    List *list = createList();

    // add some nodes
    addNode(list,(Node *)NULL,1); // add at head - special case - pass NULL

    addNode(list,(Node *)NULL,2);

    addNode(list,(Node *)NULL,4);

    // display the list

    traverseI(list);

    // add and delete more nodes with addNode() and deleteNode()
    // deallocate deleted nodes - test with valgrind to check this

    // free list memory
    freeNodes( list->head );

    return 0;
}
