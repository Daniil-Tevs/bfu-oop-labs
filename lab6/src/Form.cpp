#include "Form.h"

void Form::addControl(Control* control) {
    controls.push_back(control);
}

void Form::manipulateControls() {
    for (auto control : controls) {
        control->setPosition(10, 20);  // ������ ����������� � �����������
        std::cout << "������ ����� setPosition � ���������" << std::endl;
    }
}