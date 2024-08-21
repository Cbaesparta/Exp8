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