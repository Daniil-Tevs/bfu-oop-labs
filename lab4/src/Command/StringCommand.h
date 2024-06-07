#pragma once

#include "Command.h"
#include <utility>

class StringCommand : public Command {
private:
    std::string m_data;
public:
    explicit StringCommand(std::string data) : m_data(std::move(data)) {}

    void execute();
    void undo();
};