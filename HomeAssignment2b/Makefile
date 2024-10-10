IDIR=.
CXX=g++
CXXFLAGS=-I$(IDIR)
OBJECT_FILES=main.o 
PROJECT=main
DEPS=
all: $(PROJECT);
default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)
$(PROJECT): $(OBJECT_FILES) # Линковка
	$(CXX) -o $@ $^ $(CXXFLAGS)
clean:
	rm -f $(PROJECT) *.o
.PHONY: clean $(PROJECT)
