#ifndef MUSCLE_H
#define MUSCLE_H

enum class Muscle
{
    // Chest
    UpperChest,
    MiddleChest,
    LowerChest,
    SerratusAnterior,

    // Shoulders
    FrontDeltoid,
    SideDeltoid,
    RearDeltoid,

    // Lats
    UpperLats,
    LowerLats,

    // Traps
    UpperTraps,
    MiddleTraps,
    LowerTraps,

    // Other Back
    Rhomboids,
    TeresMajor,
    TeresMinor,
    SpinalErectors,

    // Biceps
    BicepsLongHead,
    BicepsShortHead,
    Brachialis,
    Brachioradialis,

    // Triceps
    TricepsLongHead,
    TricepsLateralHead,
    TricepsMedialHead,

    // Forearms
    ForearmFlexors,
    ForearmExtensors,

    // Abs
    UpperAbs,
    LowerAbs,
    Obliques,
    TransverseAbdominis,

    // Glutes
    GluteusMaximus,
    GluteusMedius,
    GluteusMinimus,

    // Quadriceps
    RectusFemoris,
    VastusLateralis,
    VastusMedialis,
    VastusIntermedius,

    // Hamstrings
    BicepsFemoris,
    Semitendinosus,
    Semimembranosus,

    // Calves
    Gastrocnemius,
    Soleus,

    // Adductors
    AdductorMagnus,
    AdductorLongus,
    AdductorBrevis,

    // Abductors
    TensorFasciaeLatae,

    // Neck
    NeckFlexors,
    NeckExtensors
};

#endif // MUSCLE_H