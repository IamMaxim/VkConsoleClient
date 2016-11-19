#pragma once

#include <ncurses.h>
#include <panel.h>

class PanelBase {
public:
    int x, y, w, h;
    WINDOW *win;
    PANEL *panel;
    PanelBase(int h, int w, int y, int x);
    ~PanelBase();
    virtual void render();
};