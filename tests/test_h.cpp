#include <gtest/gtest.h>
#include "../include/functions.h"

TEST(TestisValidForLog, HandleValid) {
  EXPECT_EQ(isValidForLog(1), true);
}