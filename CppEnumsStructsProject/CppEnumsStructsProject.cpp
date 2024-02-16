#include <iostream>

enum WayType : unsigned char
{
    Left = 75,
    Right = 82,
    Up = 88,
    Down = 91,
    Forward = 77,
    Backward = 90,
};

enum Regions
{
    Tula = 71,
    Irkutsk = 38,
};


void Go(WayType way)
{
    switch (way)
    {
    case Left:
        break;
    case Right:
        break;
    case Up:
        break;
    case Down:
        break;
    case Forward:
        break;
    case Backward:
        break;
    default:
        break;
    }
}


int main()
{
    int num;
    num = 100;
    num = 200;

    WayType way;
    way = WayType::Down;
    way = WayType::Left;

    WayType* ways = new WayType[10];

    ways[0] = WayType::Down;
    ways[1] = WayType::Left;

    Go(way);
}
