#include "LinuxButton.h"

void LinuxButton::setText(const std::string &text) {
    std::cout << "������ ����� setText � ��������� LinuxButton" << std::endl;
}

std::string LinuxButton::getText() const {
    std::cout << "������ ����� getText � ��������� LinuxButton" << std::endl;
    return "������ ������";
}

void LinuxButton::click() {
    std::cout << "������ ����� click � ��������� LinuxButton" << std::endl;
}

void LinuxButton::setPosition(int x, int y) {
    std::cout << "������ ����� setPosition � ��������� LinuxButton" << std::endl;
}

std::pair<int, int> LinuxButton::getPosition() const {
    std::cout << "������ ����� getPosition � ��������� LinuxButton" << std::endl;
    return {0, 0};
}