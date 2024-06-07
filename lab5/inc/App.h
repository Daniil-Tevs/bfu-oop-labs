#pragma once

#include "FileUserManager.h"
#include "FileUserRepository.h"

class App {
private:
    static std::vector<std::string> getRegistrationData();

    static std::pair<std::string, std::string> getLoginPassword();

public:
    static void start();
};
