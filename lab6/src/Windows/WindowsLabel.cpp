#include "WindowsLabel.h"


void WindowsLabel::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла WindowsLabel" << std::endl;
}

std::string WindowsLabel::getText() const {
    std::cout << "Вызван метод getText у контролла WindowsLabel" << std::endl;
    return "Пример текста для Label";
}

void WindowsLabel::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла WindowsLabel" << std::endl;
}

std::pair<int, int> WindowsLabel::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла WindowsLabel" << std::endl;
    return {0, 0};
}