# Exp8
## 2D Array Matrices in C++
### Overview
A 2D array in C++ is a data structure that allows for the storage of data in a grid-like format, consisting of rows and columns. This structure is particularly useful for organizing and accessing data efficiently. It can be visualized as an array of arrays, where each element of the main array represents a row, and each row itself is an array of elements.

### Structure
Type: Type array[rows][columns]
Access: Elements are accessed using two indices: (i, j), where i represents the row index, and j represents the column index.
### Memory Layout
**Contiguous Storage:** Elements are stored in contiguous memory locations.
Row-Major Order: In C++, a 2D array is stored in row-major order. This means that the elements of each row are stored next to each other in memory.

## Operations on 2D Arrays
### Overview
2D arrays support various operations that are fundamental to matrix manipulations in both mathematics and programming. These operations include iterating through elements, performing arithmetic operations, and transforming the matrix structure.

## Common Operations
### 1. Iterating Through Elements
To process each element of a 2D array, nested loops are used. The outer loop iterates over rows, while the inner loop iterates over columns.
### 2. Element-Wise Operations
Matrix Addition/Subtraction: Combine corresponding elements from two matrices of the same size.
### 3. Matrix Multiplication
Matrix Multiplication: Compute the product of two matrices. The element at position (i, j) in the resulting matrix is obtained by summing the products of corresponding elements from the i-th row of the first matrix and the j-th column of the second matrix.
### 4. Transposing a Matrix
Matrix Transposition: Swap rows and columns, flipping the matrix along its diagonal.
### 5. Diagonal Addition
Diagonal Addition: Compute the sum of elements along the primary and secondary diagonals of a square matrix. The primary diagonal runs from the top-left to the bottom-right, while the secondary diagonal runs from the top-right to the bottom-left.

## Dynamic Allocation in 2D Arrays

- **Flexibility**: Dynamic allocation allows for creating 2D arrays with dimensions determined at runtime, accommodating varying data sizes.
  
- **Pointer-Based Allocation**: Utilize raw pointers and the `new` keyword to allocate and manage memory for 2D arrays dynamically, requiring explicit memory deallocation to prevent leaks.

- **Automatic Management with `std::vector`**: Use `std::vector` for simpler dynamic 2D array management, where memory allocation and deallocation are handled automatically.

- **Allocation Process**: Allocate an array of pointers for rows and then allocate each row individually. This approach requires careful management of memory.

- **Deallocation**: Ensure proper deallocation by deleting each row individually before deleting the array of pointers to avoid memory leaks.

- **Performance Considerations**: Raw pointer management can be error-prone and may introduce performance overhead compared to `std::vector`, which simplifies memory management at the cost of some overhead.

## Limitations and Alternatives

2D arrays provide a straightforward way to manage matrix-like data structures but come with limitations, including fixed sizes for static arrays and potential errors in manual memory management for dynamic arrays.

- **Fixed Size for Static Arrays**: Static 2D arrays require dimensions to be known at compile time, limiting flexibility and resizing options.

- **Manual Memory Management**: Dynamically allocated 2D arrays using raw pointers require explicit allocation and deallocation, increasing the risk of memory leaks and errors.

- **Risk of Errors**: Manual management of memory can lead to errors such as memory leaks, dangling pointers, and undefined behavior if not handled carefully.

- **Limited Functionality**: Basic 2D arrays lack advanced features for matrix operations, such as automatic resizing or built-in algorithms for common tasks.

- **Automatic Resizing with `std::vector`**: `std::vector` offers dynamic resizing and automatic memory management, making it a more flexible and safer alternative to raw pointers.

- **High-Level Libraries**: Libraries like Eigen and Armadillo provide optimized, high-level abstractions for matrix operations, simplifying complex calculations and operations on large datasets.

- **Ease of Use**: These libraries and data structures abstract away low-level memory management, reducing the likelihood of errors and improving productivity in matrix-related computations.

## Applications of 2D Arrays

2D arrays are essential for addressing various real-world problems due to their ability to organize data in a tabular format. Their use spans multiple domains, leveraging their grid-like structure for effective data management and processing.

- **Mathematics**: Used for matrix operations, such as addition, multiplication, and inversion, which are fundamental in linear algebra and various mathematical computations.

- **Scientific Computing**: Facilitate numerical simulations and modeling, where data is often represented in grids or matrices, such as finite element analysis and computational fluid dynamics.

- **Computer Graphics**: Essential for image representation and manipulation, where pixels are organized in a grid, and operations like filtering, transformation, and rendering are performed.

- **Data Analysis**: Applied in storing and processing tabular data, such as spreadsheets or databases, where rows and columns represent different variables and observations.

- **Game Development**: Used in grid-based games and simulations, such as chess or strategy games, where the game board or environment is represented as a 2D array.

- **Algorithms**: Underpin algorithms that work on grid-based data structures, such as pathfinding algorithms (e.g., A*), flood fill algorithms, and others.

- **Foundational Concept**: The principles of 2D arrays are foundational for understanding and implementing more complex data structures and operations in C++ and other programming languages.
## code
```
//name: Sai Sankar Jena
//prn: 23070123112
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], row, col, x, y;
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            cout << "Enter element-(" << row << col << "): ";
            cin >> matrix[row][col];
        }
    }
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            cout << matrix[x][y] << " ";
        }
        cout << endl;
    }
}
```
## output:
```
Enter element-(00): 528
Enter element-(01): 59
Enter element-(02): 67
Enter element-(10): 45
Enter element-(11): 6
Enter element-(12): 152
Enter element-(20): 3
Enter element-(21): 96
Enter element-(22): 58
52 5 6 
4 6 15 
3 96 58 
```
## code
```
//name: Sai Sankar Jena
//prn: 23070123112

#include <iostream>
using namespace std;

int main() {
    // Define matrix dimensions
    int r1 = 3, c1 = 3;
    int r2 = 3, c2 = 3;
    int m1[r1][c1], m2[r2][c2], res[r1][c1];
    
    cout << "Enter elements of the first matrix:" << endl;
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            cout << "Enter element at position (" << r << ", " << c << "): ";
            cin >> m1[r][c];
        }
    }
    
    cout << "Enter elements of the second matrix:" << endl;
    for (int r = 0; r < r2; ++r) {
        for (int c = 0; c < c2; ++c) {
            cout << "Enter element at position (" << r << ", " << c << "): ";
            cin >> m2[r][c];
        }
    }
    
    // Calculate the sum of both matrices
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            res[r][c] = m1[r][c] + m2[r][c];
        }
    }
    
    cout << endl << "Sum of matrices:" << endl;
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            cout << res[r][c] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
```
## output:
```
Enter elements of the first matrix:
Enter element at position (0, 0): 1
Enter element at position (0, 1): 2
Enter element at position (0, 2): 3
Enter element at position (1, 0): 4
Enter element at position (1, 1): 5
Enter element at position (1, 2): 6
Enter element at position (2, 0): 7
Enter element at position (2, 1): 8
Enter element at position (2, 2): 9
Enter elements of the second matrix:
Enter element at position (0, 0): 0
Enter element at position (0, 1): 11
Enter element at position (0, 2): 12
Enter element at position (1, 0): 13
Enter element at position (1, 1): 14
Enter element at position (1, 2): 15
Enter element at position (2, 0): 16
Enter element at position (2, 1): 17
Enter element at position (2, 2): 18

Sum of matrices:
1 13 15 
17 6 21 
23 25 27 
```
## code
```
//name: Sai Sankar Jena
//prn: 23070123112
#include <iostream>
using namespace std;

int main() {
    int r1 = 3, c1 = 3;
    int r2 = 3, c2 = 3;
    if (r1 != r2 || c1 != c2) {
        cout << "Error: Matrices must have the same dimensions for subtraction." << endl;
        return 1; 
    }

    int m1[r1][c1], m2[r2][c2], diff[r1][c1];

    cout << "Enter elements of the first matrix:" << endl;
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            cout << "Enter element at position (" << r << ", " << c << "): ";
            cin >> m1[r][c];
        }
    }
    
    cout << "Enter elements of the second matrix:" << endl;
    for (int r = 0; r < r2; ++r) {
        for (int c = 0; c < c2; ++c) {
            cout << "Enter element at position (" << r << ", " << c << "): ";
            cin >> m2[r][c];
        }
    }
    
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            diff[r][c] = m1[r][c] - m2[r][c];
        }
    }

    cout << "Difference of matrices:" << endl;
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            cout << diff[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
## output:
```
Enter elements of the first matrix:
Enter element at position (0, 0): 458
Enter element at position (0, 1): 59
Enter element at position (0, 2): 6
Enter element at position (1, 0): 78
Enter element at position (1, 1): 44
Enter element at position (1, 2): 526
Enter element at position (2, 0): 3
Enter element at position (2, 1): 598
Enter element at position (2, 2): 74
Enter elements of the second matrix:
Enter element at position (0, 0): 52
Enter element at position (0, 1): 69
Enter element at position (0, 2): 74
Enter element at position (1, 0): 12
Enter element at position (1, 1): 36
Enter element at position (1, 2): 78
Enter element at position (2, 0): 96
Enter element at position (2, 1): 31
Enter element at position (2, 2): 01

Sum of matrices:
97 74 80 
90 80 130 
99 629 75 
```
## code
```
//name: Sai Sankar Jena
//prn: 23070123112
#include <iostream>
using namespace std;

int main() {
int r1, c1, r2, c2;
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;
    
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    int mA[r1][c1], mB[r2][c2], res[r1][c2];

    cout << "Enter elements of the first matrix:" << endl;
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            cout << "Enter element at position (" << r << ", " << c << "): ";
            cin >> mA[r][c];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int r = 0; r < r2; ++
```
## output:
```
Enter rows and columns for the first matrix: 3
3
Enter rows and columns for the second matrix: 3
3
Enter elements of the first matrix:
Enter element at position (0, 0): 2
Enter element at position (0, 1): 3
Enter element at position (0, 2): 4
Enter element at position (1, 0): 4
Enter element at position (1, 1): 5
Enter element at position (1, 2): 6
Enter element at position (2, 0): 7
Enter element at position (2, 1): 8
Enter element at position (2, 2): 3
Enter elements of the second matrix:
Enter element at position (0, 0): 1
Enter element at position (0, 1): 2
Enter element at position (0, 2): 3
Enter element at position (1, 0): 0
Enter element at position (1, 1): 9
Enter element at position (1, 2): 5
Enter element at position (2, 0): 7
Enter element at position (2, 1): 3
Enter element at position (2, 2): 1
Resultant matrix:
30 43 25 
46 71 43 
28 95 64
```
## code
```
//name: Sai Sankar Jena
//prn: 23070123112

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    int mat[rows][cols], trans[cols][rows];

    cout << "Enter elements of the matrix:" << endl;
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            cout << "Enter element at position (" << r << ", " << c << "): ";
            cin >> mat[r][c];
        }
    }

    // Calculating transpose
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            trans[c][r] = mat[r][c];
        }
    }
    cout << "\nTranspose of the matrix:" << endl;
    for (int r = 0; r < cols; ++r) {
        for (int c = 0; c < rows; ++c) {
            cout << trans[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
## output:
```
Enter the number of rows and columns of the matrix: 3 3
Enter elements of the matrix:
Enter element at position (0, 0): 1
Enter element at position (0, 1): 2
Enter element at position (0, 2): 3
Enter element at position (1, 0): 4
Enter element at position (1, 1): 5
Enter element at position (1, 2): 6
Enter element at position (2, 0): 6
Enter element at position (2, 1): 7
Enter element at position (2, 2): 8

Transpose of the matrix:
1 4 6 
2 5 7 
3 6 8 
```
## code
```
//name: Sai Sankar Jena
//prn: 23070123112
#include <iostream>
using namespace std;

const int MAX = 100;

void diagSum(int mat[][MAX], int n) 
{ 
    int diag = 0;
    for (int i = 0; i < n; i++)  
    { 
        // Summing up the diagonal elements 
        diag += mat[i][i]; 
    } 
    cout << "Sum of the diagonal elements is: " << diag << endl; 
} 

int main() 
{ 
    int arr[][MAX] = {{2, 4, 6, 8},  
                      {1, 3, 5, 7},  
                      {1, 2, 3, 4},  
                      {5, 6, 7, 8}}; 
                      
    diagSum(arr, 4); 
    return 0;
}
```
## output:
```
Sum of the diagonal elements is: 16
```
## CONCLUSION:

This experiment highlights key programming concepts, especially in organizing and manipulating multi-dimensional data using 2D arrays. We learned how to:

1) Store and manipulate data efficiently: 2D arrays simplify operations like matrix addition, subtraction, and multiplication.
2) Develop problem-solving skills: Implementing matrix operations enhances logical thinking by managing indices and loops.
3) Understand memory management: Working with 2D arrays improves our understanding of memory allocation in programming.
4) Apply to real-world scenarios: Matrix operations are crucial in fields like engineering, computer graphics, and machine learning, preparing us for complex problem-solving.
