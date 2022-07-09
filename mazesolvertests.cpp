#include "mazesolver.hpp"
#include "ver.hpp"
#include <gtest/gtest.h>
#include <gtest/gtest-spi.h>
#include <vector>

constexpr unsigned X = -1;


namespace{

// As always, this is a STARTING POINT of test cases
	// and is not an exhaustive set of test cases.
	// You should be sure to test EVERY function of 
	// your priority queue as well as the creation of MSTs.l

// See documentation on expected failures here:
// http://google.github.io/googletest/primer.html


TEST(SampleTests, BFS10x10) {
std::vector<std::vector<unsigned>> maze1 = {
	{1, X, X, X, X, 1, X, X, 1, X},
	{1, 1, X, 1, X, 1, X, X, 1, X},
	{1, 1, 1, 1, 1, 1, X, X, 1, X},
	{1, X, X, X, X, 1, X, X, 1, X},
	{1, X, X, X, X, 1, X, X, 1, X},
	{1, X, X, X, X, 1, X, X, 1, X},
	{1, X, X, X, X, 1, X, X, 1, X},
	{1, X, X, X, X, 1, X, X, 1, X},
	{1, X, X, X, X, 1, 1, 1, 1, 1},
	{X, X, X, X, X, 1, X, X, 1, 1},
};
std::vector<Pos> solution = computeMazePath(maze1);
EXPECT_TRUE(isValidMazePath(solution, maze1));
};


}