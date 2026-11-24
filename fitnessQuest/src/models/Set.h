#ifndef SET_H
#define SET_H

#include <cstdint>

namespace fq
{
class Set
{
private:
    // Vereiste 37: 2 useful unsigned chars or other better usage of memory efficient type
    // reps en rpe zijn std::uint8_t (1 byte, 0-255) in plaats van int (4 bytes). Een set heeft
    // nooit meer dan 255 reps en RPE gaat maar tot 10, en na een jaar trainen heb je duizenden sets.
    // Vereiste 31: useful member variable
    // weightKg, reps en rpe zijn de gegevens van één uitgevoerde set (bijvoorbeeld 80 kg x 10).
    // Ze zijn de basis voor alle berekeningen in Set (volume, 1RM).

    double weightKg = 0.0;
    std::uint8_t reps, rpe;
public:
    Set();
    // Vereiste 30: default values in function definition
    // rpe heeft standaard waarde 0 ("niet ingevuld"), dus Set(80, 10) werkt zonder rpe.
    Set(double weightKg, std::uint8_t reps, std::uint8_t rpe = 0);
    double getWeightKg() const;
    std::uint8_t getReps() const;
    std::uint8_t getRpe() const;
    void setWeightKg(double weightKg);
    double getVolume(double bodyweightLoadKg = 0.0) const;
    double getEstimated1RM(double bodyweightLoadKg = 0.0) const;
};
}
#endif // SET_H
