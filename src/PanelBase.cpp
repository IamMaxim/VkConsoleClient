#include "PanelBase.h"

void PanelBase::render() {
    box(win, 0, 0);
    mvwprintw(win, 1, 1, "Render not implemented");
}

PanelBase::PanelBase(int h, int w, int y, int x) {
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
    win = newwin(h, w, y, x);
    panel = new_panel(win);
}

PanelBase::~PanelBase() {
    delwin(win);
    del_panel(panel);
}
