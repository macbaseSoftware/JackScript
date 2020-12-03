#ifndef JACKSTRING_H
#define JACKSTRING_H
#include <iostream>
#include <vector>
#include <variant>
#include <string>



namespace js{
	// string lib
	int length(std::string str);
	int includes(std::string text, std::string str); // returns 1 else -1. 
	std::string charToString(char); // converts a charector to a string.

	// coordinate class interface
	class Coordinate{
		public:
			int x, y;
			Coordinate(int xVal, int yVal);
	};

	// set class interface
	class Set{
		private:
			std::vector<std::variant<int, Coordinate>> mainSet;

		public:
			Set();
			void add(std::variant<int, Coordinate>); // takes a an int or Coordinate
			void print();

			// takes 2 Sets and returns a set of Coordinates
			// but in actual fact i need this to take a vector of sets
			std::vector< std::variant<int, Coordinate>> cartesianProduct(Set set1, Set set2); 
	};
}

#endif