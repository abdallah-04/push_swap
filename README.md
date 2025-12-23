*This project has been created as part of the 42 curriculum by amufleh.*

## Description
Push_swap is an algorithmic sorting project from the 42 curriculum. The goal is to sort a list of unique integers in ascending order using two stacks, a and b, and a limited set of operations.

The program is written in C and must calculate and print the shortest possible sequence of instructions needed to sort the numbers in stack a. For input sizes greater than 5, the project uses a radix sort–based algorithm applied to indexed values. When the number of elements is less than or equal to 5, a hardcoded sorting logic is used to minimize the number of operations.

The allowed operations are:

**sa (swap a):** Swap the first two elements at the top of stack a.

**sb (swap b):** Swap the first two elements at the top of stack b.

**pa (push a):** Move the first element from stack b to the top of stack a.

**pb (push b):** Move the first element from stack a to the top of stack b.

**ra (rotate a):** Shift all elements of stack a up by one.

**rb (rotate b):** Shift all elements of stack b up by one.

## Instructions
- To compile the project, run: 
`make`

- Execution:
`./push_swap 3 2 5 1 4`

- Cleaning: 
     - To remove object files: `make clean`

     - To remove object files and the executable:
 `make fclean`

     - To recompile the project from scratch:
 `make re`

## Resources
### references
42 Push_swap subject PDF

Stack data structure: [GeeksforGeeks Stack](https://www.geeksforgeeks.org/dsa/stack-data-structure/)  

Radix Sort algorithm:  
  - [GeeksforGeeks Radix Sort](https://www.geeksforgeeks.org/dsa/radix-sort/)  
  - [Radix Sort Explained - YouTube Video 1](https://youtu.be/XiuSW_mEn7g?si=W6IKT4GORy-51M3N)  
  - [Radix Sort Explained - YouTube Video 2](https://youtu.be/dPwAA7j-8o4?si=Q0KFxINi42-2Bz91)
### AI Usage
AI tools were used for:
- Generating complex test cases to verify that the program works correctly 