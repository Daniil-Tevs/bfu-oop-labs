#include "MacOSLabel.h"

void MacOSLabel::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла MacOSLabel" << std::endl;
}

std::string MacOSLabel::getText() const {
    std::cout << "Вызван метод getText у контролла MacOSLabel" << std::endl;
    return "Пример текста для Label";
}

void MacOSLabel::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла MacOSLabel" << std::endl;
}

std::pair<int, int> MacOSLabel::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла MacOSLabel" << std::endl;
    return {0, 0};
}