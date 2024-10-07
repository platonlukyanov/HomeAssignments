/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 1
*/
#include <iostream>
#include "fileReader.h"
#include <string>

int main() {
    std::string target = "example.txt";    
    char* charachters = readFromFileIntoChars(target);

    std::cout << charachters;

    delete charachters;
    return 0;
}
