#include "Exercise.h"
#include "ExerciseDefinition.h"

namespace fq
{
Exercise::Exercise(std::shared_ptr<const ExerciseDefinition> definition, int durationMinutes)
    : definition(definition),
    durationMinutes(durationMinutes)
{
}

Exercise::~Exercise()
{
}

std::string Exercise::getName() const
{
    return definition->getName();
}

int Exercise::getDurationMinutes() const
{
    return durationMinutes;
}
}