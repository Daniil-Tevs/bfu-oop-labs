#pragma once

#include "../Control.h"
#include "MacOSButton.h"
#include "MacOSLabel.h"
#include "MacOSTextBox.h"

class MacOSControlFactory {
public:
    static Control* createButton();
    static Control* createLabel();
    static Control* createTextBox();
};