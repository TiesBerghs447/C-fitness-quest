#include "ExerciseDefinition.h"

ExerciseDefinition::ExerciseDefinition()
    : name(""),
    category(ExerciseCategory::Chest),
    bodyweightExercise(false),
    bodyweightPercentage(0.0),
    canAddExternalWeight(false),
    description(""),
    equipment("")
{
}

ExerciseDefinition::ExerciseDefinition(
    const std::string& name,
    ExerciseCategory category,
    bool bodyweightExercise,
    double bodyweightPercentage,
    bool canAddExternalWeight,
    const std::string& equipment,
    const std::string& description)
    : name(name),
    category(category),
    bodyweightExercise(bodyweightExercise),
    bodyweightPercentage(bodyweightPercentage),
    canAddExternalWeight(canAddExternalWeight),
    description(description),
    equipment(equipment)
{
}

std::string ExerciseDefinition::getName() const
{
    return name;
}

ExerciseCategory ExerciseDefinition::getCategory() const
{
    return category;
}

bool ExerciseDefinition::isBodyweightExercise() const
{
    return bodyweightExercise;
}

double ExerciseDefinition::getBodyweightPercentage() const
{
    return bodyweightPercentage;
}

bool ExerciseDefinition::canUseExternalWeight() const
{
    return canAddExternalWeight;
}

std::string ExerciseDefinition::getEquipment() const
{
    return equipment;
}

std::string ExerciseDefinition::getDescription() const
{
    return description;
}

void ExerciseDefinition::addMuscleActivation(
    Muscle muscle,
    double percentage)
{
    muscleActivation[muscle] = percentage;
}

const std::map<Muscle, double>&
ExerciseDefinition::getMuscleActivation() const
{
    return muscleActivation;
}

double ExerciseDefinition::getTotalActivation() const
{
    double total = 0.0;

    for(const auto& activation : muscleActivation)
    {
        total += activation.second;
    }

    return total;
}