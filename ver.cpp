#include "ver.hpp"
#include <vector>


bool getWeight(const std::vector<Pos> & mazePath, const std::vector< std::vector<unsigned> > &maze) {
    unsigned weight = 0;
    for (const Pos& pos : mazePath) {
        // TODO use at instead of []
        weight += maze[pos.row][pos.col];
    }
    return weight;
}

// returns true iff mazePath is a valid path for maze.
bool isValidMazePath(const std::vector<Pos> & mazePath, const std::vector< std::vector< unsigned>  > &maze) {
    if (mazePath.size() < 2) {
        return false;
    }

    const Pos* lastPos = nullptr;
    for (const Pos& pos : mazePath) {
        if (lastPos != nullptr && !pos.isNeighborOf(*lastPos)) {
            // Check that each position is adjacent to the previous position.
            return false;
        }

        if (!isInRange(pos, maze) || isWall(pos, maze)) {
            return false;
        }

        lastPos = &pos;
    }

    return true;
    
};
