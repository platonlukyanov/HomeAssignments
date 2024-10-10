/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 2a
*/
#ifndef FILEREADER_H
#define FILEREADER_H 
#include <string>

char* readFromFileIntoChars(std::string& filename);
void writeToFile(char* whatToWrite, std::string& filename);

#endif
