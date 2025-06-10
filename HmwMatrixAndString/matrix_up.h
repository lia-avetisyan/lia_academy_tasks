#ifndef MATRIX_H
#define MATRIX_H

class MyMatrix {
private:
    size_t rows_;
    size_t cols_;
    double** data_;
    void allocateMemory() {
        data_ = new double*[rows_];
        for (size_t i = 0; i < rows_; ++i) {
            data_[i] = new double[cols_]();
        }
    }

    void deallocateMemory() {
        if (data_) {
            for (size_t i = 0; i < rows_; ++i) {
                delete[] data_[i];
            }
            delete[] data_;
            data_ = nullptr;
        }
    }
public:
    MyMatrix() = default;
    MyMatrix(size_t rows, size_t cols) : rows_(rows), cols_(cols) {};
    ~MyMatrix() {
        deallocateMemory();
        rows_ = 0;
        cols_ = 0;
        delete[] data_;
    }

    MyMatrix(const MyMatrix& other) : rows_(other.rows_), cols_(other.cols_) {
        allocateMemory();
        for (size_t i = 0; i < rows_; ++i)
            for (size_t j = 0; j < cols_; ++j)
                data_[i][j] = other.data_[i][j];
    }

    MyMatrix& operator=(const MyMatrix& other) {
        if (this != &other) {
            deallocateMemory();
            rows_ = other.rows_;
            cols_ = other.cols_;
            allocateMemory();
            for (size_t i = 0; i < rows_; ++i)
                for (size_t j = 0; j < cols_; ++j)
                    data_[i][j] = other.data_[i][j];
        }
        return *this;
    }


    MyMatrix(MyMatrix&& other) noexcept : rows_(other.rows_), cols_(other.cols_), data_(other.data_) {
        other.rows_ = 0;
        other.cols_ = 0;
        other.data_ = nullptr;
    }

   
    MyMatrix& operator=(MyMatrix&& other) noexcept {
        if (this != &other) {
            deallocateMemory();
            rows_ = other.rows_;
            cols_ = other.cols_;
            data_ = other.data_;
            other.rows_ = 0;
            other.cols_ = 0;
            other.data_ = nullptr;
        }
        return *this;
    }

    void set(size_t row, size_t col, double value);

    double get(size_t row, size_t col) const;

    size_t getRows() const;

    size_t getCols() const;

    void print() const;
};

#endif //MATRIX_H
