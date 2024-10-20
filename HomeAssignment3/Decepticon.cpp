/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Decepticon.h"

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
