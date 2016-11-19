#pragma once

#include <string>

class ResManager {
public:
    static void addColorPair(std::string name, short fg, short bg);
    static int getColorPair(std::string name);
};