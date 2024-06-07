#pragma once
#include "StringCommand.h"

class Group {
private:
    std::vector<StringCommand> m_commands = {};
public:
    Group() = default;

    explicit Group(const std::vector<StringCommand>& commands);
    void addCommand(const StringCommand& command);
    void undoLastCommand();

    void execute();

    void undo();

    bool isEmpty() const;

    [[nodiscard]] const std::vector<StringCommand> &getCommands() const;

};

