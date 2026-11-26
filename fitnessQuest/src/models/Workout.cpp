#include "Workout.h"
#include "../exercises/Exercise.h"

namespace fq
{
Workout::Workout(const std::string& date)
    : date(date)
{
}

void Workout::addExercise(std::shared_ptr<Exercise> exercise)
{
    exercises.push_back(exercise);
}

double Workout::getTotalCalories() const
{
    double total = 0;

    for (const auto& exercise : exercises)
    {
        total += exercise->calculateCalories();
    }

    return total;
}

int Workout::getTotalXP() const
{
    int total = 0;

    for (const auto& exercise : exercises)
    {
        total += exercise->calculateXP();
    }

    return total;
}

int Workout::getExerciseCount() const
{
    return static_cast<int>(exercises.size());
}

std::string Workout::getDate() const
{
    return date;
}
}