#ifndef WALKINGEXERCISE_H
#define WALKINGEXERCISE_H

#include "Exercise.h"

class WalkingExercise : public Exercise
{
private:
    double distanceKm;

public:
    WalkingExercise(
        int durationMinutes,
        double distanceKm);

    double calculateCalories() const override;
    int calculateXP() const override;
};

#endif // WALKINGEXERCISE_H
