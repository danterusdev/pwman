#include "encrypt.h"
#include "login.h"

Login::Login(const std::string id_in) {
    id = id_in;
}

std::string Login::getId() {
    return id;
}

std::string Login::getUsername() {
    return username;
}

void Login::setLoginInfo(const std::string username_in, const std::string seed, const std::string password) {
    username = username_in;
    encryptedPassword = encrypt(seed, password);
}

std::string Login::getPassword(const std::string seed) {
    return decrypt(seed, encryptedPassword);
}
