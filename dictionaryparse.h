#ifndef DICTIONARYPARSE
#define DICTIONARYPARSE

#include <QApplication>
#include <QtXml>
#include <QFile>

extern int dictReadXml(QString* dictpath);
extern int dictSearchWord(QString* word, QList<QString>* list);

#endif // DICTIONARYPARSE

