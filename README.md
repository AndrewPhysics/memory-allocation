# memory-allocation
1 and 2 dimension memory allocation

There may be cases where the memory needs of a program can only be determined during runtime.
For example, when the memory needed depends on user input. On these cases, programs need to dynamically
allocate memory, for which the C++ language integrates the operators new and delete.

Dynamic memory is allocated using operator new, new is followed by a data type specifier and, if a sequence
of more than one element is required, the number of these within brackets []. It returns a pointer to the
beginning of the new block of memory allocated.

This procedure is used in the first function where memory allocated for one dimension integer array with size
determined during runtime.

In the second function 2 dimension array is allocated, the size of the rows in matrix is not dinamic but the 
column size is dinamic.  

In the third function both row and column size is dinamic, the memory allocation is made by pointer vector.
