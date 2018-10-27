#include <test.hpp>

#include <cost.h>

#include <vector>

TEST(Cost, BasicTest) {
    const int goal_lane = 0;

    ASSERT_NEAR(0.981684, goal_distance_cost(goal_lane, 2, 2, 1.0), .001);
    ASSERT_NEAR(0.32968, goal_distance_cost(goal_lane, 2, 2, 10.0), .001);
    ASSERT_NEAR(0.0392106, goal_distance_cost(goal_lane, 2, 2, 100.0), .001);
    ASSERT_NEAR(0.0295545, goal_distance_cost(goal_lane, 1, 2, 100.0), .001);
    ASSERT_NEAR(0.0198013, goal_distance_cost(goal_lane, 1, 1, 100.0), .001);
    ASSERT_NEAR(0.00995016, goal_distance_cost(goal_lane, 0, 1, 100.0), .001);
    ASSERT_NEAR(0, goal_distance_cost(goal_lane, 0, 0, 100.0), .001);
}