#include "gtest/gtest.h"
#include "../main/LessThanOneYearEmployee.h"
#include <ctime>

namespace {

    TEST(BaseClassCoupling, CalculateLessThanOneYearEmployeeBonus) {
        //if my monthly salary is 1200, working year is 0.5, my bonus should be 600
        LessThanOneYearEmployee lessThanOneYearEmployee;
        lessThanOneYearEmployee.setId(91);
        tm date = {0, 0, 0, 26, 11, 117};
        lessThanOneYearEmployee.setStartWorkingDate(date);

        double actual = lessThanOneYearEmployee.getYearlyBonus();
        ASSERT_DOUBLE_EQ(600, actual);
    }

}