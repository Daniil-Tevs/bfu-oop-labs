#pragma once

#include <thread>
#include <map>

#include "Command/Command.h"
#include "Command/Group.h"

class Keyboard {
private:
    std::vector<Group> m_history;
    std::map<std::string, Group> m_keyboard;

    std::map<std::string, std::string> keyMappings;

    [[nodiscard]] std::string GetRemappedKey(const std::string &originalKey) const;

public:
    void AddCommand(const std::string &key, const StringCommand &command);

    void AddCommandGroup(const std::string &key, const Group &GroupCommandText);

    void UndoCommand(const std::string &key);

    void PressKey(const std::string &key);

    void PressKeyTimeLong(const std::string &key, int time);

    bool UndoLastAction();

    void RemapKey(const std::string &originalKey, const std::string &newKey);

};