#include "Exercise.h"

Exercise::Exercise(const std::string& name, int durationMinutes)
    : name(name),
    durationMinutes(durationMinutes)
{
}

Exercise::~Exercise()
{
}

std::string Exercise::getName() const
{
    return name;
}

int Exercise::getDurationMinutes() const
{
    return durationMinutes;
}