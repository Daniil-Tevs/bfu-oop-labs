#include "LinuxLabel.h"

void LinuxLabel::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла LinuxLabel" << std::endl;
}

std::string LinuxLabel::getText() const {
    std::cout << "Вызван метод getText у контролла LinuxLabel" << std::endl;
    return "Пример текста для Label";
}

void LinuxLabel::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла LinuxLabel" << std::endl;
}

std::pair<int, int> LinuxLabel::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла LinuxLabel" << std::endl;
    return {0, 0};
}