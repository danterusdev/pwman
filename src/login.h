#ifndef LOGIN_H
#define LOGIN_H

#include <string>

class Login {
public:
    Login(const std::string id_in);
    std::string getId();
    std::string getUsername();
    void setLoginInfo(const std::string username, const std::string seed, const std::string password);
    std::string getPassword(const std::string seed);
private:
    std::string id;
    std::string username;
    std::string encryptedPassword;
};

#endif
