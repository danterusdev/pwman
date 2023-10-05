#ifndef VAULT_H
#define VAULT_H

#include <vector>

#include "login.h"

class Vault {
public:
    void addLogin(const Login login);
private:
    std::vector<Login> logins;
};

#endif
