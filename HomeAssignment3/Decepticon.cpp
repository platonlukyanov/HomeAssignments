#include "Decepticon.h"

#include "Transformer.h"

class Decepticon : public Transformer {
    public:
        Decepticon(DecepticonConfig config)
            : Transformer(config),
              _flyingRange(config.flyingRange),
              _canLandOnWater(config.canLandOnWater) {
        }
        void fly() {
            std::cout << "Flying into the sky!\n";
            accessMemory()->logAction("Flying");
        }
        int getFlyingRange() {
            return _flyingRange;
        }
        int setFlyingRange(int flyingRange) {
            _flyingRange = flyingRange;
        }
        int canLandOnWater() {
            return _canLandOnWater;
        }
        int setCanLandOnWater(bool canLandOnWater) {
            _canLandOnWater = canLandOnWater;
        }

    private:
        int _flyingRange;
        bool _canLandOnWater;
};
