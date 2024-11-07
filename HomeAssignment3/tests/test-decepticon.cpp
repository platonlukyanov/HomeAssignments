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
    DecepticonConfig config = {"Aircraft", 30, 0, 100, true};
    Decepticon decepticon1(config);
    DecepticonConfig config2 = {"Aircraft", 20, 0, 100, true};
    Decepticon decepticon2(config2);
    ASSERT_GT(decepticon2, decepticon1);
}
TEST(Decepticon, can_be_stronger) {
    DecepticonConfig config = {"Aircraft", 10, 0, 100, true};
    Decepticon decepticon1(config);
    DecepticonConfig config2 = {"Aircraft", 20, 0, 100, true};
    Decepticon decepticon2(config2);
    ASSERT_GT(decepticon1, decepticon2);
}
