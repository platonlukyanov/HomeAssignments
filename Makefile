all: main

main.o: main.cpp hello.h # Сборка объектного файла main.o из main.cpp
	g++ -c main.cpp
hello.o: hello.cpp hello.h # Сборка объектного файла hello.o из hello.cpp
	g++ -c hello.cpp

main: main.o hello.o # Линковка
	g++ -Wall -o main main.o hello.o
clean:
	rm -f main *.o
.PHONY: clean main

