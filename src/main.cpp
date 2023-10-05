#include <iostream>

#include "encrypt.h"
#include "login.h"
#include "vault.h"

int main() {
    Vault vault;
    Login login = Login("bitmoji");
    login.setLoginInfo("danterus", "yourmom", "piano");
    vault.addLogin(login);

    std::cout << "Incorrect password retrieved: " << login.getPassword("test") << std::endl;
    std::cout << "Correct password retrieved: " << login.getPassword("yourmom") << std::endl;
}
