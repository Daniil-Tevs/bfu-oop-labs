#include "boot.h"

//1) Создать виртуальную клавиатуру с переназначаемыми действиями для клавиш и комбинаций клавиш, с возможностью отката действий назад.
//2) Продемонстрировать работу клавиатуры сделал WorkFlow из нажатий различных комбинаций клавиш и откатов назад. Симулировать демонстрацию нажатий клавиш путем вывода значения в консоль и задержкой между нажатиями
//3) Продемонстрировать переназначение клавиши и комбинации клавиш с перезапуcком WorkFlow

//Такой дизайн программы не сможет работать с реальными командами, а не с их симуляции строками.
// Вам нужно создать отдельнаый класс комманда и именно его добавлять в коллекицю. А в конкретной реализации

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
