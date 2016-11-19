#include "PanelBase.h"

void PanelBase::render() {
    //draw border
    box(win, 0, 0);
    //draw string at pos 1, 1 (right inside border)
    mvwprintw(win, 1, 1, "Render not implemented");
}

PanelBase::PanelBase(int h, int w, int y, int x) {
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
    //create window for this panel
    win = newwin(h, w, y, x);
    //create panel
    panel = new_panel(win);
}

PanelBase::~PanelBase() {
    //delete window
    delwin(win);
    //delete panel
    del_panel(panel);
}
