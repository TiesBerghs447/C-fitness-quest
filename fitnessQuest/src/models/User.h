#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include <memory>

class Workout;

class User
{
private:
    std::string username;
    std::string password;

    double weight;
    double height;

    int level;
    int xp;
    int streak;

    std::vector<std::shared_ptr<Workout>> workouts;

public:
    // Constructors
    User();

    User(
        const std::string& username,
        const std::string& password,
        double weight,
        double height);

    // Getters
    std::string getUsername() const;
    std::string getPassword() const;

    double getWeight() const;
    double getHeight() const;

    int getLevel() const;
    int getXP() const;
    int getStreak() const;

    const std::vector<std::shared_ptr<Workout>>& getWorkouts() const;

    // Setters
    void setUsername(const std::string& username);
    void setPassword(const std::string& password);

    void setWeight(double weight);
    void setHeight(double height);

    void setStreak(int streak);

    // Workout management
    void addWorkout(std::shared_ptr<Workout> workout);

    int getWorkoutCount() const;

    // XP system
    void addXP(int amount);
    void levelUp();
};

#endif // USER_H