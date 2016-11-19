//
// Created by maxim on 11/19/16.
//

#include <ncurses.h>
#include "ResManager.h"
#include <map>

//ID for color pair to be added
static int pairID = 1;
//Map to keep all color pair IDs
static std::map<std::string, int> colorPairs;

//creates color pair and adds its ID to map
void ResManager::addColorPair(std::string name, short fg, short bg) {
    colorPairs[name] = pairID;
    init_pair((short) pairID++, fg, bg);
}

//returns color pair ID from map
int ResManager::getColorPair(std::string name) {
    return colorPairs[name];
}