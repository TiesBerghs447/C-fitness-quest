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
    Set(double weightKg, std::uint8_t reps, std::uint8_t rpe = 0);
};
}
#endif // SET_H
