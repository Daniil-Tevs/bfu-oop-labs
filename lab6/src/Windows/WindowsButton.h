#pragma once
#include "../Control.h"

class WindowsButton : public Control {
public:
    void setText(const std::string& text);
    [[nodiscard]] std::string getText() const;
    void click();
    void setPosition(int x, int y) override;
    [[nodiscard]] std::pair<int, int> getPosition() const override;
};