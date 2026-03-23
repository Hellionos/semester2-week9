
# Stack

## Dynamic array data structure

Data: { int value }

Stack: { int blockSize, int size, Data *data[], int top }

## Stack functions

### Memory management: 

create data structures, reallocate data structures, free data structures

### Stack operations: 

push() and pop()

### Display: 

Traversal operations are now a simple for-loop

## Tasks

### 1. Modify the stack

- Add and remove further nodes
- Use the display function to verify the behaviour

### 2. Compare the implementations

- Compare to the struct implementation in Task 1
    - Which parts are simpler?
    - Which are more complex?
main files look very similar array based stack is slightly easier though
node based is simpler when it comes to the stack by not needing to change alter the size of the stack outside of push and pull unlike array based but array based doesn't have an extra node file which is a significant improvement 
- Which implementation would be preferred in general?
array based seems to be better to me
