/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Autobot.h"

Autobot::Autobot(AutobotConfig config)
    : Transformer(config),
      _motto(config.motto),
      _haveMatrixOfLeadership(config.haveMatrixOfLeadership) {
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
