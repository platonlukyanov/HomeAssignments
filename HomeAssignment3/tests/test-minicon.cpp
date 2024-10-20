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