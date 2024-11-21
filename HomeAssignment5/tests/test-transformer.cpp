/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Transformer.h"
#include "gtest/gtest.h"

TEST(Transformer, can_be_initialized_with_config) {
    Gun gun("Bubble gun");
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    ASSERT_EQ(transformer.getAgeInYears(), 10);
    ASSERT_EQ(transformer.getTransformationResult(), "Car");
    ASSERT_EQ(transformer.getHealth(), 100);
}

TEST(Transformer, can_switch_guns) {
    Gun gun1("Gun 1");
    Gun gun2("Gun 2");
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    transformer.setGun(&gun1);
    ASSERT_EQ(transformer.getCurrentGun()->getName(), "Gun 1");
    transformer.setGun(&gun2);
    ASSERT_EQ(transformer.getCurrentGun()->getName(), "Gun 2");
}

TEST(Transformer, can_increase_age) {
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    transformer.increaseAge();
    ASSERT_EQ(transformer.getAgeInYears(), 11);
}

TEST(Transformer, can_fire) {
    Gun gun1("Gun 1");
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    transformer.setGun(&gun1);
    transformer.fire();
    ASSERT_EQ(transformer.getHealth(), 99);
}

TEST(Transformer, can_transform) {
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    transformer.transform();
}
TEST(Transformer, can_open_fire) {
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    transformer.openFire();
}

TEST(Transformer, can_ulta) {
    TransformerConfig config = {"Car", 10};
    Transformer transformer(config);
    transformer.ulta();
}
