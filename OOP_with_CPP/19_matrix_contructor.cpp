#include <iostream>
#include <initializer_list>
using namespace std;

class Matrix {
public:
    // Constructors
    Matrix(int rows, int cols, std::initializer_list<double> values = {}) :rows_(rows), cols_(cols), data_(new double[rows * cols]) {
        if (values.size() > 0) {
            std::copy(values.begin(), values.end(), data_);
        }
        else {
            std::fill(data_, data_ + rows * cols, 0.0);
        }
    }
    // Copy constructor
    Matrix(const Matrix& other) :rows_(other.rows_), cols_(other.cols_), data_(new double[rows_ * cols_]) {
        std::copy(other.data_, other.data_ + rows_ * cols_, data_);
    }
    display() {
        double* walk = data_;
        for (int i = 0; i < rows_; i++) {
            for (int j = 0; j < cols_; j++) {
                cout << *(walk++) << "\t";
            }
            cout << endl;
        }
        delete[] walk;
    }
    ~Matrix() {
        delete[] data_;
    }
private:
    int rows_;
    int cols_;
    double* data_;
};

int main() {
    Matrix A(2, 3, { 1, 2, 3, 4, 5, 6 });
    cout << "Matrix A" << endl;
    A.display();
    Matrix B(A);
    cout << endl << "Matrix B" << endl;
    B.display();
    return 0;
}

/*
Matrix A
1       2       3
4       5       6

Matrix B
1       2       3
4       5       6
*/