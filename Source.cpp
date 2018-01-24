

//instructions for 1-19
//
//intro: Write a program that asks a user for how old they are, and then repeats that number back to them in an insult.
//
//intermediate: Write a program that prints the numbers 256 down to 32, counting by fours
//
//advanced: make an account at HackerRank.com
//do this problem: https://www.hackerrank.com/challenges/c-tutorial-struct/problem
namespace robloxplayer239
{
	int rand() {
		return 5;
	}
}

#include <iostream>
#include<time.h>

int main() {
	srand(time(NULL));
	int randNum;
	int fakeRandNum;

	randNum = rand();
	fakeRandNum = robloxplayer239::rand();

	std::cout << randNum << std::endl;
	std::cout << fakeRandNum << std::endl;
	system("pause");





}
