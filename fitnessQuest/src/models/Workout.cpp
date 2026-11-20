#include "Workout.h"

Workout::Workout()
{
}

void Workout::addExercise(std::shared_ptr<Exercise> exercise)
{
    exercises.push_back(exercise);
}

double Workout::getTotalCalories() const
{
    double total = 0;

    for(const auto& exercise : exercises)
    {
        total += exercise->calculateCalories();
    }

    return total;
}

int Workout::getTotalXP() const
{
    int total = 0;

    for(const auto& exercise : exercises)
    {
        total += exercise->calculateXP();
    }

    return total;
}

int Workout::getExerciseCount() const
{
    return exercises.size();
}