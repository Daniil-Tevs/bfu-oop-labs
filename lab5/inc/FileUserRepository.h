#pragma once
#include <utility>

#include "IUserRepository.h"

class FileUserRepository : public IUserRepository {
private:
    std::vector<User> users;
    std::string fileName;

public:
    explicit FileUserRepository(std::string newFileName) : fileName(std::move(newFileName)){};

    User GetById(int id) override;
    User GetByName(const std::string& name) override;
    User GetByLoginPassword(const std::string& login, const std::string& password) override;

    std::vector<User> Get() override;

    void Add(User item) override;
    void Remove(User item) override;
    void Update(User item) override;
};