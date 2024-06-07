#include "LinuxTextBox.h"

void LinuxTextBox::setText(const std::string &text) {
    std::cout << "Вызван метод setText у контролла LinuxTextBox" << std::endl;
}

std::string LinuxTextBox::getText() const {
    std::cout << "Вызван метод getText у контролла LinuxTextBox" << std::endl;
    return "Пример текста в TextBox";
}

void LinuxTextBox::onValueChanged() {
    std::cout << "Вызван метод onValueChanged у контролла LinuxTextBox" << std::endl;
}

void LinuxTextBox::setPosition(int x, int y) {
    std::cout << "Вызван метод setPosition у контролла LinuxTextBox" << std::endl;
}

std::pair<int, int> LinuxTextBox::getPosition() const {
    std::cout << "Вызван метод getPosition у контролла LinuxTextBox" << std::endl;
    return {0, 0};
}