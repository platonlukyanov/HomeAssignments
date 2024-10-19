#include "Transformer.h"

class Transformer {
    public:
        Transformer(TransformerConfig config) {
            _health = 100 - config.woundLevel;
            _transformationResult = config.transformationResult;
            _ageInYears = config.ageInYears;
            _memory = new TransformerMemory(config.ageInYears);
        }
        void transform() {
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
            if (!_gun) {
                std::cerr << "No gun to shoot\n";
                return;
            }
            _gun->strike();
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
            delete _memory;
        }
    private:
        int _health;
        std::string _transformationResult;
        int _ageInYears;
        TransformerMemory* _memory;
        Gun* _gun = nullptr;
        static const int TRANSFORMATION_HEALTH_LIMIT = 10;
};
