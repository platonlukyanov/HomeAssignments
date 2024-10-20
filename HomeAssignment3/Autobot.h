/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include <iostream>
#include <string>

#include "Transformer.h"

struct AutobotConfig : public TransformerConfig {
        bool const haveMatrixOfLeadership;
        std::string const motto;
};

class Autobot : public Transformer {
    public:
        Autobot(AutobotConfig config);
        void shantMotto();
        std::string getMotto();
        void setMotto(std::string motto);
        bool haveMatrixOfLeadership();
        void setHaveMatrixOfLeadership(bool haveMatrixOfLeadership);

    private:
        std::string _motto;
        bool _haveMatrixOfLeadership;
};
#endif