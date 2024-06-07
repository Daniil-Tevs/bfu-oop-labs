#include "WindowsControlFactory.h"

Control* WindowsControlFactory::createButton() {
    return new WindowsButton();
}

Control* WindowsControlFactory::createLabel() {
    return new WindowsLabel();
}

Control* WindowsControlFactory::createTextBox() {
    return new WindowsTextBox();
}