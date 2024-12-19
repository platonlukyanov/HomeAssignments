/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 6
 */
#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H

#include <cmath>
#include <iostream>
#include <vector>

template <class T>
class TemplateClass {
    public:
        TemplateClass() : inside() {}
        bool foo();
        void setNumber(int newNumber);
        void setFloats(std::vector<float> newVector);

    private:
        int number = 0;
        std::vector<float> floats;
        T inside;
};

template <typename T>
bool TemplateClass<T>::foo() {
    return inside.bar(number, floats);
}

template <typename T>
void TemplateClass<T>::setNumber(int newNumber) {
    number = newNumber;
}

template <typename T>
void TemplateClass<T>::setFloats(std::vector<float> newVector) {
    floats = newVector;
}

template <>
bool TemplateClass<int>::foo() {
    return true;
}

template <>
bool TemplateClass<double>::foo() {
    return false;
}

class Class1 {
    public:
        bool bar(int number, std::vector<float>& floats);
        int c_1_1();
        int c_1_2();
        int c_1_3();
};

class Class2 {
    public:
        bool bar(int number, std::vector<float>& floats);
        int c_2_1();
        int c_2_2();
        int c_2_3();
};

class Class3 {
    public:
        bool bar(int number, std::vector<float>& floats);
        int c_3_1();
        int c_3_2();
        int c_3_3();
};

bool Class1::bar(int number, std::vector<float>& floats) {
    return number > 0;
}

int Class1::c_1_1() {
    return 101;
}
int Class1::c_1_2() {
    return 102;
}
int Class1::c_1_3() {
    return 103;
}

bool Class2::bar(int number, std::vector<float>& floats) {
    return !floats.empty();
}

int Class2::c_2_1() {
    return 201;
}
int Class2::c_2_2() {
    return 202;
}
int Class2::c_2_3() {
    return 203;
}

bool Class3::bar(int number, std::vector<float>& floats) {
    if (floats.size() > pow(2, 31) - 1) {
        std::cerr << "Vector is too big\n";
        return false;
    }
    int floatsSize = static_cast<int>(floats.size());
    return floatsSize * -1 == number;
}

int Class3::c_3_1() {
    return 301;
}
int Class3::c_3_2() {
    return 302;
}
int Class3::c_3_3() {
    return 303;
}

#endif
