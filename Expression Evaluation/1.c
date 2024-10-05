/* A building has 10 floors with a floor height of 3 meters each. A ball is dropped from the top of the building. Find
the time taken by the ball to reach each floor. (Use the formula s = ut+(1/2)at^2 where u and a are the initial velocity
in m/sec (= 0) and acceleration in m/sec^2 (= 9.8 m/s^2)). */

#include <stdio.h>
#include <math.h>

int main() {
    int totalFloors = 10;
    float heightPerFloor = 3.0; // in meters
    float acceleration = 9.8;   // gravity (m/s^2)
    float time;

    printf("Time taken by the ball to reach each floor:\n");

    for (int floor = totalFloors - 1; floor >= 0; floor--) {
        float distance = heightPerFloor * floor;
        time = sqrt((2 * distance) / acceleration);
        printf("Floor %d: %.2f seconds\n", floor + 1, time);
    }

    return 0;
}
