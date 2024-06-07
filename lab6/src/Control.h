#pragma once
#include <iostream>

class Control {
public:
    virtual void setPosition(int x, int y) = 0;
    [[nodiscard]] virtual std::pair<int, int> getPosition() const = 0;
    virtual ~Control() = default;
};