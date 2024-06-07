#pragma once

#include <iostream>
#include <string>
#include <vector>

class Command {
public:
    virtual void execute() {};
    virtual void undo() {};
};