#include "WalkingExercise.h"

WalkingExercise::WalkingExercise(
    int durationMinutes,
    double distanceKm)
    : Exercise("Running", durationMinutes),
    distanceKm(distanceKm)
{
}

double WalkingExercise::calculateCalories() const
{
    return distanceKm * 60.0;
}

int WalkingExercise::calculateXP() const
{
    return static_cast<int>(distanceKm * 20);
}