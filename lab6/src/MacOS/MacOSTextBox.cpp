#include "MacOSTextBox.h"

void MacOSTextBox::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� MacOSTextBox" << std::endl;
}

std::string MacOSTextBox::getText() const {
    std::cout << "������ ����� getText � ��������� MacOSTextBox" << std::endl;
    return "������ ������ � TextBox";
}

void MacOSTextBox::onValueChanged() {
    std::cout << "������ ����� onValueChanged � ��������� MacOSTextBox" << std::endl;
}

void MacOSTextBox::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� MacOSTextBox" << std::endl;
}

std::pair<int, int> MacOSTextBox::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� MacOSTextBox" << std::endl;
    return {0, 0};
}