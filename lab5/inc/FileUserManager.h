#pragma once
#include <utility>

#include "IUserManager.h"

class FileUserManager : public IUserManager {
private:
    User currentUser;

public:
    FileUserManager() = default;

    void LogIn(User user) override;

    void SignIn(User user) override;

    void SignOut() override;

    [[nodiscard]] bool IsAuthorized() const override;
};

