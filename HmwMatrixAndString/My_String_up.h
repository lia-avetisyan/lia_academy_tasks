#ifndef MY_STRING_H
#define MY_STRING_H
class MyString {
private:
    char* data;
    size_t size;

public:

    MyString() : data(new char[1]), size(0) {
        data[0] = '\0';
    }

    MyString(const char* str) {
        if (str) {
            size = std::strlen(str);
            data = new char[size + 1];
            std::strcpy(data, str);
        } else {
            data = new char[1];
            data[0] = '\0';
            size = 0;
        }
    }

    ~MyString() {
        delete[] data;
    }

    MyString(const MyString& other) : size(other.size) {
        data = new char[size + 1];
        std::strcpy(data, other.data);
    }

    MyString& operator=(const MyString& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new char[size + 1];
            std::strcpy(data, other.data);
        }
        return *this;
    }

    MyString(MyString&& other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
    }

    MyString& operator=(MyString&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
        }
        return *this;
    }

    size_t length() const;
    const char* c_str() const;
    void print() const;
};
#endif //MY_STRING_H
