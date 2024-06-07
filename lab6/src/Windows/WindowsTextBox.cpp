#include "WindowsTextBox.h"

void WindowsTextBox::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла WindowsTextBox" << std::endl;
}

std::string WindowsTextBox::getText() const {
    std::cout << "Вызван метод getText у контролла WindowsTextBox" << std::endl;
    return "Пример текста в TextBox";
}

void WindowsTextBox::onValueChanged() {
    std::cout << "Вызван метод onValueChanged у контролла WindowsTextBox" << std::endl;
}

void WindowsTextBox::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла WindowsTextBox" << std::endl;
}

std::pair<int, int> WindowsTextBox::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла WindowsTextBox" << std::endl;
    return {0, 0};
}