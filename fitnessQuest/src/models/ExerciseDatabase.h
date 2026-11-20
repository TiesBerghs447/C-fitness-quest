#ifndef EXERCISEDATABASE_H
#define EXERCISEDATABASE_H

#include <vector>

#include "ExerciseDefinition.h"

class ExerciseDatabase
{
public:

    static ExerciseDefinition createBenchPress();

    static ExerciseDefinition createInclineBenchPress();

    static ExerciseDefinition createDeadlift();

    static ExerciseDefinition createSquat();

    static ExerciseDefinition createPullUp();

    static std::vector<ExerciseDefinition> getAllExercises();
};

#endif // EXERCISEDATABASE_H