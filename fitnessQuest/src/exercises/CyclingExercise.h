#ifndef CYCLINGEXERCISE_H
#define CYCLINGEXERCISE_H

#include "Exercise.h"

class CyclingExercise : public Exercise
{
private:
    double distanceKm;

public:
    CyclingExercise(
        int durationMinutes,
        double distanceKm);

    double calculateCalories() const override;
    int calculateXP() const override;
};
#endif // CYCLINGEXERSICE_H
