#ifndef JACKSTRING_H
#define JACKSTRING_H
#pragma once

#include <iostream>
#include <vector>
#include <string>


namespace js{
	int length(std::string str);
	int includes(std::string text, std::string str); // returns 1 else -1 
	
}

#endif