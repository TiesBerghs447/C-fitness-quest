#include "Set.h"

#include <stdexcept>

namespace fq
{
// Vereiste 21: at least 2 default constructors
// Set() maakt een lege set (0 kg, 0 reps) aan.
// Dit is nodig voor containers
// en formulieren: de gebruiker maakt eerst een set aan en vult daarna pas de waarden in.

Set::Set()
    :weightKg(0),reps(0),rpe(0)
{

}

// Vereiste 22: at least 2 parameterized constructors
// Deze constructor maakt direct een volledige set aan, bijvoorbeeld 80 kg x 10,
// zodat een geregistreerde set nooit in een half ingevulde toestand bestaat.
// Vereiste 25: member initialization in constructors (the stuff behind a colon)
// De velden krijgen hun waarde in de initialisatielijst achter de ':' in plaats van
// in de body. Zo worden ze meteen goed aangemaakt zonder eerst een dummy-waarde te krijgen.

Set::Set(double weightKg, std::uint8_t reps, std::uint8_t rpe)
    :weightKg(0),reps(reps), rpe(rpe)
{
    //op deze manier hoeven we maar een keer te controleren of het getal positief is.
    setWeightKg(weightKg);
}

// Vereiste 3: useful and correct encapsulation (explain why)
// weightKg, reps en rpe zijn private. Alleen Set zelf bepaalt welke waarden erin komen,
// zodat een set nooit een ongeldige toestand krijgt (bijvoorbeeld een negatief gewicht).
// Andere klassen lezen de waarden via de getters en kunnen ze niet direct aanpassen.
// Vereiste 32: useful getters and setters for member variables
// De getters geven de waarden alleen-lezen vrij (const). De setter controleert eerst de waarde.

double Set::getWeightKg() const
{
    return weightKg;
}

std::uint8_t Set::getReps() const
{
    return reps;
}

std::uint8_t Set::getRpe() const
{
    return rpe;
}

// Vereiste 48: useful exception handling
// Een negatief gewicht bestaat niet. In plaats van de fout stilzwijgend te negeren,
// gooit de setter een std::invalid_argument, zodat de aanroeper (bv. de UI) het kan opvangen
// en de gebruiker een melding kan tonen.

void Set::setWeightKg(double weightKg)
{
    if(weightKg < 0)
    {
        //geeft een fout aan wie setWeightKg aanroept
        throw std::invalid_argument("Het gewicht mag niet negatief zijn");
    }

    // Vereiste 28: useful usage of "this" (if the code does not work without it)
    // De parameter heet net als het veld. Zonder this-> zou weightKg de parameter aan zichzelf
    // toewijzen en blijft het veld ongewijzigd.

    this->weightKg = weightKg;
}

// Vereiste 29: useful member function
// getVolume() berekent het volume van één set: (gewicht + extra lichaamsgewicht) x reps.
// Statistieken en spier-XP rekenen straks met dit getal. Door de berekening in Set zelf
// te zetten, staat de formule op één plek en kan geen andere klasse hem anders uitrekenen.
// bodyweightLoadKg is 0 voor bench press, maar bij een pull-up is dat het deel van je
// lichaamsgewicht dat meetelt.

double Set::getVolume(double bodyweightLoadKg) const
{
    return (weightKg + bodyweightLoadKg) * reps;
}

// Vereiste 29: useful member function
// getEstimated1RM() schat het maximale gewicht voor 1 herhaling met de Epley-formule:
// (gewicht + extra lichaamsgewicht) x (1 + reps / 30). Zo kunnen sets met een verschillend
// aantal reps met elkaar vergeleken worden (voor PR's en progressive overload).
// De 30.0 heeft een komma: met 30 zou reps / 30 afgerond worden naar een geheel getal.

double Set::getEstimated1RM(double bodyweightLoadKg) const
{
    return (weightKg + bodyweightLoadKg) * (1+reps/30.0);
}
}