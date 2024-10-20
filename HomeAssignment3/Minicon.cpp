/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Minicon.h"

Minicon::Minicon(MiniconConfig config)
    : Transformer(config),
      _heightInMeters(config.heightInMeters), _bearer(nullptr) {};

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
