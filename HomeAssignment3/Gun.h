#ifndef GUN_H
#define GUN_H

#include <string>

class Gun {
    public:
        Gun(std::string name);
        void strike();
        std::string getName();

    private:
        std::string _name;
        int _load;
};

#endif
