#include "Gun.h"
#include <iostream>

class Gun {
    public:
        Gun(std::string name) {
            _name = name;
            _load = 100;
        }
        void strike() {
            if (_load <= 0) {
                std::cerr << "No more load\n";
                return;
            }
            _load--;
        }
        std::string getName() {
            return _name;
        }
    private:
        std::string _name;
        int _load;
};

