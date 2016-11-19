//
// Created by maxim on 11/19/16.
//

#include <ncurses.h>
#include "ResManager.h"
#include <map>

static int pairID = 1;
static std::map<std::string, int> colorPairs;

void ResManager::addColorPair(std::string name, short fg, short bg) {
    colorPairs[name] = pairID;
    init_pair((short) pairID++, fg, bg);
}

int ResManager::getColorPair(std::string name) {
    return colorPairs[name];
}