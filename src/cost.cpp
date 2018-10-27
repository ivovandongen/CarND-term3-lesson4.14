#include "cost.h"

#include <functional>
#include <iostream>
#include <cmath>

using namespace std;

float goal_distance_cost(int goal_lane, int intended_lane, int final_lane, float distance_to_goal) {
    /*
    The cost increases with both the distance of intended lane from the goal
    and the distance of the final lane from the goal. The cost of being out of the
    goal lane also becomes larger as vehicle approaches the goal.
    */

    return 1 - exp(-(abs(.2f * goal_lane - intended_lane - final_lane) / distance_to_goal));
}