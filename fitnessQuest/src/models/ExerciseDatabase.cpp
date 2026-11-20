#include "ExerciseDatabase.h"

ExerciseDefinition ExerciseDatabase::createBenchPress()
{
    ExerciseDefinition exercise(
        "Bench Press",
        false,
        0.0);

    exercise.addMuscleActivation(
        Muscle::MiddleChest,
        0.45);

    exercise.addMuscleActivation(
        Muscle::UpperChest,
        0.20);

    exercise.addMuscleActivation(
        Muscle::FrontDeltoid,
        0.15);

    exercise.addMuscleActivation(
        Muscle::TricepsLongHead,
        0.10);

    exercise.addMuscleActivation(
        Muscle::TricepsLateralHead,
        0.10);

    return exercise;
}

ExerciseDefinition ExerciseDatabase::createInclineBenchPress()
{
    ExerciseDefinition exercise(
        "Incline Bench Press",
        false,
        0.0);

    exercise.addMuscleActivation(
        Muscle::UpperChest,
        0.45);

    exercise.addMuscleActivation(
        Muscle::MiddleChest,
        0.25);

    exercise.addMuscleActivation(
        Muscle::FrontDeltoid,
        0.20);

    exercise.addMuscleActivation(
        Muscle::TricepsLongHead,
        0.10);

    return exercise;
}

ExerciseDefinition ExerciseDatabase::createDeadlift()
{
    ExerciseDefinition exercise(
        "Deadlift",
        false,
        0.0);

    exercise.addMuscleActivation(
        Muscle::SpinalErectors,
        0.30);

    exercise.addMuscleActivation(
        Muscle::GluteusMaximus,
        0.25);

    exercise.addMuscleActivation(
        Muscle::BicepsFemoris,
        0.15);

    exercise.addMuscleActivation(
        Muscle::Semitendinosus,
        0.15);

    exercise.addMuscleActivation(
        Muscle::UpperTraps,
        0.15);

    return exercise;
}

ExerciseDefinition ExerciseDatabase::createSquat()
{
    ExerciseDefinition exercise(
        "Squat",
        false,
        0.0);

    exercise.addMuscleActivation(
        Muscle::RectusFemoris,
        0.25);

    exercise.addMuscleActivation(
        Muscle::VastusLateralis,
        0.25);

    exercise.addMuscleActivation(
        Muscle::VastusMedialis,
        0.20);

    exercise.addMuscleActivation(
        Muscle::GluteusMaximus,
        0.20);

    exercise.addMuscleActivation(
        Muscle::SpinalErectors,
        0.10);

    return exercise;
}

ExerciseDefinition ExerciseDatabase::createPullUp()
{
    ExerciseDefinition exercise(
        "Pull Up",
        true,
        1.0);

    exercise.addMuscleActivation(
        Muscle::UpperLats,
        0.35);

    exercise.addMuscleActivation(
        Muscle::LowerLats,
        0.25);

    exercise.addMuscleActivation(
        Muscle::BicepsLongHead,
        0.15);

    exercise.addMuscleActivation(
        Muscle::BicepsShortHead,
        0.15);

    exercise.addMuscleActivation(
        Muscle::Rhomboids,
        0.10);

    return exercise;
}

std::vector<ExerciseDefinition>
ExerciseDatabase::getAllExercises()
{
    return
        {
            createBenchPress(),
            createInclineBenchPress(),
            createDeadlift(),
            createSquat(),
            createPullUp()
        };
}