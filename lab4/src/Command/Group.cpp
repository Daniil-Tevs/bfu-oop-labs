#include "Group.h"


Group::Group(const std::vector<StringCommand>& commands){
    for (auto& command:commands) {
        m_commands.push_back(command);
    }
}

void Group::addCommand(const StringCommand& command) {
    m_commands.push_back(command);
}
void Group::undoLastCommand(){
    for (Command& command: m_commands) {
        command.undo();
    }
}

void Group::execute() {
    for (Command& command: m_commands) {
        command.execute();
    }
}

void Group::undo() {
    m_commands.back().undo();
    m_commands.pop_back();
}

bool Group::isEmpty() const{
    return m_commands.empty();
}

const std::vector<StringCommand> &Group::getCommands() const {
    return m_commands;
}
