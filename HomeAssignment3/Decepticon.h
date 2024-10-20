#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"
#include <iostream>

struct DecepticonConfig : public TransformerConfig {
    const int flyingRange; 
    const bool canLandOnWater;
};

class Decepticon : public Transformer {
   public:
        Decepticon(DecepticonConfig config);
        void fly();
        int getFlyingRange();
        void setFlyingRange(int flyingRange);
        bool canLandOnWater();
        void setCanLandOnWater(bool canLandOnWater);
   private:
        int _flyingRange;  
        bool _canLandOnWater;
};

#endif 