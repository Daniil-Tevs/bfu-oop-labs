#include <iostream>
#include <vector>
#include "src/Form.h"
#include "src/Windows/WindowsControlFactory.h"
#include "src/Linux/LinuxControlFactory.h"
#include "src/MacOS/MacOSControlFactory.h"

//������� ��������� �������������������� ���������� ��� ������
//�������� ������������ �������. ������� ������ ������������ �����
//���������� ��� ��������� ������������ ������ (Windows, Linux, MacOS).
//��� ��������� ����������� �� �������� ������
//Contol (setPosition, getPosition).
//������� ������������� ���������� � �� ��������� �������
//Form (addContol)
//Label (setText, getText)
//TextBox (setText, getText, OnValueChanged)
//ComboBox (getSeletecedIndex, setSelectedIndex, setItems, getItems)
//Button (setText, getText, Click)
//���������� ������ � ����������� �� ��������� ������������ �������
//��������� ���� ����� ����������, ��������� �� �� �����, ������ � ����
//����������� (�������� �� ������).
//����������� ��������� ��������� �� ���������! ��������� � ���������� ��
//��� ������ ������ ����� ���������� � ������ ������ � ������� �� ����:



int main() {
    setlocale(LC_ALL,"Rus");
    Form form;


#ifdef _WIN32
    using ControlFactory = WindowsControlFactory;
#elif __linux__
    using ControlFactory = LinuxControlFactory;
#elif __APPLE__
    using ControlFactory = MacOSControlFactory;
#endif

    Control* button = ControlFactory::createButton();
    Control* label = ControlFactory::createLabel();
    Control* textBox = ControlFactory::createTextBox();

    form.addControl(button);
    form.addControl(label);
    form.addControl(textBox);

    form.manipulateControls();

    delete button;
    delete label;
    delete textBox;

    return 0;
}