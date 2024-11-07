/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#ifndef MINICON_H
#define MINICON_H

#include <iostream>
#include <string>

#include "Transformer.h"

struct MiniconConfig : public TransformerConfig {
    int const heightInMeters;
};

class Minicon : public Transformer {
    public:
        Minicon(MiniconConfig config);
        int getHeightInMeters() const;
        void setHeightInMeters(int height);
        Transformer* getCurrentBearer() const;
        void connectTransformer(Transformer* transformer);
        friend std::ostream& operator<<(std::ostream& os, const Minicon& minicon);
        bool operator>(const Minicon& other) const;
        bool operator<(const Minicon& other) const;


    private:
        int _heightInMeters;
        Transformer* _bearer;
};
#endif