/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 5
 */
#include "Transformer.h"
#include "gtest/gtest.h"
#include "Autobot.h"
#include "Decepticon.h"
#include <vector>
#include <iostream>

TEST(Integration, can_be_called_in_vector) {
    std::vector<Transformer*> transformers;
    for (int i = 0; i < 4; i++) {
        TransformerConfig config = {"Car", i * 10};
        Transformer transformer(config);
        transformers.push_back(&transformer);
    }
    for (int i = 0; i < 4; i++) {
        AutobotConfig config = {"Car", 20, 20, true, "Let builders build"};
        Autobot autobot(config);
        transformers.push_back(&autobot);
    }
    for (int i = 0; i < 4; i++) {
        DecepticonConfig config = {"Aircraft", 10, 0, 100, true};
        Decepticon decepticon(config);
        transformers.push_back(&decepticon);
    }

    for (long unsigned int i = 0; i < transformers.size(); i++) {
        transformers[i]->openFire();
    }
    
}