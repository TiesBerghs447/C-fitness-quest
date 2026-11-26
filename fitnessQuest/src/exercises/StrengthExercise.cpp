#include "StrengthExercise.h"
#include "ExerciseDefinition.h"

namespace fq
{

// Vereiste 25: member initialization in constructors (the stuff behind a colon)
// De basisklasse Exercise wordt in de initialisatielijst aangemaakt met de definitie.
StrengthExercise::StrengthExercise(std::shared_ptr<const ExerciseDefinition> definition)
    : Exercise(definition)
{

}
void StrengthExercise::addSet(const Set& set)
{
    sets.push_back(set);
}

const std::vector<Set>& StrengthExercise::getSets() const
{
    return sets;
}

double StrengthExercise::getTotalVolume(double bodyWeightKg) const
{
    double total = 0.0;

    // Vereiste 38: at least 4 useful const references for variables
    // De for-loop gebruikt const Set&: elke set wordt gelezen zonder kopie en kan niet aangepast worden.
    for(const Set& set : sets){
        total += set.getVolume(bodyweightLoad(bodyWeightKg));
    }
    return total;
}
double StrengthExercise::bodyweightLoad(double bodyWeightKg) const
{
    if(definition->isBodyweightExercise())
    {
        return bodyWeightKg * definition->getBodyweightPercentage();
    }else return 0.0;
}

// Vereiste 5: useful and correct polymorphism (explain why)
// Workout roept calculateXP aan op elke Exercise, zonder te weten of het kracht of cardio is.
// StrengthExercise rekent op volume (1 XP per 50 kg getild), CardioExercise op afstand.
// Vereiste 27: useful proven (dynamic) polymorphism
// Welke versie wordt uitgevoerd wordt pas tijdens het draaien bepaald (virtual), via de
// Exercise-pointer in Workout.
int StrengthExercise::calculateXP(double bodyWeightKg) const
{
    return static_cast<int>(getTotalVolume(bodyWeightKg)/50);
}

// Vereiste 5: useful and correct polymorphism (explain why)
// Workout roept calculateCalories aan op elke Exercise, zonder te weten of het kracht of
// cardio is. Elke afgeleide klasse rekent op zijn eigen manier.
double StrengthExercise::calculateCalories(double bodyWeightKg) const
{
    double minutes = 0.0;
    if (durationMinutes > 0)
    {
        minutes = durationMinutes;      // ingevulde duur
    }
    else
    {
        minutes = sets.size() * 2.0;    // schatting: 2 minuten per set
    }
    double hours = minutes / 60.0;      // 60.0: kommagetal, anders integer-deling
    return MET * bodyWeightKg * hours;
}
}