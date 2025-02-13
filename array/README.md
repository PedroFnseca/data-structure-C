# 3D Matrix Manipulation in C

This program implements the allocation, filling, printing, and deallocation of a dynamically allocated three-dimensional matrix in C.

## Program Structure

The program follows these steps:
1. **Reading Dimensions**: The user inputs the X, Y, and Z sizes of the matrix.
2. **Dynamic Allocation**: The matrix is dynamically allocated in memory.
3. **Matrix Filling**: The user enters values for each matrix position.
4. **Matrix Printing**: The matrix is displayed on the screen.
5. **Memory Deallocation**: The allocated memory is properly freed to prevent leaks.

## Implemented Functions

- `void fillSizeMatriz(int *x, int *y, int *z)`: Requests the user to enter the three-dimensional matrix dimensions.
- `void mallocMatriz(int ****matriz, int x, int y, int z)`: Dynamically allocates a three-dimensional integer matrix.
- `void fillMatriz(int ***matriz, int x, int y, int z)`: Fills the matrix with user-provided values.
- `void printMatriz(int ***matriz, int x, int y, int z)`: Displays the three-dimensional matrix on the screen.
- `void freeMatriz(int ***matriz, int x, int y, int z)`: Frees the allocated memory for the matrix.

## How to Run

1. Compile the code using a C compiler:
   ```sh
   gcc array.c -o array
   ```
2. Run the program:
   ```sh
   ./array
   ```
3. Enter the required values when prompted.

## Example Input and Output

**Input:**
```
Enter dimension X: 2
Enter dimension Y: 2
Enter dimension Z: 2
x: 0, y: 0, z: 0    1
x: 0, y: 0, z: 1    2
x: 0, y: 1, z: 0    3
x: 0, y: 1, z: 1    4
x: 1, y: 0, z: 0    5
x: 1, y: 0, z: 1    6
x: 1, y: 1, z: 0    7
x: 1, y: 1, z: 1    8
```

**Output:**
```
1 	2 
3 	4 

5 	6 
7 	8 
```

## Considerations

- The program ensures that all dynamically allocated memory is freed at the end.
- The functions follow a modular approach, making the code easier to understand and maintain.
- The use of `malloc` and `free` allows flexible memory allocation, adapting to the user's needs.

