#include "encrypt.h"

static unsigned long int hash(const std::string value) {
    unsigned long int result = 0;
    for (int i = 0; i < value.length(); i++) {
        result = result * 33 + value[i];
    }
    return result;
}

std::string encrypt(const std::string seed, const std::string input) {
    unsigned int seedHash = hash(seed);
    std::string result;
    for (int i = 0; i < input.length(); i++) {
        result.push_back(input[i] + seedHash);
    }
    return result;
}

std::string decrypt(const std::string seed, const std::string input) {
    unsigned int seedHash = hash(seed);
    std::string result;
    for (int i = 0; i < input.length(); i++) {
        result.push_back(input[i] - seedHash);
    }
    return result;
}
