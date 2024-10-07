/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 1
*/
#include <iostream>
#include "filesystemUtils.h"
#include <string>
#include <algorithm>
#include <cstring>

int main() {
    std::string source = "source.txt";
    std::string target = "target.txt";    
    char* charachters = readFromFileIntoChars(source);

    std::cout << charachters << '\n';
    std::reverse(charachters, charachters + std::strlen(charachters));
    std::cout << charachters << '\n';
    writeToFile(charachters, target);

    delete charachters;
    return 0;
}
