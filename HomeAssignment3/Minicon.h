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

    private:
        Transformer* _bearer;
        int _heightInMeters;
};
#endif