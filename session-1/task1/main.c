
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"

int main( void ) {

    // create some nodes
    Node *zeroth = createNode(createData(0));
    Node *first = createNode(createData(1));
    Node *second = createNode(createData(2));
    Node *mid = createNode(createData(24));
    Node *third = createNode(createData(3));

    // link the nodes
    zeroth->next = first;
    first->next = second;
    second->next = mid;
    mid->next = third;
    
    // print the data by following links
    traverseI( zeroth );
    traverseW( zeroth );

    // free all node memory (using traversal)
    freeNodes( zeroth );

    return 0;
}
