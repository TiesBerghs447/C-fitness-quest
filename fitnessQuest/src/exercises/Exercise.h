#ifndef EXERCISES_H
#define EXERCISES_H

#pragma once

#include <string>

class Exercise
{
protected:
    std::string name;
    int durationMinutes;

public:
    Exercise(const std::string& name, int durationMinutes);

    virtual ~Exercise();

    std::string getName() const;
    int getDurationMinutes() const;

    virtual double calculateCalories() const = 0;
    virtual int calculateXP() const = 0;
};
#endif // EXERCISES_H
