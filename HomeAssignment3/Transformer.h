/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>
#include <string>

#include "Gun.h"
#include "TransformerMemory.h"

struct TransformerConfig {
        const std::string transformationResult;
        const int ageInYears;
        const int woundLevel = 0;
};

class Transformer {
    public:
        Transformer(TransformerConfig config);
        void transform();
        void fire();
        void increaseAge();

        std::string getTransformationResult() const;
        int getAgeInYears() const;
        int getHealth() const;
        Gun* getCurrentGun() const;

        void setHealth(int newHealthValue);
        void setGun(Gun* gun);

        ~Transformer();

    private:
        int _health;
        std::string _transformationResult;
        int _ageInYears;
        TransformerMemory* _memory;
        Gun* _gun = nullptr;
        static const int TRANSFORMATION_HEALTH_LIMIT = 10;

    protected:
        TransformerMemory* accessMemory();
};
#endif  // TRANSFORMER_H