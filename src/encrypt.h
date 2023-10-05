#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <string>

std::string encrypt(const std::string seed, const std::string input);
std::string decrypt(const std::string seed, const std::string input);

#endif
