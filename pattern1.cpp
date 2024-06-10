#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int matrix[n][n];
    int value = 1;
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = n - 1;

    while (value <= n * n) {
        // Traverse right
        for (int i = col_start; i <= col_end; i++) {
            matrix[row_start][i] = value++;
        }
        row_start++;

        // Traverse down
        for (int i = row_start; i <= row_end; i++) {
            matrix[i][col_end] = value++;
        }
        col_end--;

        // Traverse left
        for (int i = col_end; i >= col_start; i--) {
            matrix[row_end][i] = value++;
        }
        row_end--;

        // Traverse up
        for (int i = row_end; i >= row_start; i--) {
            matrix[i][col_start] = value++;
        }
        col_start++;
    }

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
