#ifndef WORKOUT_H
#define WORKOUT_H

#include <vector>
#include <memory>

#include "../exercises/Exercise.h"

class Workout
{
private:
    std::vector<std::shared_ptr<Exercise>> exercises;

public:
    Workout();

    void addExercise(std::shared_ptr<Exercise> exercise);

    double getTotalCalories() const;

    int getTotalXP() const;

    int getExerciseCount() const;
};

#endif // WORKOUT_H