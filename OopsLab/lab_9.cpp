#include <iostream>

using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

class MATRIX {
private:
    int rows, cols;
    int matrix[MAX_ROWS][MAX_COLS];

public:
    MATRIX(int r, int c) : rows(r), cols(c) {
        // Initialize matrix with zeros
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                matrix[i][j] = 0;
            }
        }
    }

    void setElement(int i, int j, int val) {
        if (i >= 0 && i < rows && j >= 0 && j < cols)
            matrix[i][j] = val;
        else
            cout << "Invalid index!" << endl;
    }

    bool operator==(const MATRIX& other) const {
        if (rows != other.rows || cols != other.cols)
            return false;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matrix[i][j] != other.matrix[i][j])
                    return false;
            }
        }
        return true;
    }

    MATRIX operator+(const MATRIX& other) const {
        MATRIX result(rows, cols);

        if (rows == other.rows && cols == other.cols) {
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
                }
            }
        } else {
            cout << "Matrices are not compatible for addition!" << endl;
        }

        return result;
    }

    MATRIX operator-(const MATRIX& other) const {
        MATRIX result(rows, cols);

        if (rows == other.rows && cols == other.cols) {
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
                }
            }
        } else {
            cout << "Matrices are not compatible for subtraction!" << endl;
        }

        return result;
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MATRIX M1(2, 2);
    MATRIX M2(2, 2);

    M1.setElement(0, 0, 1);
    M1.setElement(0, 1, 2);
    M1.setElement(1, 0, 3);
    M1.setElement(1, 1, 4);

    M2.setElement(0, 0, 5);
    M2.setElement(0, 1, 6);
    M2.setElement(1, 0, 7);
    M2.setElement(1, 1, 8);

    cout << "Matrix M1:" << endl;
    M1.display();
    cout << endl;

    cout << "Matrix M2:" << endl;
    M2.display();
    cout << endl;

    if (M1 == M2) {
        cout << "Matrices M1 and M2 are equal." << endl;
    } else {
        cout << "Matrices M1 and M2 are not equal." << endl;
    }

    MATRIX M3 = M1 + M2;
    cout << "Sum of matrices M1 and M2:" << endl;
    M3.display();
    cout << endl;

    MATRIX M4 = M1 - M2;
    cout << "Difference of matrices M1 and M2:" << endl;
    M4.display();
    cout << endl;

    return 0;
}
