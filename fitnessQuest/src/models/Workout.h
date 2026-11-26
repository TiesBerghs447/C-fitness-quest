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
    std::vector<std::shared_ptr<Exercise>> exercises;
    std::string date;

public:
    Workout(const std::string& date);

    void addExercise(std::shared_ptr<Exercise> exercise);

    double getTotalCalories() const;

    int getTotalXP() const;

    int getExerciseCount() const;

    std::string getDate() const;
};
}

#endif // WORKOUT_H