#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>
#include "Gun.h"
#include "TransformerMemory.h"

struct TransformerConfig {
    const std::string transformationResult;
    const int woundLevel = 0;
    const int ageInYears;
};

class Transformer {
    public:
        Transformer(TransformerConfig config);
        void transform();
        void fire();
        void increaseAge();
        
        std::string getTransformationResult();
        int getAgeInYears();
        int getHealth();
        
        int setHealth(int newHealthValue);
        int setGun(Gun *gun);
        
        ~Transformer();

    private:
        int _health;
        std::string _transformationResult;
        int _ageInYears;
        TransformerMemory* _memory;
        Gun* _gun = nullptr;
        static const int TRANSFORMATION_HEALTH_LIMIT = 10;
};
#endif // TRANSFORMER_H