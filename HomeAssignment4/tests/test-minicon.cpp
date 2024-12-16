/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Minicon.h"
#include "gtest/gtest.h"

TEST(Minicon, can_be_initialized_with_config) {
    MiniconConfig config = {"Insect", 10, 0, 2};
    Minicon minicon(config);
    ASSERT_EQ(minicon.getHeightInMeters(), 2);
    ASSERT_EQ(minicon.getCurrentBearer(), nullptr);
}

TEST(Minicon, can_become_connected_to_transformer) {
    TransformerConfig transformerConfig = {"Truck", 1000};
    Transformer transformer(transformerConfig);

    MiniconConfig miniconConfig = {"Insect", 10, 0, 2};
    Minicon minicon(miniconConfig);

    minicon.connectTransformer(&transformer);
    ASSERT_EQ(minicon.getCurrentBearer()->getTransformationResult(), "Truck");
}

TEST(Minicon, can_be_weaker) {
    MiniconConfig config = {"Aircraft", 30, 10, 100};
    Minicon minicon1(config);
    MiniconConfig config2 = {"Aircraft", 20, 5, 100};
    Minicon minicon2(config2);
    ASSERT_TRUE(minicon2 > minicon1);
}
TEST(Minicon, can_be_stronger) {
    MiniconConfig config = {"Aircraft", 10, 10, 100};
    Minicon minicon1(config);
    MiniconConfig config2 = {"Aircraft", 20, 20, 100};
    Minicon minicon2(config2);
    ASSERT_TRUE(minicon1 > minicon2);
}
