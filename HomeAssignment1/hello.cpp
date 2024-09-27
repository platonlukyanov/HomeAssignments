/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 1
 */
#include "hello.h"
#include <iostream>

/* Пока что вы этого не знаете, но существует несколько методов передачи
 * аргумента в функцию. В этом случае произошло копирование, которое занимает
 * много времени в сравнении с передачей по ссылке */
void sayHi(string whatToGreet) {
     std::cout << "Hello, " << whatToGreet << "!\n"; 
}
