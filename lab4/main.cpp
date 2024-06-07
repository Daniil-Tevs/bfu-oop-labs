#include "boot.h"

//1) ������� ����������� ���������� � ���������������� ���������� ��� ������ � ���������� ������, � ������������ ������ �������� �����.
//2) ������������������ ������ ���������� ������ WorkFlow �� ������� ��������� ���������� ������ � ������� �����. ������������ ������������ ������� ������ ����� ������ �������� � ������� � ��������� ����� ���������
//3) ������������������ �������������� ������� � ���������� ������ � ��������c��� WorkFlow

//����� ������ ��������� �� ������ �������� � ��������� ���������, � �� � �� ��������� ��������.
// ��� ����� ������� ���������� ����� �������� � ������ ��� ��������� � ���������. � � ���������� ����������

int main() {
    setlocale(LC_ALL,"Rus");

    Keyboard keyboard;

    keyboard.AddCommand("PrintLife", StringCommand("What"));
    keyboard.AddCommand("PrintLife", StringCommand("Is Life?"));

    keyboard.AddCommandGroup("Insert", Group({StringCommand("OOP"), StringCommand("is"), StringCommand("subject")}));

    keyboard.PressKey("PrintLife");
    keyboard.PressKeyTimeLong("Insert", 2);

    keyboard.UndoCommand("Insert");

    keyboard.PressKeyTimeLong("Insert", 1);
    return 0;
}
