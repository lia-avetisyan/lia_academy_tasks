#include <iostream>
#include <cstring>
#include "My_String_up.h"

size_t MyString::length() const {
    return size;
}

const char* MyString::c_str() const {
    return data;
}

void MyString::print() const {
    std::cout << data;
}
int main() {

}
