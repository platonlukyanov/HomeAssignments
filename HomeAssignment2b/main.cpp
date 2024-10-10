/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 2b
*/
#include <iostream>
#include <cctype>

template <typename T>
class Stack {
    private:
        T* arr;
        int capacity;
        int top;
    public:
        Stack(int size) {
            arr = new T[size];
            capacity = size;
            top = -1;
        }

        void push(T x) {
            if (top == capacity - 1) {
                std::cerr << "Stack overflow!\n";
                return;
            }

            arr[++top] = x;
        }

        T pop() {
            if (top == -1) {
                std::cerr << "Stack is empty!\n";
            }

            T toBePopped = arr[top];
            top--;
            return toBePopped;
        }

        ~Stack() {
            delete[] arr;
        }
};

int main(int argc, char *argv[]) {
    int numberOfOperations = std::stoi(argv[1]);
    Stack<int> stack(2); // we won't need more than 2 elements on stack for binary operations
    std::string userInput;

    for (int i = 0; i < numberOfOperations; i++) {
        std::cin >> userInput;
        if (userInput == "+") {
            stack.push(stack.pop() + stack.pop());
        }
        else if (userInput == "-") {
            stack.push(stack.pop() - stack.pop());
        }
        else if (userInput == "*") {
            stack.push(stack.pop() * stack.pop());
        }
        else if (userInput == "/") {
            int b = stack.pop();
            int a = stack.pop();
            stack.push(a / b);
        } else {
            stack.push(std::stoi(userInput));
        }
    }

    std::cout << stack.pop() << '\n'; 

    return 0;
}