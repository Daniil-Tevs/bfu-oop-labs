#include "MacOSControlFactory.h"

Control* MacOSControlFactory::createButton() {
    return new MacOSButton();
}

Control* MacOSControlFactory::createLabel() {
    return new MacOSLabel();
}

Control* MacOSControlFactory::createTextBox() {
    return new MacOSTextBox();
}