# stacks
A stack is a linear data structure. It is a list in which all insertions and deletions are
made at one end, called the top of the stack.

## Definition
A stack is an ordered collection of homogeneous data elements where the insertion and deletion
operations occur at **one end only**, called the top of the stack.

## Primitive Operations
1. Inserting an element into the stack (PUSH)
2. Removing an element from the stack (POP)
3. Determining the top item of a stack without removing it from the stack (PEEP)

### Other Operations
1. *Checking the Full Condition of the Stack*  
2. *Checking the Emptiness of the Stack*
3. Before Using the Stack, the Size of the Stack and the Variable which Points the Top
    Element of the Stack have to be Initialized.

## Implementation
### 1.Using an array
#####Advantage:
* easy



#####Disadvantage:
* Memory space is wasted.
* There is a limitation in storing the items into the stack.
* Insertion and deletion operations in a stack using an array involves more data movements.



### 2.Using a linked list
##### Advantage:
* The stack does not need to be fixed size
* Insertion and deletion operations do not involve more data movements.(Just change of pointers)
* Memory space is not wasted.

#####Disadvantage:
* more space is used for each node(because pointer fields are involved)