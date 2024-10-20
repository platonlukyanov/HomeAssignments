IDIR=.
CXX=g++
CXXFLAGS=-I$(IDIR)
LDFLAGS=-lgtest -lgtest_main -lpthread
OBJECT_FILES=Transformer.o TransformerMemory.o Gun.o Autobot.o Decepticon.o Minicon.o
PROJECT=main
DEPS=Gun.h Transformer.h TransformerMemory.h Autobot.h Decepticon.h Minicon.h
TEST_DIR=tests
TEST_FILES=$(wildcard $(TEST_DIR)/test-*.cpp)
TEST_OBJECTS=$(TEST_FILES:.cpp=.o) $(OBJECT_FILES)
ll: $(PROJECT);
default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)
$(PROJECT): $(OBJECT_FILES) # Линковка
	$(CXX) -o $@ $^ $(CXXFLAGS)
clean:
	rm -f $(PROJECT) $(TEST_DIR)/*.o *.o
format:
	find . \( -name '*.cpp' -o -name '*.h' \) -exec clang-format -i {} \;

test: $(TEST_OBJECTS)
	$(CXX) -o run_tests $^ $(LDFLAGS)
	./run_tests
	rm ./run_tests

$(TEST_DIR)/test-%.o: $(TEST_DIR)/test-%.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)
.PHONY: clean format $(PROJECT)
