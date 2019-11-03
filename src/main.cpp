#include <iostream>
#include "Maze.h"

using std::cout;
using namespace NutnDS_Maze;

int main()
{
    // Create map.
    element map1[kMaxHeight][kMaxWidth] =
    {
        {road, road, wall, wall, wall, wall, wall, wall, wall, wall},
        {wall, road, wall, wall, wall, wall, wall, wall, wall, wall},
        {wall, road, wall, wall, wall, wall, road, road, road, wall},
        {wall, road, road, wall, wall, wall, road, wall, road, wall},
        {wall, road, road, road, road, wall, road, wall, road, wall},
        {wall, road, wall, wall, road, wall, road, wall, road, wall},
        {wall, road, wall, wall, road, wall, road, wall, road, road},
        {wall, wall, wall, wall, road, road, road, wall, wall, road},
        {wall, wall, wall, wall, wall, wall, wall, wall, wall, road},
        {wall, wall, wall, wall, wall, wall, wall, wall, wall, final}
    };

    element map2[kMaxHeight][kMaxWidth] =
    {
        {road, road, wall, wall, wall, wall, wall, wall, wall, wall},
        {wall, road, wall, wall, wall, wall, wall, wall, wall, wall},
        {wall, road, wall, wall, wall, wall, road, road, road, wall},
        {wall, road, road, wall, wall, wall, road, wall, road, wall},
        {wall, road, road, road, road, wall, road, wall, road, wall},
        {wall, road, wall, wall, road, wall, road, wall, road, wall},
        {wall, road, wall, wall, road, wall, road, wall, road, road},
        {wall, wall, wall, wall, road, road, road, wall, wall, road},
        {wall, wall, wall, wall, wall, wall, wall, wall, wall, road},
        {wall, wall, wall, wall, wall, wall, wall, wall, wall, final}
    };
    
    // Create object.
    Maze* question = new Maze(10, 10, map1);

    question->printMap();

    question->solve(0, 0);
    question->printAllSolution();

    return 0;
}

