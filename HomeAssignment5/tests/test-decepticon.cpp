/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Decepticon.h"
#include "gtest/gtest.h"

TEST(Decepticon, can_be_initialized_with_config) {
    DecepticonConfig config = {"Aircraft", 10, 0, 100, true};
    Decepticon decepticon(config);
    ASSERT_EQ(decepticon.canLandOnWater(), true);
    ASSERT_EQ(decepticon.getFlyingRange(), 100);
}

TEST(Decepticon, can_fly) {
    DecepticonConfig config = {"Aircraft", 10, 0, 100, true};
    Decepticon decepticon(config);
    decepticon.fly();
}
TEST(Decepticon, can_be_weaker) {
    DecepticonConfig config = {"Aircraft", 30, 10, 100, true};
    Decepticon decepticon1(config);
    DecepticonConfig config2 = {"Aircraft", 20, 0, 100, true};
    Decepticon decepticon2(config2);
    ASSERT_TRUE(decepticon2 > decepticon1);
}
TEST(Decepticon, can_be_stronger) {
    DecepticonConfig config = {"Aircraft", 10, 0, 100, true};
    Decepticon decepticon1(config);
    DecepticonConfig config2 = {"Aircraft", 20, 10, 100, true};
    Decepticon decepticon2(config2);
    ASSERT_TRUE(decepticon1 > decepticon2);
}
TEST(Decepticon, can_be_initiated_without_arguments) {
    Decepticon decepticon;
    ASSERT_EQ(decepticon.getFlyingRange(), 0);
}

TEST(Decepticon, can_transform) {
    DecepticonConfig config = {"Aircraft", 10, 0, 100, true};
    Decepticon decepticon(config);
    decepticon.transform();
}

TEST(Decepticon, can_open_fire) {
    DecepticonConfig config = {"Aircraft", 10, 0, 100, true};
    Decepticon decepticon(config);
    decepticon.openFire();
}

TEST(Decepticon, can_ulta) {
    DecepticonConfig config = {"Aircraft", 10, 0, 100, true};
    Decepticon decepticon(config);
    decepticon.ulta();
}

TEST(Decepticon, can_transform_open_fire_and_ulta_typed_with_a_base_class) {
    DecepticonConfig config = {"Aircraft", 10, 0, 100, true};
    Decepticon decepticon(config);
    Transformer* transformer = &decepticon;
    transformer->transform();
    transformer->openFire();
    transformer->ulta();
}