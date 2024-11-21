/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Autobot.h"

Autobot::Autobot(AutobotConfig config)
    : Transformer(config),
      _motto(config.motto),
      _haveMatrixOfLeadership(config.haveMatrixOfLeadership) {
}

Autobot::Autobot(std::string& motto)
    : Transformer({}), _motto(motto), _haveMatrixOfLeadership(false) {
}

void Autobot::transform() {
    std::cout << "Autobot, transform\n";
}

void Autobot::ulta() {
    std::cout << "Autobot, ulta\n";
}

void Autobot::openFire() {
    std::cout << "Autobot, openFire\n";
}


void Autobot::shantMotto() {
    std::cout << "Shanting " << _motto << "\n";
    accessMemory()->logAction("Shanting!");
}

std::string Autobot::getMotto() {
    return _motto;
}

void Autobot::setMotto(std::string motto) {
    _motto = motto;
}

bool Autobot::haveMatrixOfLeadership() {
    return _haveMatrixOfLeadership;
}

void Autobot::setHaveMatrixOfLeadership(bool haveMatrixOfLeadership) {
    _haveMatrixOfLeadership = haveMatrixOfLeadership;
}
std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
    os << "Autobot, " << autobot.getAgeInYears() << " y.o, with"
       << autobot.getCurrentGun()->getName() << "\n";
    return os;
}

bool Autobot::operator>(const Autobot& other) const {
    return other.getHealth() < this->getHealth();
}

bool Autobot::operator<(const Autobot& other) const {
    return other.getHealth() > this->getHealth();
}