#include "MacOSLabel.h"

void MacOSLabel::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� MacOSLabel" << std::endl;
}

std::string MacOSLabel::getText() const {
    std::cout << "������ ����� getText � ��������� MacOSLabel" << std::endl;
    return "������ ������ ��� Label";
}

void MacOSLabel::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� MacOSLabel" << std::endl;
}

std::pair<int, int> MacOSLabel::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� MacOSLabel" << std::endl;
    return {0, 0};
}