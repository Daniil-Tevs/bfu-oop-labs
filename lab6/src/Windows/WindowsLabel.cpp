#include "WindowsLabel.h"


void WindowsLabel::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� WindowsLabel" << std::endl;
}

std::string WindowsLabel::getText() const {
    std::cout << "������ ����� getText � ��������� WindowsLabel" << std::endl;
    return "������ ������ ��� Label";
}

void WindowsLabel::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� WindowsLabel" << std::endl;
}

std::pair<int, int> WindowsLabel::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� WindowsLabel" << std::endl;
    return {0, 0};
}