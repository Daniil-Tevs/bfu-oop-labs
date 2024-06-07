#include "LinuxTextBox.h"

void LinuxTextBox::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� LinuxTextBox" << std::endl;
}

std::string LinuxTextBox::getText() const {
    std::cout << "������ ����� getText � ��������� LinuxTextBox" << std::endl;
    return "������ ������ � TextBox";
}

void LinuxTextBox::onValueChanged() {
    std::cout << "������ ����� onValueChanged � ��������� LinuxTextBox" << std::endl;
}

void LinuxTextBox::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� LinuxTextBox" << std::endl;
}

std::pair<int, int> LinuxTextBox::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� LinuxTextBox" << std::endl;
    return {0, 0};
}