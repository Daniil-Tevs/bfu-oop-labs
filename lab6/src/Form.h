#pragma once
#include "Control.h"
#include <vector>

class Form {
public:
    void addControl(Control* control);
    void manipulateControls();

private:
    std::vector<Control*> controls;
};