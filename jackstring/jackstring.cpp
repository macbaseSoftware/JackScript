#include <iostream>
#include <vector>
#include <string>
#include "jackstring.h"

namespace js{
int jackLength(std::string str){
	int count = 0;
	for (int i = 0; i < str.length(); ++i)
	{
		count++;
	}
	return count;
}
}