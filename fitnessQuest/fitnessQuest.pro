QT += widgets

CONFIG += c++17

# Uncomment om deprecated Qt functies te blokkeren
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

TARGET = FitnessQuest
TEMPLATE = app

# =========================
# Include directories
# =========================

INCLUDEPATH += \
    src \
    src/models \
    src/exercises \
    src/achievements \
    src/managers \
    src/ui

# =========================
# Source files
# =========================

SOURCES += \
    main.cpp \
    src/exercises/CardioExercise.cpp \
    src/exercises/StrengthExercise.cpp \
    src/models/ExerciseDatabase.cpp \
    src/models/ExerciseDefinition.cpp \
    src/models/Set.cpp \
    src/ui/mainwindow.cpp \
    src/models/User.cpp \
    src/models/Workout.cpp \
    src/models/Statistics.cpp \
    src/exercises/Exercise.cpp \
    src/achievements/Achievements.cpp
# =========================
# Header files
# =========================

HEADERS += \
    src/exercises/CardioExercise.h \
    src/exercises/StrengthExercise.h \
    src/models/ExerciseCategory.h \
    src/models/ExerciseDatabase.h \
    src/models/ExerciseDefinition.h \
    src/models/Muscle.h \
    src/models/MuscleGroup.h \
    src/models/Set.h \
    src/ui/mainwindow.h \
    src/models/User.h \
    src/models/Workout.h \
    src/models/Statistics.h \
    src/exercises/Exercise.h \
    src/achievements/Achievements.h

# =========================
# UI files
# =========================

FORMS += \
    src/ui/mainwindow.ui

# =========================
# Resources
# =========================

RESOURCES +=

# =========================
# Deployment
# =========================

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin

!isEmpty(target.path): INSTALLS += target