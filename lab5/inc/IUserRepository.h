#pragma once
#include "User.h"
#include <vector>

class IUserRepository {
public:
    virtual User GetById(int id) = 0;
    virtual User GetByName(const std::string& name) = 0;
    virtual User GetByLoginPassword(const std::string& login, const std::string& password) = 0;
    virtual std::vector<User> Get() = 0;
    virtual void Add(User item) = 0;
    virtual void Remove(User item) = 0;
    virtual void Update(User item) = 0;
};