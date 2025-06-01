#include <iostream>

class My_Vector {

private:
    size_t m_size;
    size_t m_capacity;
    int* m_data;

    void reallocate(size_t new_capacity) {
        int* new_data = new int[new_capacity];
        for (size_t i = 0; i < m_size; ++i) {
            new_data[i] = m_data[i];
        }
        delete[] m_data;
        m_data = new_data;
        m_capacity = new_capacity;
    }

public:
    My_Vector() {
        m_size = 0;
        m_capacity = 0;
        m_data = nullptr;
    }

    My_Vector(size_t _size, int val) {
        m_size = _size;
        m_capacity = _size * 2;
        m_data = new int[m_capacity];
        for (size_t i = 0; i < m_size; ++i) {
            m_data[i] = val;
        }
    }

    ~My_Vector() {
        m_capacity = 0;
        m_size = 0;
        m_data = nullptr;
        delete[] m_data;
    }

    size_t size() {
        return m_size;
    }

    size_t capacity() {
        return m_capacity;
    }

    void push_back(int val) {
        if (m_size == m_capacity && m_capacity != 0) {
            size_t new_capacity = m_capacity * 2;
            reallocate(new_capacity);
        }
        m_data[m_size] = val;
        ++m_size;
    }


    void pop_back() {
        if (m_size != 0) {
            --m_size;
        }
    }

    void resize(size_t new_size) {
        if (new_size > m_capacity) {
            size_t new_capacity = new_size * 2;
            reallocate(new_capacity);
        }
        int old_size = m_size;
        m_size = new_size;
        for (size_t i = old_size; i < m_size; ++i) {
            m_data[i] = 0;
        }
    }

    void clear() {
        m_size = 0;
    }
};

int main() {

    return 0;
}
