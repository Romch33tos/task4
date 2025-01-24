#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int m, n;
    cout << "Введите количество строк (m): ";
    cin >> m;
    cout << "Введите количество столбцов (n): ";
    cin >> n;

    int matrix[m][n];

    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxElement = matrix[0][0];
    int minElement = matrix[0][0];
    int maxRow = 0, maxCol = 0;
    int minRow = 0, minCol = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    int temp = matrix[maxRow][maxCol];
    matrix[maxRow][maxCol] = matrix[minRow][minCol];
    matrix[minRow][minCol] = temp;

    cout << "Матрица после замены местами максимального и минимального элементов:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
