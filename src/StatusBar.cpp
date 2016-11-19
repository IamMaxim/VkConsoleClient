//
// Created by maxim on 11/19/16.
//

#include "StatusBar.h"
#include "ResManager.h"

StatusBar::StatusBar(int h, int w, int y, int x) : PanelBase(h, w, y, x) {
    wbkgdset(win, COLOR_PAIR(ResManager::getColorPair("statusBar")));
    wattron(win, A_BOLD);
    wclear(win);
}

void StatusBar::render() {
    wprintw(win, "Status bar will be here...");
}
