#include <string>
#include <iostream>
#include <optional>

struct TransformerConfig {
    const std::string transformationResult;
    const int woundLevel = 0;
    const int ageInYears;
};

class TransformerMemory {
    public:
        TransformerMemory(int capacity) {
            _log = new std::string[capacity];
        }
        void logAction(std::string action) {
            _index++;
            _log[_index] = action;
        }
        std::string getLogRecord(int index = -1) {
            if (index == -1) {
                index = _index;
            }
            return _log[_index];
        }
        ~TransformerMemory() {
            delete[] _log;
        };
    private:
        int _index = 0;
        std::string *_log;
};

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

class Transformer {
    public:
        Transformer(TransformerConfig config) {
            _health = 100 - config.woundLevel;
            _transformationResult = config.transformationResult;
            _ageInYears = config.ageInYears;
            _memory = new TransformerMemory(config.ageInYears);
        }
        void transform() {
            const int TRANSFORMATION_HEALTH_LIMIT = 10;
            if (this->getHealth() < TRANSFORMATION_HEALTH_LIMIT) {
                std::cerr << "Unable to transform. Health is too low\n"
                            << "It should be above " 
                            << TRANSFORMATION_HEALTH_LIMIT << "\n";
                return; 
            } 
            std::cout << "Transforming into: " << _transformationResult << "\n";
            _memory->logAction("Transformed");
        }
        void fire() {
            if (_gun) {
                _gun->strike();
            }
            _memory->logAction("Stroke");
        }
        void increaseAge() {
            _ageInYears++;
            _memory->logAction("Birthday!");
        }
        std::string getTransformationResult() {
            return _transformationResult;
        }
        int getAgeInYears() {
            return _ageInYears;
        }
        int getHealth() {
            return _health;
        }
        int setHealth(int newHealthValue) {
            _health = newHealthValue;
        }
        int setGun(Gun *gun) {
           _gun = gun; 
        }
        ~Transformer() {
            _health = 0;
            delete _memory;
        }
    private:
        int _health;
        std::string _transformationResult;
        int _ageInYears;
        TransformerMemory* _memory;
        Gun* _gun = nullptr;
};
