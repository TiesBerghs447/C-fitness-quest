#include "Exercise.h"
#include "ExerciseDefinition.h"

namespace fq
{
// Vereiste 25: member initialization in constructors (the stuff behind a colon)
// definition en durationMinutes worden in de initialisatielijst gezet.
// Vereiste 22: at least 2 parameterized constructors
// Een oefening wordt altijd aangemaakt met een definitie, zodat hij nooit "naamloos" bestaat.
Exercise::Exercise(std::shared_ptr<const ExerciseDefinition> definition, int durationMinutes)
    : definition(definition),
    durationMinutes(durationMinutes)
{
}

// Vereiste 24: at least 2 destructors
// Virtueel (zie header), zodat een StrengthExercise die via een Exercise-pointer wordt verwijderd
// goed wordt opgeruimd. Zonder virtual zou alleen het basisdeel verwijderd worden.
Exercise::~Exercise()
{
}

// Vereiste 29: useful member function
// De naam komt uit de definitie, zodat hij maar op één plek is opgeslagen.
std::string Exercise::getName() const
{
    return definition->getName();
}

int Exercise::getDurationMinutes() const
{
    return durationMinutes;
}
}