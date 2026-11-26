#ifndef STRENGTHEXERCISE_H
#define STRENGTHEXERCISE_H

#include "Exercise.h"
#include "Set.h"
#include <vector>

namespace fq
{

// Vereiste 4: useful and correct inheritance (explain why)
// Een krachtoefening is een Exercise: ze deelt de definitie en de duur, en voegt toe wat alleen
// krachttraining heeft (sets met gewicht en reps). Zo hoeven we dit niet te kopiëren in elke oefening.
class StrengthExercise : public Exercise
{
private:
    // Vereiste 6: useful and correct object composition (explain why)
    // Een StrengthExercise bestaat uit Sets. De sets horen bij precies één oefening en bestaan niet
    // zonder haar: verdwijnt de oefening, dan verdwijnen de sets mee. Daarom bewaren we ze by value
    // in een vector en niet als pointers.
    // Vereiste 45: useful container class
    // std::vector houdt de sets op volgorde en groeit mee met het aantal sets.
    std::vector<Set> sets;

    // Vereiste 3: useful and correct encapsulation (explain why)
    // Hulpfunctie die alleen StrengthExercise zelf nodig heeft, dus private. Buiten de klasse hoeft
    // niemand te weten hoe het meetellende lichaamsgewicht wordt bepaald.
    double bodyweightLoad(double bodyWeightKg) const;

    // Vereiste 12: no globals, but statics if needed
    // Eén gedeelde MET-waarde voor alle krachtoefeningen. static: hij hoort bij de klasse en niet
    // bij één object. Geen globale variabele, dus niemand buiten de klasse kan hem aanpassen.
    static constexpr double MET = 5.0;
public:
    explicit StrengthExercise(std::shared_ptr<const ExerciseDefinition> definition);

    // Vereiste 38: at least 4 useful const references for variables
    // De set wordt als const referentie doorgegeven: geen onnodige kopie bij het aanroepen
    // en addSet kan de originele set niet per ongeluk aanpassen.
    void addSet(const Set& set);

    // Vereiste 39: at least 4 useful const references for functions
    // Geeft een const referentie naar de sets terug: de aanroeper kan lezen, maar niet aanpassen,
    // en er wordt geen hele vector gekopieerd.
    const std::vector<Set>& getSets() const;

    // Vereiste 29: useful member function
    // Telt het volume van alle sets op (tonnage). XP en statistieken rekenen straks met dit getal.
    double getTotalVolume(double bodyWeightKg) const;
    int calculateXP(double bodyWeightKg) const override;
    double calculateCalories(double bodyWeightKg) const override;
};
}

#endif // STRENGTHEXERCISE_H
