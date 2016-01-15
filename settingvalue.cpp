/* Read/Write setting item.
 *
 */
#include "settingvalue.h"

QString dictPathStr = "";

void settingWriteDictPath(QString* pathStr)
{
    dictPathStr = *pathStr;
}

void settingReadDictPath(QString* pathStr)
{
    *pathStr = dictPathStr;
}
