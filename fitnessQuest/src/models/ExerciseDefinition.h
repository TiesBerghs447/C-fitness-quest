#ifndef EXERCISEDEFINITION_H
#define EXERCISEDEFINITION_H

#include <string>
#include <map>

#include "Muscle.h"
#include "ExerciseCategory.h"

namespace fq
{
class ExerciseDefinition
{
private:

    std::string name;

    ExerciseCategory category;

    std::map<Muscle, double> muscleActivation;

    bool bodyweightExercise;

    double bodyweightPercentage;

    bool canAddExternalWeight;

    std::string description;

    std::string equipment;

public:

    ExerciseDefinition();

    ExerciseDefinition(
        const std::string& name,
        ExerciseCategory category,
        bool bodyweightExercise,
        double bodyweightPercentage,
        bool canAddExternalWeight,
        const std::string& equipment,
        const std::string& description
        );

    std::string getName() const;

    ExerciseCategory getCategory() const;

    bool isBodyweightExercise() const;

    double getBodyweightPercentage() const;

    bool canUseExternalWeight() const;

    std::string getEquipment() const;

    std::string getDescription() const;

    void addMuscleActivation(
        Muscle muscle,
        double percentage);

    const std::map<Muscle,double>&
    getMuscleActivation() const;

    double getTotalActivation() const;
};
}

#endif // EXERCISEDEFINITION_H