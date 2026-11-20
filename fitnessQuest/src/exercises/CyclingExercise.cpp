#include "CyclingExercise.h"

CyclingExercise::CyclingExercise(
    int durationMinutes,
    double distanceKm)
    : Exercise("Running", durationMinutes),
    distanceKm(distanceKm)
{
}

double CyclingExercise::calculateCalories() const
{
    return distanceKm * 60.0;
}

int CyclingExercise::calculateXP() const
{
    return static_cast<int>(distanceKm * 20);
}