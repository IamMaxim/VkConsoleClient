#pragma once

#include "PanelBase.h"

class StatusBar : PanelBase {
public:
    StatusBar(int h, int w, int y, int x);
    virtual void render();
};
