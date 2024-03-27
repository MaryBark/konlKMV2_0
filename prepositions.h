#ifndef PREPOSITIONS_H
#define PREPOSITIONS_H

#include <QStringList>
#include <QString>

QStringList vowels = {"а", "е", "ё", "и", "о", "у", "ы", "э", "ю", "я"};
QStringList consonants = {"б", "в", "г", "д", "ж", "з", "к", "л", "м", "н", "п", "р", "с", "т", "ф", "х", "ц", "ч", "ш", "щ"};

QString getRandomVowel()
{
    int index = qrand() % vowels.size();
    return vowels[index];
}

QString getRandomConsonant()
{
    int index = qrand() % consonants.size();
    return consonants[index];
}

QString generateSyllable()
{
    QString syllable;
    if (qrand() % 2 == 0)
    {
        syllable += getRandomConsonant();
    }
    syllable += getRandomVowel();
    return syllable;
}

QString generateWord(int syllableCount)
{
    QString word;
    for (int i = 0; i < syllableCount; ++i)
    {
        word += generateSyllable();
    }
    return word;
}

void generateConlang(int wordCount, int syllableCount)
{
    qDebug() << "Generated Conlang:";
    for (int i = 0; i < wordCount; ++i)
    {
        QString word = generateWord(syllableCount);
        qDebug().noquote() << word;
    }
}



class prepositions
{
public:
    prepositions();
};

#endif // PREPOSITIONS_H
