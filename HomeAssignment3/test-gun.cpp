#include "gtest/gtest.h"
#include "Gun.h"

TEST(Gun, have_a_name) {
   Gun gun("Bubble gun"); 
   ASSERT_EQ(gun.getName(), "Bubble gun");
}

TEST(Gun, can_strike) {
    Gun* gun = new Gun("Fire arm");
    gun->strike();
}

TEST(Gun, can_strike_100_times) {
    Gun* gun = new Gun("Fire arm");

    for (int i = 0; i<100; i++) {
        gun->strike();
    }
}