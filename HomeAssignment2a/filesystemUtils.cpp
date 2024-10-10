/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 2a
*/
#include <filesystemUtils.h>
#include <fstream>
#include <filesystem>
#include <string>
#include <cstring>

char* readFromFileIntoChars(std::string& filename) {
    std::filesystem::path targetPath = filename;
    std::ifstream inputFile;

    long targetFileSize = std::filesystem::file_size(targetPath);
    inputFile.open(targetPath, std::ios::binary|std::ios::in);

    char* charachters = new char[targetFileSize];
    inputFile.read(charachters, targetFileSize);

    inputFile.close();
    return charachters;
}
void writeToFile(char* whatToWrite, std::string& filename) {
    std::ofstream outFile;
    outFile.open(filename, std::ios::binary|std::ios::out);
    outFile.write(whatToWrite, std::strlen(whatToWrite));
    outFile.close();
}
