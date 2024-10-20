#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"
#include <iostream>
#include <string>

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