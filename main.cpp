#include <iostream>
#include <string>
#include "hello.h"
using namespace std;

int main(int argc, char *argv[]) {
    string userWord = "world";

    do {
	sayHi(userWord);
    	cin >> userWord;
    } while (userWord != "stop");    
}

