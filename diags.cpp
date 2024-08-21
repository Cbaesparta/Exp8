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