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