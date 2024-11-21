/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Minicon.h"

Minicon::Minicon(Transformer* bearer)
    : Transformer(MiniconConfig({})), _heightInMeters(1){};

Minicon::Minicon(MiniconConfig config)
    : Transformer(config),
      _heightInMeters(config.heightInMeters),
      _bearer(nullptr){};

void Minicon::setHeightInMeters(int height) {
    _heightInMeters = height;
}

int Minicon::getHeightInMeters() const {
    return _heightInMeters;
}

void Minicon::connectTransformer(Transformer* transformer) {
    _bearer = transformer;
    accessMemory()->logAction("Connected to transformer");
}

Transformer* Minicon::getCurrentBearer() const {
    return _bearer;
}

std::ostream& operator<<(std::ostream& os, const Minicon& minicon) {
    os << "Minicon, " << minicon.getAgeInYears() << " y.o, with"
       << minicon.getCurrentGun()->getName()
       << ", height: " << minicon.getHeightInMeters() << "\n";
    return os;
}

bool Minicon::operator>(const Minicon& other) const {
    return other.getHealth() < this->getHealth();
}

bool Minicon::operator<(const Minicon& other) const {
    return other.getHealth() > this->getHealth();
}