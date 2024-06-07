#pragma once
#include "User.h"
#include <fstream>
#include <string>

class IUserManager {
public:
    virtual void LogIn(User user) = 0;
    virtual void SignIn(User user) = 0;
    virtual void SignOut() = 0;
    [[nodiscard]] virtual bool IsAuthorized() const = 0;
};