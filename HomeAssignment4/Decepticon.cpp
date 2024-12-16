/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Decepticon.h"

Decepticon::Decepticon()
    : Transformer(DecepticonConfig({})),
      _flyingRange(0),
      _canLandOnWater(false) {
}

Decepticon::Decepticon(DecepticonConfig config)
    : Transformer(config),
      _flyingRange(config.flyingRange),
      _canLandOnWater(config.canLandOnWater) {
}

void Decepticon::fly() {
    std::cout << "Flying into the sky!\n";
    accessMemory()->logAction("Flying");
}

int Decepticon::getFlyingRange() {
    return _flyingRange;
}

void Decepticon::setFlyingRange(int flyingRange) {
    _flyingRange = flyingRange;
}

bool Decepticon::canLandOnWater() {
    return _canLandOnWater;
}

void Decepticon::setCanLandOnWater(bool canLandOnWater) {
    _canLandOnWater = canLandOnWater;
}

std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) {
    os << "Decepticon, " << decepticon.getAgeInYears() << " y.o, with"
       << decepticon.getCurrentGun()->getName() << " that can fly up to "
       << decepticon._flyingRange << "\n";
    return os;
}

bool Decepticon::operator>(const Decepticon& other) const {
    return other.getHealth() < this->getHealth();
}

bool Decepticon::operator<(const Decepticon& other) const {
    return other.getHealth() > this->getHealth();
}