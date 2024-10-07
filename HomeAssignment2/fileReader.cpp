#include <fileReader.h>
#include <fstream>
#include <filesystem>
#include <string>

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
