#pragma once

#include "../Control.h"
#include "LinuxButton.h"
#include "LinuxLabel.h"
#include "LinuxTextBox.h"

class LinuxControlFactory {
public:
    static Control* createButton();
    static Control* createLabel();
    static Control* createTextBox();
};