#ifndef DECEPTICON_H
#define DECEPTICON_H

#include <iostream>

#include "Transformer.h"

struct DecepticonConfig : public TransformerConfig {
        const int flyingRange;
        const bool canLandOnWater;
};

class Decepticon : public Transformer {
    public:
        Decepticon();
        Decepticon(DecepticonConfig config);
        void fly();
        int getFlyingRange();
        void setFlyingRange(int flyingRange);
        bool canLandOnWater();
        void setCanLandOnWater(bool canLandOnWater);
        friend std::ostream& operator<<(std::ostream& os,
                                        const Decepticon& decepticon);
        bool operator>(const Decepticon& other) const;
        bool operator<(const Decepticon& other) const;

    private:
        int _flyingRange;
        bool _canLandOnWater;
};

#endif