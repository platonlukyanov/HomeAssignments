IDIR=.
CXX=g++
CXXFLAGS=-I$(IDIR)
OBJECT_FILES=main.o hello.o 
PROJECT=main
DEPS=hello.h
all: $(PROJECT);
default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)
$(PROJECT): $(OBJECT_FILES) # Линковка
	$(CXX) -o $@ $^ $(CXXFLAGS)
clean:
	rm -f $(PROJECT) *.o
.PHONY: clean $(PROJECT)

## Хороший makefile. Но будь твой проект больше, было бы жутко муторно все это
## писать. Есть варианты поудобнее, которые можно вставить в почти любой проект
## и оно будет собираться, глянь на них
