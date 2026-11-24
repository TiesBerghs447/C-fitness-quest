#include "Set.h"

namespace fq
{
//vereisde 21
//een default constructor

Set::Set()
    :weightKg(0),reps(0),rpe(0)
{

}
Set::Set(double weightKg, std::uint8_t reps, std::uint8_t rpe)
    :weightKg(weightKg),reps(reps), rpe(rpe)
{

}

}