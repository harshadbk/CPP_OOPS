#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int mat[10][10];

public:
    Matrix(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
    }

    void input() {
        cout << "Enter elements (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix m1) {
        Matrix result(rows, cols);
        if (rows != m1.rows || cols != m1.cols) {
            cout << "Matrix addition not possible... dimension mismatch!" << endl;
            return result;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[i][j] = mat[i][j] + m1.mat[i][j];
            }
        }
        return result;
    }

    Matrix operator*(Matrix m1){
        Matrix Result(rows,cols);
         if (rows != m1.rows || cols != m1.cols) {
            cout << "Matrix addition not possible... dimension mismatch!" << endl;
            return Result;
        }
       for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                Result.mat[i][j] = mat[i][j] * m1.mat[i][j];
            }
        }
        return Result;
    }
};

int main() {
    Matrix m1(2, 2);
    cout << "Enter first matrix:\n";
    m1.input();

    Matrix m2(2, 2);
    cout << "Enter second matrix:\n";
    m2.input();

    cout << "\nMatrix 1:\n";
    m1.display();

    cout << "\nMatrix 2:\n";
    m2.display();

    Matrix m3 = m1 + m2;
    cout << "\nResultant Matrix (Addition):\n";
    m3.display();

    Matrix m4 = m1 * m2;
    cout << "\n Resultatnt matrix (Multiplication):\n";
    m4.display();

    return 0;
}