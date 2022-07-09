#include "mazesolver.hpp"
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>


constexpr unsigned X = -1;


bool isWall(const Pos& pos,
	const std::vector< std::vector<unsigned> > & maze
	) {
	return maze[pos.row][pos.col] == X;
}

bool isInRange(const Pos& pos,
	const std::vector< std::vector<unsigned> > & maze
	) {
	const unsigned height = maze.size();
	const unsigned width = maze[0].size();
	// For unsigned, >= 0 check not strictly necessary
	// but does not hurt. Good defensive programming
	// in case we change from unsigned to signed int
	// later.
	return pos.row >= 0 && pos.row < height
		&& pos.col >= 0 && pos.col < width; 
}

// Good practice: if you have functions you are
// only using in this file, put them in a 
// namespace{} block.
namespace {

bool recurse(const Pos& curPos,
			// Convention: put the function params you're modifying
			// before the ones you're not.
			std::vector< Pos > &  solution,
			std::unordered_set< Pos > & explored,
			const Pos& goal,
			const std::vector< std::vector<unsigned> > & maze) {
	// FILL THIS IN
	// Don't just return true.
	return true;
}
} // namespace

// Solve maze via DFS (recursive backtracking).
std::vector<Pos> computeMazePath(const std::vector< std::vector<unsigned>> & maze) {
	// TODO const Pos*
	std::vector<Pos> solution;
	std::unordered_set<Pos> explored;
	const Pos goal(
		/*row=*/maze.size() - 1,
		/*col=*/maze[0].size() - 1
	);

	// Good practice to label your unnamed args with a comment.
	const bool succeeded = recurse(/*curPos=*/Pos(0, 0),
			solution, explored, goal, maze);
	if (!succeeded) {
		throw std::runtime_error("Failed to find a solution.");
	}
	return solution;
}


// Returns the number of cells in the path found by the solver.  
unsigned mazeCost(const std::vector<Pos> & vP) 
{
	return vP.size();
}

