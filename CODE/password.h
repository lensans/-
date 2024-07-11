#ifndef PASSWORD_H
#define PASSWORD_H

#include <QString>
#include <QCryptographicHash>
#include <openssl/evp.h>
#include <openssl/rand.h>

QString generateSalt(int length=16);

QString hashPasswordPBKDF2(const QString &password, const QString &salt);


#endif // PASSWORD_H
