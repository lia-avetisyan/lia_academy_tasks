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

    size_t length() const;
    const char* c_str() const;
    void print() const;
};
#endif //MY_STRING_H
