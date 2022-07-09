#ifndef __VER_HPP
#define __VER_HPP

#include "mazesolver.hpp"
#include "pos.hpp"
#include <vector>


bool isValidMazePath(const std::vector<Pos> & mazePath, const std::vector< std::vector< unsigned>  > &maze);
unsigned getWeight(const std::vector<Pos> & mazePath);
#endif