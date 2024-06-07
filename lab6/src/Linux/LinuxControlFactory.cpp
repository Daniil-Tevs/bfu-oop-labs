#include "LinuxControlFactory.h"

Control* LinuxControlFactory::createButton() {
    return new LinuxButton();
}

Control* LinuxControlFactory::createLabel() {
    return new LinuxLabel();
}

Control* LinuxControlFactory::createTextBox() {
    return new LinuxTextBox();
}