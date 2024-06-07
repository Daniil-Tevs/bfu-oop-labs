#include "LinuxLabel.h"

void LinuxLabel::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� LinuxLabel" << std::endl;
}

std::string LinuxLabel::getText() const {
    std::cout << "������ ����� getText � ��������� LinuxLabel" << std::endl;
    return "������ ������ ��� Label";
}

void LinuxLabel::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� LinuxLabel" << std::endl;
}

std::pair<int, int> LinuxLabel::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� LinuxLabel" << std::endl;
    return {0, 0};
}