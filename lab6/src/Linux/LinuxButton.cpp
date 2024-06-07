#include "LinuxButton.h"

void LinuxButton::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла LinuxButton" << std::endl;
}

std::string LinuxButton::getText() const {
    std::cout << "Вызван метод getText у контролла LinuxButton" << std::endl;
    return "Пример текста";
}

void LinuxButton::click() {
    std::cout << "Вызван метод click у контролла LinuxButton" << std::endl;
}

void LinuxButton::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла LinuxButton" << std::endl;
}

std::pair<int, int> LinuxButton::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла LinuxButton" << std::endl;
    return {0, 0};
}