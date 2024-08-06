#include <iostream>
#include <cstring>
#include<algorithm>

class String {
private:
    char* str;

public:
    // Constructor
    String(const char* s = nullptr) : str(nullptr) {
        if (s) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = new char[1];
            *str = '\0';
        }
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Copy Constructor
    String(const String& other) : str(nullptr) {
        if (other.str) {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        } else {
            str = new char[1];
            *str = '\0';
        }
    }

    // Copy Assignment Operator
    String& operator=(const String& other) {
        if (this == &other) return *this;

        delete[] str;

        if (other.str) {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        } else {
            str = new char[1];
            *str = '\0';
        }

        return *this;
    }

    // Equality Operator
    bool operator==(const String& rhs) const {
        return strcmp(str, rhs.str) == 0;
    }

    // Get the string
    const char* getStr() const {
        return str;
    }
};

int main() {
    char input1[100], input2[100];

    std::cout << "Enter the first string: ";
    std::cin.getline(input1, 100);

    std::cout << "Enter the second string: ";
    std::cin.getline(input2, 100);

    String s1(input1), s2(input2);

    std::cout << "First string: " << s1.getStr() << std::endl;
    std::cout << "Second string: " << s2.getStr() << std::endl;

    if (s1 == s2) {
        std::cout << "The strings are equal." << std

