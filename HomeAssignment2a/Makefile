IDIR=.
CXX=g++
CXXFLAGS=-I$(IDIR)
OBJECT_FILES=main.o filesystemUtils.o 
PROJECT=main
DEPS=filesystemUtils.h
all: $(PROJECT);
default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)
$(PROJECT): $(OBJECT_FILES) # Линковка
	$(CXX) -o $@ $^ $(CXXFLAGS)
clean:
	rm -f $(PROJECT) *.o target.txt
.PHONY: clean $(PROJECT)
