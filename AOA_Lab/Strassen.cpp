#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

typedef vector<vector<int>> Matrix;

void printMatrix(const Matrix& A) {
    for (const auto& row : A) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

Matrix add(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
    return C;
}

Matrix subtract(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] - B[i][j];
    return C;
}

Matrix strassen(Matrix A, Matrix B) {
    int n = A.size();

    if (n == 1) {
        return {{A[0][0] * B[0][0]}};
    }

    int k = n / 2;
    Matrix A11(k, vector<int>(k)), A12(k, vector<int>(k)), A21(k, vector<int>(k)), A22(k, vector<int>(k));
    Matrix B11(k, vector<int>(k)), B12(k, vector<int>(k)), B21(k, vector<int>(k)), B22(k, vector<int>(k));

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + k];
            A21[i][j] = A[i + k][j];
            A22[i][j] = A[i + k][j + k];

            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + k];
            B21[i][j] = B[i + k][j];
            B22[i][j] = B[i + k][j + k];
        }
    }

    Matrix M1 = strassen(add(A11, A22), add(B11, B22));
    
    Matrix M2 = strassen(add(A21, A22), B11);
    
    Matrix M3 = strassen(A11, subtract(B12, B22));
    
    Matrix M4 = strassen(A22, subtract(B21, B11));
    
    Matrix M5 = strassen(add(A11, A12), B22);
    
    Matrix M6 = strassen(subtract(A21, A11), add(B11, B12));
    
    Matrix M7 = strassen(subtract(A12, A22), add(B21, B22));

    Matrix C11 = add(M1, M4);                         
    Matrix C12 = add(M3, M5);                         
    Matrix C21 = add(M2, M4);                         
    Matrix C22 = add(subtract(M1, M2), add(M3, M6));  

    Matrix C(n, vector<int>(n));
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            C[i][j]         = C11[i][j]; 
            C[i][j + k]     = C21[i][j]; 
            C[i + k][j]     = C12[i][j]; 
            C[i + k][j + k] = C22[i][j]; 
        }
    }

    return C;
}

Matrix strassenWrapper(Matrix A, Matrix B) {
    int n = A.size();
    int m = 1;
    
    while (m < n) {
        m *= 2;
    }

    Matrix A_prep(m, vector<int>(m, 0));
    Matrix B_prep(m, vector<int>(m, 0));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            A_prep[i][j] = A[i][j];
            B_prep[i][j] = B[i][j];
        }
    }

    Matrix C_prep = strassen(A_prep, B_prep);

    Matrix C(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            C[i][j] = C_prep[i][j];
        }
    }
    return C;
}

int main() {
    Matrix A = {
        {1, 2},
        {3, 4}
    };

    Matrix B = {
        {5, 6},
        {7, 8}
    };

    cout << "Matrix A:" << endl;
    printMatrix(A);
    cout << "Matrix B:" << endl;
    printMatrix(B);

    Matrix C = strassenWrapper(A, B);

    cout << "Result Matrix C:" << endl;
    printMatrix(C);

    return 0;
}