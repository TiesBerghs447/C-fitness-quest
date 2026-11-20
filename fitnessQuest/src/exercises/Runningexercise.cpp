#include "RunningExercise.h"

RunningExercise::RunningExercise(
    int durationMinutes,
    double distanceKm)
    : Exercise("Running", durationMinutes),
    distanceKm(distanceKm)
{
}

double RunningExercise::calculateCalories() const
{
    return distanceKm * 60.0;
}

int RunningExercise::calculateXP() const
{
    return static_cast<int>(distanceKm * 20);
}