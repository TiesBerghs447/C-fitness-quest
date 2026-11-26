// Vereiste 13: correct protections (for header files)
// De include guard voorkomt dat dit bestand twee keer wordt ingeladen en klassen dubbel gedefinieerd zijn.
#ifndef EXERCISE_H
#define EXERCISE_H

#include <string>
#include <memory>

namespace fq
{

class ExerciseDefinition;

// Vereiste 7: useful and correct base class
// Exercise bevat wat elke oefening gemeen heeft: een verwijzing naar de definitie uit de
// database en de duur. StrengthExercise en CardioExercise erven dit en voegen toe wat alleen
// zij hebben (sets, afstand).
// Vereiste 8: useful and correct abstract base class
// Een "oefening" op zich bestaat niet: het is altijd kracht of cardio. Door de klasse abstract
// te maken (pure virtual functies) kan niemand per ongeluk een Exercise() aanmaken.
// Vereiste 2: useful and correct abstraction (explain why)
// De rest van het programma (Workout) werkt met alleen deze interface en hoeft niet te weten
// hoe kracht of cardio hun calorieën berekenen.
class Exercise
{
protected:
    // Vereiste 40: 2 useful and correct smart pointers
    // shared_ptr: veel oefeningen delen dezelfde definitie uit de database, en het geheugen wordt
    // vanzelf vrijgegeven als niemand hem meer gebruikt. const: een oefening mag de definitie nooit wijzigen.
    // Vereiste 31: useful member variable
    // durationMinutes onthoudt hoe lang de oefening duurde, nodig voor de calorieën bij cardio.
    std::shared_ptr<const ExerciseDefinition> definition;
    int durationMinutes;

public:
    Exercise(std::shared_ptr<const ExerciseDefinition> definition, int durationMinutes = 0);

    virtual ~Exercise();

    std::string getName() const;
    int getDurationMinutes() const;

    // Vereiste 9: useful and correct virtual function
    // Elke afgeleide klasse rekent op zijn eigen manier. Pure virtual: de basis heeft geen implementatie.
    virtual double calculateCalories(double bodyWeightKg) const = 0;
    virtual int calculateXP(double bodyWeightKg) const = 0;
};
}

#endif // EXERCISE_H
