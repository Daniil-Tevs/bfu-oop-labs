#pragma once

#include "Keyboard.h"

void Keyboard::PressKey(const std::string &key) {
    m_keyboard[GetRemappedKey(key)].execute();
    m_history.push_back(m_keyboard[GetRemappedKey(key)]);
}

void Keyboard::PressKeyTimeLong(const std::string &key, int time) {
    std::this_thread::sleep_for(std::chrono::seconds(time));
    m_keyboard[GetRemappedKey(key)].execute();
}

bool Keyboard::UndoLastAction() {
    if (!m_history.empty()) {
        m_history.back().undo();
        m_history.pop_back();
        return true;
    }
    return false;
}


void Keyboard::RemapKey(const std::string &originalKey, const std::string &newKey) {
    keyMappings[originalKey] = newKey;
    Group GroupCommandText = m_keyboard[originalKey];
    m_keyboard.erase(originalKey);
    m_keyboard[newKey] = GroupCommandText;
}

std::string Keyboard::GetRemappedKey(const std::string &originalKey) const {
    if (keyMappings.count(originalKey) > 0) {
        return keyMappings.at(originalKey);
    }
    return originalKey;
}

void Keyboard::AddCommand(const std::string &key, const StringCommand &command) {
    if (m_keyboard.count(GetRemappedKey(key)) > 0) {
        m_keyboard[GetRemappedKey(key)].addCommand(command);
        return;
    }
    m_keyboard[key] = Group({command});
}

void Keyboard::AddCommandGroup(const std::string &key, const Group &groupCommand) {
    if (m_keyboard.count(GetRemappedKey(key)) > 0) {
        for (const auto& command :groupCommand.getCommands()) {
            m_keyboard[GetRemappedKey(key)].addCommand(command);
        }
        return;
    }
    m_keyboard[GetRemappedKey(key)] = groupCommand;
}

void Keyboard::UndoCommand(const std::string &key) {
    if (m_keyboard.count(GetRemappedKey(key)) > 0) {
        m_keyboard[GetRemappedKey(key)].undo();
        if (m_keyboard[GetRemappedKey(key)].isEmpty()) {
            m_keyboard.erase(GetRemappedKey(key));
        }
    }
}