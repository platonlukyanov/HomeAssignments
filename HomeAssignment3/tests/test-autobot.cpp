/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 3
 */
#include "Autobot.h"
#include "gtest/gtest.h"

TEST(Autobot, can_be_initialized_with_config) {
    Gun gun("Mobile phone");
    AutobotConfig config = {"Car", 10, 0, true, "Let builders build"};
    Autobot autobot(config);
    ASSERT_EQ(autobot.haveMatrixOfLeadership(), true);
    ASSERT_EQ(autobot.getMotto(), "Let builders build");
}

TEST(Autobot, can_shant_motto) {
    Gun gun("Mobile phone");
    AutobotConfig config = {"Car", 10, 0, true, "Let builders build"};
    Autobot autobot(config);
    autobot.shantMotto();
}