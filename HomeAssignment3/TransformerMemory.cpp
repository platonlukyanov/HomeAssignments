#include "TransformerMemory.h"

class TransformerMemory {
    public:
        TransformerMemory(int capacity) {
            _log = new std::string[capacity];
        }
        void logAction(std::string action) {
            _index++;
            _log[_index] = action;
        }
        std::string getLogRecord(int index = -1) {
            if (index == -1) {
                index = _index;
            }
            return _log[_index];
        }
        ~TransformerMemory() {
            delete[] _log;
        };

    private:
        int _index = 0;
        std::string *_log;
};
