#include "WindowsButton.h"

void WindowsButton::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� WindowsButton" << std::endl;
}

std::string WindowsButton::getText() const {
    std::cout << "������ ����� getText � ��������� WindowsButton" << std::endl;
    return "������ ������";
}

void WindowsButton::click() {
    std::cout << "������ ����� click � ��������� WindowsButton" << std::endl;
}

void WindowsButton::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� WindowsButton" << std::endl;
}

std::pair<int, int> WindowsButton::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� WindowsButton" << std::endl;
    return {0, 0};
}