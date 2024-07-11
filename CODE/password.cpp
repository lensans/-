#include "password.h"

QString generateSalt(int length = 16) {
>>>>>>> Stashed changes
    QByteArray salt;
    salt.resize(length);
    RAND_bytes(reinterpret_cast<unsigned char *>(salt.data()), length);
    return salt.toBase64();
}

QString hashPasswordPBKDF2(const QString &password, const QString &salt) {
    const int iterations = 10000;
    const int keyLength = 32; // 256位
    unsigned char key[keyLength];

    PKCS5_PBKDF2_HMAC(password.toUtf8().data(), password.length(),
                      reinterpret_cast<const unsigned char *>(salt.toUtf8().data()), salt.length(),
                      iterations, EVP_sha256(), keyLength, key);

    return QByteArray(reinterpret_cast<char *>(key), keyLength).toHex();
}
