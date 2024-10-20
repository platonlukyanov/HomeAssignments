#include <string>

class TransformerMemory {
    public:
        TransformerMemory(int capacity);
        void logAction(std::string action);
        std::string getLogRecord(int index = -1);
        ~TransformerMemory();

    private:
        int _index = 0;
        std::string *_log;
};
