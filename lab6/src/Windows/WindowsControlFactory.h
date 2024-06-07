#pragma once

#include "../Control.h"
#include "WindowsButton.h"
#include "WindowsLabel.h"
#include "WindowsTextBox.h"

class WindowsControlFactory {
public:
    static Control* createButton();
    static Control* createLabel();
    static Control* createTextBox();
};
