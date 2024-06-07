#pragma once

#include "../Control.h"

class LinuxTextBox : public Control {
public:
    void setText(const std::string& text);
    std::string getText() const;
    void onValueChanged();
    void setPosition(int x, int y) override;
    std::pair<int, int> getPosition() const override;
};
