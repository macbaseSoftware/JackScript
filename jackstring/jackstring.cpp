#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include "jackstring.h"

namespace js{
	int length(std::string str){
		int count = 0;
		for (int i = 0; i < str.length(); ++i){
			count++;
		}
		return count;
	}

	int includes(std::string text, std::string str){
		int macro = length(str);
		int micro = length(text);
		int j;

		for (int i = 0; i < macro - micro; ++i){
			for (j =0 ; j < micro; ++j){
				if(str[i+j] != text[j]){
					break;	
				}		
			}	

			if(j == micro){
				return i;
			}
		}
		return -1;
	}

	std::string charToString(char charector){
		std::string str;
		str.push_back(charector);
		return str;
	}

	// Coordinate class implementation

	Coordinate::Coordinate(int xVal, int yVal){
		x = xVal;
		y = yVal;
	};
	

	// set class implementation
	Set::Set(){};
	void Set::add(std::variant<int, Coordinate> value){
		mainSet.push_back(value);
	}; 
	void Set::print(){
		// Jsut realised that i cant really print through this because its a mix of
		// numbers and COORDS... how TF u gonnna loop through a coord
		int i = 0;
		for (auto p = mainSet.begin(); p != mainSet.end(); ++p){
        	i++;
        	std::cout << i << " " << "and its type is : " << typeid(*p).name(); 
        }
		
	};
	std::vector< std::variant<int, Coordinate>> cartesianProduct(Set set1, Set set2){}; 


}