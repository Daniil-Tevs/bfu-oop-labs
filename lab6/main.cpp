#include <iostream>
#include <vector>
#include "src/Form.h"
#include "src/Windows/WindowsControlFactory.h"
#include "src/Linux/LinuxControlFactory.h"
#include "src/MacOS/MacOSControlFactory.h"

//Создать симуляцию крокссплатформенного приложения при помощи
//паттерна «абстрактная фабрика». Фабрика должна генерировать набор
//контроллов для различных операционных систем (Windows, Linux, MacOS).
//Все контроллы наследуются от базового класса
//Contol (setPosition, getPosition).
//Примеры реализующихся контроллов и их возможных методов
//Form (addContol)
//Label (setText, getText)
//TextBox (setText, getText, OnValueChanged)
//ComboBox (getSeletecedIndex, setSelectedIndex, setItems, getItems)
//Button (setText, getText, Click)
//Приложение должно в зависимости от выбранной операционной системы
//создавать свой набор контроллов, размещать их на форме, делать с ними
//манипуляции (вызывать их методы).
//Графический интерфейс создавать не требуется! Контроллы в реальности на
//все методы просто пишут информацию о вызове метода в консоль по типу:



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