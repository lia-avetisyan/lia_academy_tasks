#include <iostream>
#include "matrix_up.h"

void MyMatrix::set(size_t row, size_t col, double value) {
    if (row < rows_ && col < cols_) {
        data_[row][col] = value;
    }
}

double MyMatrix::get(size_t row, size_t col) const {
    if (row < rows_ && col < cols_) {
        return data_[row][col];
    }
    return 0;
}

size_t MyMatrix::getRows() const {
    return rows_;
}

size_t MyMatrix::getCols() const {
    return cols_;
}
void MyMatrix::print() const {
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            std::cout << data_[i][j] << " ";
        }
        std::cout << '\n';
    }

}



int main() {

}