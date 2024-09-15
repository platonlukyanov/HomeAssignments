main: main.cpp
	g++ -Wall -o main main.cpp
clean:
	rm -f main
.PHONY: clean main
