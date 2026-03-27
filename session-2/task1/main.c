
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
    Node *n = list->head;
    addNode(list,n,2);
    Node *second = list->head->next;
    addNode(list,second,3);
    addNode(list,n,4);
    addNode(list,(Node *)NULL,5);

    // display the list
    traverseI( list->head );

    // add and delete more nodes with addNode() and deleteNode()
    // deallocate deleted nodes - test with valgrind to check this - did thi with freenode in removenode function
    removeNode( list, n);
    n=NULL;
    traverseI( list->head );




    // free list memory
    freeNodes( list->head );
    free( list );


    return 0;
}
