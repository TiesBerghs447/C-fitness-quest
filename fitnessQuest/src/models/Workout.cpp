#include "Workout.h"
#include "Exercise.h"

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

double Workout::getTotalCalories(double bodyWeightKg) const
{
    double total = 0;

    // Vereiste 5: useful and correct polymorphism (explain why)
    // Door polymorfisme loopen we hier over alle oefeningen en berekenen we hun waarde, zonder te
    // weten of het een StrengthExercise of CardioExercise is. Elke soort rekent op zijn eigen manier.
    // Vereiste 27: useful proven (dynamic) polymorphism
    // De exercises zijn Exercise-pointers, maar tijdens het draaien wordt de override van het echte
    // type aangeroepen (virtual). Een nieuwe soort oefening vraagt dus geen aanpassing in Workout.
    for (const auto& exercise : exercises)
    {
        total += exercise->calculateCalories(bodyWeightKg);
    }

    return total;
}

int Workout::getTotalXP(double bodyWeightKg) const
{
    int total = 0;

    // Vereiste 5: useful and correct polymorphism (explain why)
    // Door polymorfisme loopen we hier over alle oefeningen en berekenen we hun waarde, zonder te
    // weten of het een StrengthExercise of CardioExercise is. Elke soort rekent op zijn eigen manier.
    // Vereiste 27: useful proven (dynamic) polymorphism
    // De exercises zijn Exercise-pointers, maar tijdens het draaien wordt de override van het echte
    // type aangeroepen (virtual). Een nieuwe soort oefening vraagt dus geen aanpassing in Workout.
    for (const auto& exercise : exercises)
    {
        total += exercise->calculateXP(bodyWeightKg);
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