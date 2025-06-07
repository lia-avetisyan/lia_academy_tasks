#ifndef MATRIX_H
#define MATRIX_H

class MyMatrix {
private:
    size_t rows_;
    size_t cols_;
    double** data_;
public:
    MyMatrix() = default;
    MyMatrix(size_t rows, size_t cols) : rows_(rows), cols_(cols) {};
    ~MyMatrix() {
        rows_ = 0;
        cols_ = 0;
        delete[] data_;
    }

    void set(size_t row, size_t col, double value);

    double get(size_t row, size_t col) const;

    size_t getRows() const;

    size_t getCols() const;

    void print() const;
};

#endif //MATRIX_H
