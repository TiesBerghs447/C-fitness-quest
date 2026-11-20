#include <QApplication>
#include <iostream>

#include "mainwindow.h"
#include "RunningExercise.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    RunningExercise run(30, 5.0);

    std::cout
        << "Calories: "
        << run.calculateCalories()
        << std::endl;

    std::cout
        << "XP: "
        << run.calculateXP()
        << std::endl;

    return 0;
}

