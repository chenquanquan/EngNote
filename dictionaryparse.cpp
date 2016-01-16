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

    return 0;
}

int dictSearchWord(QString* word, QList<QString>* list)
{
    if (dictFile == NULL)
        return -1;

    if (!dictFile->isOpen())
        return -1;

    if (word->length() == 0)
        return -1;

    /* Restart file pointer */
    dictFile->seek(0);
    dictReader.setDevice(dictFile);

    while (!dictReader.atEnd()) {
        dictReader.readNext();
        if (dictReader.hasError()) {
            qDebug() <<"Error"<<dictReader.errorString();
        }
        if (dictReader.name() == "word") {
            QString wordItem = (dictReader.attributes().value("english").toString());
            QString chineseItem = (dictReader.attributes().value("chinese").toString());
            QString pattern = ".*" + *word + ".*";  /* Match condition */
            QRegExp rx(pattern);


            /* Remove all empty item */
            if (wordItem.length() == 0 || chineseItem.length() == 0)
                continue;

            /* Reture all match item */
            if (rx.exactMatch(wordItem) || rx.exactMatch(chineseItem)) {
                (*list) << wordItem + " - " + chineseItem;
            }
        }
    }

    return 0;
}
