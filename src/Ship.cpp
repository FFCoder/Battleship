#include "Ship.h"

Ship::Ship()
{
    //ctor
}

Ship::~Ship()
{
}

Ship& Ship::operator=(const Ship& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
