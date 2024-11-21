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
        Autobot(std::string& motto);
        void transform() override;
        void openFire() override;
        void ulta() override;
        void shantMotto();
        std::string getMotto();
        void setMotto(std::string motto);
        bool haveMatrixOfLeadership();
        void setHaveMatrixOfLeadership(bool haveMatrixOfLeadership);
        friend std::ostream& operator<<(std::ostream& os, const Autobot& obj);
        bool operator>(const Autobot& other) const;
        bool operator<(const Autobot& other) const;

    private:
        std::string _motto;
        bool _haveMatrixOfLeadership;
};
#endif