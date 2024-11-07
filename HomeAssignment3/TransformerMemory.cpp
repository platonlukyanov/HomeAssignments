#include "TransformerMemory.h"

#include <iostream>

TransformerMemory::TransformerMemory(int capacity)
    : _capacity(capacity), _index(0) {
    _log = new std::string[capacity];
}

void TransformerMemory::logAction(const std::string& action) {
    if (_index < _capacity) {  // Use _capacity instead
        _log[_index++] = action;
    } else {
        std::cerr << "Log capacity exceeded\n";
    }
}

std::string TransformerMemory::getLogRecord(int index) const {
    if (index == -1) {
        index = _index - 1;
    }

    if (index >= 0 && index < _index) {
        return _log[index];
    } else {
        return "Invalid index";
    }
}

TransformerMemory::~TransformerMemory() {
    delete[] _log;
}