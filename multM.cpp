//Name: Saanvi Mohapatra
//Prn: 23070123110
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for the first matrix
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;

    // Input dimensions for the second matrix
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    // Define matrices
    int mA[r1][c1], mB[r2][c2], res[r1][c2];

    // Input elements for the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c1; ++c) {
            cout << "Enter element at position (" << r << ", " << c << "): ";
            cin >> mA[r][c];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int r = 0; r < r2; ++r) {
        for (int c = 0; c < c2; ++c) {
            cout << "Enter element at position (" << r << ", " << c << "): ";
            cin >> mB[r][c];
        }
    }

    // Initialize result matrix with zeros
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c2; ++c) {
            res[r][c] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                res[i][j] += mA[i][k] * mB[k][j];
            }
        }
    }

    // Output the result matrix
    cout << "Resultant matrix after multiplication:" << endl;
    for (int r = 0; r < r1; ++r) {
        for (int c = 0; c < c2; ++c) {
            cout << res[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}
