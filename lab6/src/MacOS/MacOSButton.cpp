#include "MacOSButton.h"

void MacOSButton::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла MacOSButton" << std::endl;
}

std::string MacOSButton::getText() const {
    std::cout << "Вызван метод getText у контролла MacOSButton" << std::endl;
    return "Пример текста";
}

void MacOSButton::click() {
    std::cout << "Вызван метод click у контролла MacOSButton" << std::endl;
}

void MacOSButton::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла MacOSButton" << std::endl;
}

std::pair<int, int> MacOSButton::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла MacOSButton" << std::endl;
    return {0, 0};
}