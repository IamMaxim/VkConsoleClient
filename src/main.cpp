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

    contentPanel = new PanelBase(window->_maxy, window->_maxx+1, 1, 0);
    statusBar = (PanelBase *) new StatusBar(1, window->_maxx + 1, 0, 0);
//    panel_above(contentPanel->panel);

    //create windows and panels
/*    topWin = newwin(1, window->_maxx + 1, 0, 0);
    PANEL* topPanel = new_panel(topWin);*/

/*    contentWindow = newwin(window->_maxy, window->_maxx+1, 1, 0);
    PANEL* contentPanel = new_panel(contentWindow);*/

    //panel_above(contentPanel);

/*    //set top panel color
    wbkgdset(topWin, COLOR_PAIR(1));*/

    //clear windows
//    wclear(topWin);


    render();
    getch();

    refresh();
    endwin();

    return 0;
}

void render() {
/*    box(contentWindow, 0, 0);
    wprintw(topWin, "Status will be here...");*/
    statusBar->render();
    contentPanel->render();
    update_panels();
    doupdate();
}

WINDOW* getMainWindow() {
    return window;
}