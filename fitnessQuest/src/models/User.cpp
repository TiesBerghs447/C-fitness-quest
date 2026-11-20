#include "User.h"
#include "Workout.h"

User::User()
    : username(""),
    password(""),
    weight(0),
    height(0),
    level(1),
    xp(0),
    streak(0)
{
}

User::User(
    const std::string& username,
    const std::string& password,
    double weight,
    double height)
    : username(username),
    password(password),
    weight(weight),
    height(height),
    level(1),
    xp(0),
    streak(0)
{
}

std::string User::getUsername() const
{
    return username;
}

std::string User::getPassword() const
{
    return password;
}

double User::getWeight() const
{
    return weight;
}

double User::getHeight() const
{
    return height;
}

int User::getLevel() const
{
    return level;
}

int User::getXP() const
{
    return xp;
}

int User::getStreak() const
{
    return streak;
}

const std::vector<std::shared_ptr<Workout>>& User::getWorkouts() const
{
    return workouts;
}

void User::setUsername(const std::string& username)
{
    this->username = username;
}

void User::setPassword(const std::string& password)
{
    this->password = password;
}

void User::setWeight(double weight)
{
    this->weight = weight;
}

void User::setHeight(double height)
{
    this->height = height;
}

void User::setStreak(int streak)
{
    this->streak = streak;
}

void User::addWorkout(std::shared_ptr<Workout> workout)
{
    workouts.push_back(workout);
}

int User::getWorkoutCount() const
{
    return static_cast<int>(workouts.size());
}

void User::addXP(int amount)
{
    xp += amount;

    while (xp >= level * 100)
    {
        levelUp();
    }
}

void User::levelUp()
{
    xp -= level * 100;
    level++;
}