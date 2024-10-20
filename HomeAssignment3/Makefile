IDIR=.
CXX=g++
CXXFLAGS=-I$(IDIR)
LDFLAGS=-lgtest -lgtest_main -lpthread
OBJECT_FILES=main.o
PROJECT=main
DEPS=Gun.h
# Specify the tests directory
TEST_DIR=tests
TEST_FILES=$(wildcard $(TEST_DIR)/test-*.cpp) # Find all test files in the tests folder
TEST_OBJECTS=$(TEST_FILES:.cpp=.o) Gun.o # Change .cpp to .o for test objects
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

# New target for running tests
test: $(TEST_OBJECTS)
	$(CXX) -o run_tests $^ $(LDFLAGS)
	./run_tests
	rm ./run_tests

# Rule to compile test files
$(TEST_DIR)/test-%.o: $(TEST_DIR)/test-%.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)
.PHONY: clean format $(PROJECT)
