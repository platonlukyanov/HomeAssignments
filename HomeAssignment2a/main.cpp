/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 2a
*/
#include <iostream>
#include "filesystemUtils.h"
#include <string>
#include <algorithm>
#include <cstring>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "Please, specify source and target files: ./main <source> <target>\n";
        return 1;
    }
    std::string source = argv[1];
    std::string target = argv[2];
    char* charachters = readFromFileIntoChars(source);

    std::cout << charachters << '\n';
    std::reverse(charachters, charachters + std::strlen(charachters));
    std::cout << charachters << '\n';
    writeToFile(charachters, target);

    delete charachters;
    return 0;
}
