#include "WindowsButton.h"

void WindowsButton::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла WindowsButton" << std::endl;
}

std::string WindowsButton::getText() const {
    std::cout << "Вызван метод getText у контролла WindowsButton" << std::endl;
    return "Пример текста";
}

void WindowsButton::click() {
    std::cout << "Вызван метод click у контролла WindowsButton" << std::endl;
}

void WindowsButton::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла WindowsButton" << std::endl;
}

std::pair<int, int> WindowsButton::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла WindowsButton" << std::endl;
    return {0, 0};
}