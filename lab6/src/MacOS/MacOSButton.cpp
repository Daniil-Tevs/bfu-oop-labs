#include "MacOSButton.h"

void MacOSButton::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� MacOSButton" << std::endl;
}

std::string MacOSButton::getText() const {
    std::cout << "������ ����� getText � ��������� MacOSButton" << std::endl;
    return "������ ������";
}

void MacOSButton::click() {
    std::cout << "������ ����� click � ��������� MacOSButton" << std::endl;
}

void MacOSButton::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� MacOSButton" << std::endl;
}

std::pair<int, int> MacOSButton::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� MacOSButton" << std::endl;
    return {0, 0};
}