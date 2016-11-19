#include <main.h>
#include <panel.h>
#include "PanelBase.h"
#include "StatusBar.h"
#include "ResManager.h"

WINDOW *window;
PanelBase *contentPanel;
PanelBase *statusBar;

void render();

int main() {
    //create window and start ncurses mode
    window = initscr();

    //check for color support
    if (!has_colors()) {
        endwin();
        printf("Colors are not supported!\n");
        return 1;
    }
    //enable color mode
    start_color();

    //init color pairs
    ResManager::addColorPair("statusBar", COLOR_WHITE, COLOR_BLUE);

    //init panels
    contentPanel = new PanelBase(window->_maxy, window->_maxx + 1, 1, 0);
    statusBar = (PanelBase *) new StatusBar(1, window->_maxx + 1, 0, 0);

    render();
    getch();

    //stop ncurses mode
    endwin();
    return 0;
}

void render() {
    statusBar->render();
    contentPanel->render();
    update_panels();
    doupdate();
}

WINDOW* getMainWindow() {
    return window;
}