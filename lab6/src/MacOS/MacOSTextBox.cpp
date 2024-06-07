#include "MacOSTextBox.h"

void MacOSTextBox::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла MacOSTextBox" << std::endl;
}

std::string MacOSTextBox::getText() const {
    std::cout << "Вызван метод getText у контролла MacOSTextBox" << std::endl;
    return "Пример текста в TextBox";
}

void MacOSTextBox::onValueChanged() {
    std::cout << "Вызван метод onValueChanged у контролла MacOSTextBox" << std::endl;
}

void MacOSTextBox::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла MacOSTextBox" << std::endl;
}

std::pair<int, int> MacOSTextBox::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла MacOSTextBox" << std::endl;
    return {0, 0};
}