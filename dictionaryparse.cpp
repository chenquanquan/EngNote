#include "dictionaryparse.h"
#include "QDebug"

QFile *dictFile;
QXmlStreamReader dictReader;

int dictReadXml(QString* dictpath)
{
    //QFile file(*dictpath);
    dictFile = new QFile(*dictpath);

    if (dictFile->open(QIODevice::ReadOnly) == 0)
        return -1;

    dictReader.setDevice(dictFile);

    return 0;
}

int dictSearchWord(QString* word, QList<QString>* list)
{
//    dictReader.readNext();
    while (!dictReader.atEnd()) {
        dictReader.readNext();
        qDebug() << "dict reader search";
        if (dictReader.hasError()) {
            qDebug() <<"Error"<<dictReader.errorString();
        }
        if (dictReader.name() == "word") {
            qDebug() << (dictReader.attributes().value("word").toString());
            qDebug() << (dictReader.attributes().value("href").toString());
            (*list) << (dictReader.attributes().value("href").toString());
        }
        //(*list) << ((dictReader.name().toString()));
        //dictReader.readNext();
    }

    return 0;
}
