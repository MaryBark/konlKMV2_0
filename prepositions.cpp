#include "prepositions.h"

prepositions::prepositions()
{
    qsrand(QDateTime::currentMSecsSinceEpoch() / 1000);

    int wordCount = 100;
    int syllableCount = 4/*2*/;

    generateConlang(wordCount, syllableCount);
}
