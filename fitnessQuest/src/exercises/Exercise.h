#ifndef EXERCISE_H
#define EXERCISE_H

#include <string>
#include <memory>

namespace fq
{

class ExerciseDefinition;
class Exercise
{
protected:
    std::shared_ptr<const ExerciseDefinition> definition;
    int durationMinutes;

public:
    Exercise(std::shared_ptr<const ExerciseDefinition> definition, int durationMinutes);

    virtual ~Exercise();

    std::string getName() const;
    int getDurationMinutes() const;

    virtual double calculateCalories() const = 0;
    virtual int calculateXP() const = 0;
};
}

#endif // EXERCISE_H
