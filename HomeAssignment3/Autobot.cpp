#include "Transformer.h"
#include "Autobot.h"

class Autobot: public Transformer {
   public:
        Autobot(AutobotConfig config)
            : Transformer(config),
              _motto(config.motto), 
              _haveMatrixOfLeadership(config.haveMatrixOfLeadership) {}
        void shantMotto() {
            std::cout << "Shanting " << _motto << "\n";
            accessMemory()->logAction("Shanting!");
        }
        std::string getMotto() {
            return _motto;
        }
        void setMotto(std::string motto) {
            _motto = motto;
        }
        bool haveMatrixOfLeadership() {
            return _haveMatrixOfLeadership;
        }
        void setHaveMatrixOfLeadership(bool haveMatrixOfLeadership) {
            _haveMatrixOfLeadership = haveMatrixOfLeadership;
        }
   private:
        std::string _motto;
        bool _haveMatrixOfLeadership;
};
