#pragma once

#include "cheat.hh"
#include <X11/Xlib.h>

class FlyingCheat: public Cheat
{
public:
    // void on_world_tick(ClientWorld *) override;
    bool check_toggle(Display *) override;
    void disable() override;
    void enable() override;
private:
    float m_jumpSpeed;
    float m_jumpHoldTime;
};

extern bool check_key(char *, KeySym);
