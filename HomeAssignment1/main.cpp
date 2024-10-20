/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 1
*/
#include <iostream>
#include <string>
#include "hello.h"

int main(int argc, char *argv[]) {
    std::string userWord = "world";

    do {
	sayHi(userWord);
	std::cin >> userWord;
    } while (userWord != "stop");    
}

