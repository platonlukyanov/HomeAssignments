/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Transformer.h"

Transformer::Transformer(TransformerConfig config) {
    _health = 100 - config.woundLevel;
    _transformationResult = config.transformationResult;
    _ageInYears = config.ageInYears;
    _memory = new TransformerMemory(100);
}

void Transformer::transform() {
    std::cout << "Transformer, transform\n";
}

void Transformer::ulta() {
    std::cout << "Transformer, ulta\n";
}

void Transformer::openFire() {
    std::cout << "Transformer, openFire\n";
}

void Transformer::fire() {
    if (!_gun) {
        std::cerr << "No gun to shoot\n";
        return;
    }
    _gun->strike();
    _health--;
    _memory->logAction("Stroke");
}

void Transformer::increaseAge() {
    _ageInYears++;
    _memory->logAction("Birthday!");
}

std::string Transformer::getTransformationResult() const {
    return _transformationResult;
}

int Transformer::getAgeInYears() const {
    return _ageInYears;
}

int Transformer::getHealth() const {
    return _health;
}

Gun* Transformer::getCurrentGun() const {
    return _gun;
}

void Transformer::setHealth(int newHealthValue) {
    _health = newHealthValue;
}

void Transformer::setGun(Gun* gun) {
    _gun = gun;
}

Transformer::~Transformer() {
    delete _memory;
}

TransformerMemory* Transformer::accessMemory() {
    return _memory;
}