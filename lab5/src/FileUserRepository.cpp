#include <fstream>
#include <vector>
#include "../inc/FileUserRepository.h"

User FileUserRepository::GetById(int id) {
    std::ifstream file(fileName);
    if (file.is_open()) {
        User user;
        while (file >> user) {
            if (user.getId() == id) {
                return user;
            }
        }
        file.close();
    }
    return User();
}

User FileUserRepository::GetByName(const std::string &name) {
    std::ifstream file(fileName);
    if (file.is_open()) {
        User user;
        while (file >> user) {
            if (user.getName() == name) {
                return user;
            }
        }
        file.close();
    }
    return User();
}
User FileUserRepository::GetByLoginPassword(const std::string& login, const std::string& password)  {
    std::ifstream file(fileName);
    if (file.is_open()) {
        User user;
        while (file >> user) {
            if (user.getLogin() == login && user.getPassword() == password) {
                return user;
            }
        }
        file.close();
    }
    return User();
}

std::vector<User> FileUserRepository::Get() {
    std::vector<User> users;
    std::ifstream file(fileName);
    if (file.is_open()) {
        User user;
        while (file >> user) {
            users.push_back(user);
        }
        file.close();
    }
    return users;
}

void FileUserRepository::Add(User item) {
    std::ofstream file(fileName, std::ios::app);
    if (file.is_open()) {
        file << item << "\n";
        file.close();
        users.push_back(item);
    } else {
        std::cerr << "Не удалось добавить пользователя" << std::endl;
    }
}

void FileUserRepository::Remove(User item) {
    std::ofstream file(fileName);
    if (file.is_open()) {
        for (const User &user: users) {
            if (user.getId() != item.getId()) {
                file << user << "\n";
            }
        }
        file.close();
    } else {
        std::cerr << "Не удалось удалить пользователя" << std::endl;
    }
}

void FileUserRepository::Update(User item) {
    std::ofstream file(fileName);
    if (file.is_open()) {
        for (const User &user: users) {
            if (user.getId() == item.getId()) {
                file << item << "\n";
            } else {
                file << user << "\n";
            }
        }
        file.close();
    } else {
        std::cerr << "Не удалось изменить пользователя" << std::endl;
    }
}