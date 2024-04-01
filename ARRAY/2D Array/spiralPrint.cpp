#include <iostream>
using namespace std;

void spiralPrint(int arr[][3], int n, int m) {
    int total = n * m;
    int startRow = 0;
    int endCol = n - 1;
    int endingRow = m - 1;
    int startingCol = 0;
    int count = 0;

    while (count < total) {
        // First row
        for (int i = startingCol; count < total && i <= endCol; i++) {
            cout << arr[startRow][i] << " ";
            count++;
        }
        startRow++;

        // Last column
        for (int i = startRow; count < total && i <= endingRow; i++) {
            cout << arr[i][endCol] << " ";
            count++;
        }
        endCol--;

        // Last row
        for (int i = endCol; count < total && i >= startingCol; i--) {
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // First column
        for (int i = endingRow; count < total && i >= startRow; i--) {
            cout << arr[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    int m = 3;
    spiralPrint(arr, n, m);
    return 0;
}
