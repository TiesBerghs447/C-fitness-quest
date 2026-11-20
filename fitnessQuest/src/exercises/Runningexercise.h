#ifndef RUNNINGEXERCISE_H
#define RUNNINGEXERCISE_H

#pragma once

#include "Exercise.h"

class RunningExercise : public Exercise
{
private:
    double distanceKm;

public:
    RunningExercise(
        int durationMinutes,
        double distanceKm);

    double calculateCalories() const override;
    int calculateXP() const override;
};
#endif // RUNNINGEXERCISE_H
