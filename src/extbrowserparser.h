#ifndef EXTBROWSERPARSER_H
#define EXTBROWSERPARSER_H

#include <QString>
#include <QList>
#include "fileinfo.h"
#include "storagedevice_info.h"

QList<FileInfo>
parse_ls_output(
        QString const&  ls_output,
        bool    const   hide_regular_files );

QList<StorageDevice_Info>
parse_lsblk_output(
        QString const& lsblk_output );

#endif // EXTBROWSERPARSER_H

