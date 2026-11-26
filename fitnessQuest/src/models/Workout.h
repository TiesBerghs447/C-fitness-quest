#ifndef WORKOUT_H
#define WORKOUT_H

#include <vector>
#include <memory>
#include <string>

namespace fq
{
class Exercise;

class Workout
{
private:
    // Vereiste 40: 2 useful and correct smart pointers
    // shared_ptr<Exercise>: de workout en de gebruiker (UI) delen dezelfde oefening, en de
    // oefening wordt vanzelf vrijgegeven als niemand hem meer gebruikt.
    // Vereiste 6: useful and correct object composition (explain why)
    // Een Workout bestaat uit Exercises: zonder workout is er geen geregistreerde oefening.
    std::vector<std::shared_ptr<Exercise>> exercises;
    std::string date;

public:
    Workout(const std::string& date);

    void addExercise(std::shared_ptr<Exercise> exercise);

    double getTotalCalories(double bodyWeightKg) const;

    int getTotalXP(double bodyWeightKg) const;

    int getExerciseCount() const;

    std::string getDate() const;
};
}

#endif // WORKOUT_H