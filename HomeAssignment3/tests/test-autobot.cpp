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

TEST(Autobot, can_be_weaker) {
    AutobotConfig config = {"Car", 10, 0, true, "Let builders build"};
    Autobot autobot1(config);
    AutobotConfig config2 = {"Car", 20, 0, true, "Let builders build"};
    Autobot autobot2(config2);
    ASSERT_GT(autobot1, autobot2);
}
TEST(Autobot, can_be_stronger) {
    AutobotConfig config = {"Car", 10, 0, true, "Let builders build"};
    Autobot autobot1(config);
    AutobotConfig config2 = {"Car", 20, 0, true, "Let builders build"};
    Autobot autobot2(config2);
    ASSERT_GT(autobot2, autobot1);
}
TEST(Autobot, can_instance_without_config) {
    std::string motto = "I am minimal";
    Autobot autobot(motto);
    ASSERT_EQ(autobot.getMotto(), motto);
}