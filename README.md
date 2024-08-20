# Exp8
## 2D Array Matrices in C++
In C++, a 2D array is used to store data in a structured grid format consisting of rows and columns. This structure allows for organized storage and easy access to elements using a pair of indices, (i, j), where i represents the row, and j the column. The 2D array can be seen as an array of arrays. Internally, the elements are stored in contiguous memory, typically following a row-major order where the elements of each row are placed next to each other. This layout influences the speed and efficiency of accessing and modifying elements.

## Operations on 2D Arrays
Common operations on 2D arrays include iterating through each element using nested loops, performing element-wise operations such as matrix addition or subtraction by combining corresponding elements, and matrix multiplication, which involves summing the products of rows from one matrix and columns from another. Additionally, transposing a matrix involves swapping its rows and columns, effectively flipping it along its diagonal. These operations form the foundation for various matrix manipulations in mathematics and programming.

## Dynamic Allocation in 2D Arrays
Unlike static arrays, which require size determination at compile time, dynamically allocated 2D arrays allow for flexibility when the matrix size is unknown beforehand. By utilizing pointers and dynamic memory allocation with functions like new and delete, C++ allows the creation of 2D arrays at runtime, adjusting their dimensions according to program needs. This provides greater control over memory usage, but also demands careful memory management to avoid leaks or undefined behavior.

## Limitations and Alternatives
While 2D arrays offer straightforward implementation and direct access to elements, they come with limitations such as fixed size in the case of static arrays and the risk of errors in manual memory management when dealing with dynamically allocated arrays. To overcome these issues, more versatile data structures like std::vector can be used, providing automatic resizing and memory management. Additionally, libraries such as Eigen or Armadillo offer optimized, high-level abstractions for matrix operations, significantly simplifying work with large datasets or complex calculations.

## Applications of 2D Arrays
The theory behind 2D arrays is crucial for solving real-world problems in areas like mathematics, scientific computing, computer graphics, and data analysis. Their ability to organize data into a tabular format makes them a natural choice for algorithms that involve grids, image processing, or matrix-based computations. Though simple, the concepts of 2D arrays form the backbone for more complex structures and operations in C++.
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
Enter element-(00): 12
Enter element-(01): 23
Enter element-(02): 34
Enter element-(10): 56
Enter element-(11): 67
Enter element-(12): 78
Enter element-(20): 89
Enter element-(21): 90
Enter element-(22): 01
12 23 34 
56 67 78 
89 90 1
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
Enter element at position (0, 1): 1
Enter element at position (0, 2): 2
Enter element at position (1, 0): 3
Enter element at position (1, 1): 6
Enter element at position (1, 2): 3
Enter element at position (2, 0): 8
Enter element at position (2, 1): 4
Enter element at position (2, 2): 0
Difference of matrices:
1 1 1 
1 -1 3 
-1 4 9
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
