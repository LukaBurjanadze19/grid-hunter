#include "Vei2.h"

Vei2::Vei2(int x, int y)
    :
    x(x),
    y(y)
{
}

const Vei2 Vei2::operator*(int val) const
{
    return Vei2(x * val, y * val);
}