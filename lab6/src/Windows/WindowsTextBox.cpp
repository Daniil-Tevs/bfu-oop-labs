#include "WindowsTextBox.h"

void WindowsTextBox::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� WindowsTextBox" << std::endl;
}

std::string WindowsTextBox::getText() const {
    std::cout << "������ ����� getText � ��������� WindowsTextBox" << std::endl;
    return "������ ������ � TextBox";
}

void WindowsTextBox::onValueChanged() {
    std::cout << "������ ����� onValueChanged � ��������� WindowsTextBox" << std::endl;
}

void WindowsTextBox::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� WindowsTextBox" << std::endl;
}

std::pair<int, int> WindowsTextBox::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� WindowsTextBox" << std::endl;
    return {0, 0};
}