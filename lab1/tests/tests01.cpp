#include <gtest/gtest.h>
#include "../include/psychiatrist.h"

TEST(IsTerribleNumberTest, MondayDay)
{
    EXPECT_TRUE(isTerribleNumber("Понедельник", 12));
    EXPECT_FALSE(isTerribleNumber("Понедельник", 34));
    EXPECT_FALSE(isTerribleNumber("Понедельник", 56));
    EXPECT_FALSE(isTerribleNumber("Понедельник", 0));
}

TEST(IsTerribleNumberTest, TuesdayDay)
{
    EXPECT_TRUE(isTerribleNumber("Вторник", 96));
    EXPECT_TRUE(isTerribleNumber("Вторник", 1000));
    EXPECT_FALSE(isTerribleNumber("Вторник", 95));
    EXPECT_FALSE(isTerribleNumber("Вторник", -34));
}

TEST(IsTerribleNumberTest, WednesdayDay)
{
    EXPECT_TRUE(isTerribleNumber("Среда", 34));
    EXPECT_FALSE(isTerribleNumber("Среда", 340));
    EXPECT_FALSE(isTerribleNumber("Среда", 1));
    EXPECT_FALSE(isTerribleNumber("Среда", 0));
}

TEST(IsTerribleNumberTest, ThursdayDay)
{
    EXPECT_TRUE(isTerribleNumber("Четверг", 0));
    EXPECT_FALSE(isTerribleNumber("Четверг", 10));
    EXPECT_FALSE(isTerribleNumber("Четверг", 987));
    EXPECT_FALSE(isTerribleNumber("Четверг", -100));
}

TEST(IsTerribleNumberTest, FridayDay)
{
    EXPECT_TRUE(isTerribleNumber("Пятница", -12));
    EXPECT_TRUE(isTerribleNumber("Пятница", 0));
    EXPECT_TRUE(isTerribleNumber("Пятница", 2));
    EXPECT_TRUE(isTerribleNumber("Пятница", 762));
    EXPECT_FALSE(isTerribleNumber("Пятница", -1));
    EXPECT_FALSE(isTerribleNumber("Пятница", 19));
}

TEST(IsTerribleNumberTest, SaturdayDay)
{
    EXPECT_TRUE(isTerribleNumber("Суббота", 56));
    EXPECT_FALSE(isTerribleNumber("Суббота", 12));
    EXPECT_FALSE(isTerribleNumber("Суббота", -89));
    EXPECT_FALSE(isTerribleNumber("Суббота", 156));
    EXPECT_FALSE(isTerribleNumber("Суббота", 0));
}

TEST(IsTerribleNumberTest, SundayDay)
{
    EXPECT_TRUE(isTerribleNumber("Воскресенье", 666));
    EXPECT_TRUE(isTerribleNumber("Воскресенье", -666));
    EXPECT_FALSE(isTerribleNumber("Воскресенье", -123));
    EXPECT_FALSE(isTerribleNumber("Воскресенье", 0));
    EXPECT_FALSE(isTerribleNumber("Воскресенье", 1780));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}