#ifndef SET_H
#define SET_H

#include <cstdint>

namespace fq
{
class Set
{
private:
    double weightKg;
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
};
}
#endif // SET_H
