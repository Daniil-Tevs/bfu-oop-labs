#pragma once

#include <iostream>
#include <utility>
#include <string>

class User {
private:
    int mId{};
    std::string mName;
    std::string mLogin;
    std::string mPassword;
public:
    User() = default;

    User(int id, std::string name, std::string login, std::string password){
        mId = id;
        mName = std::move(name);
        mLogin = std::move(login);
        mPassword = std::move(password);
    }

    [[nodiscard]] int getId() const{return mId;}
    [[nodiscard]] std::string getName() const{return mName;}
    [[nodiscard]] std::string getLogin() const{return mLogin;}
    [[nodiscard]] std::string getPassword() const{return mPassword;}

    friend std::ostream& operator<<(std::ostream& out, const User& user) {
        out << user.mId << "~" << user.mName << "~" << user.mLogin << "~" << user.mPassword;
        return out;
    }

    friend std::istream& operator>>(std::istream& in, User& user) {
        std::string data;
        if (std::getline(in, data)) {
            // Разбиваем строку на части, используя символ '~' в качестве разделителя
            size_t pos = 0;
            size_t lastPos = 0;
            std::string delimiter = "~";
            std::string token;

            // Получаем id
            if ((pos = data.find(delimiter)) != std::string::npos) {
                token = data.substr(lastPos, pos);
                user.mId = std::stoi(token);
                lastPos = pos + delimiter.length();
            }

            // Получаем имя
            if ((pos = data.find(delimiter, lastPos)) != std::string::npos) {
                token = data.substr(lastPos, pos - lastPos);
                user.mName = token;
                lastPos = pos + delimiter.length();
            }

            // Получаем логин
            if ((pos = data.find(delimiter, lastPos)) != std::string::npos) {
                token = data.substr(lastPos, pos - lastPos);
                user.mLogin = token;
                lastPos = pos + delimiter.length();
            }

            // Оставшаяся часть строки - пароль
            user.mPassword = data.substr(lastPos);
        }

        return in;
    }
};