#include <iostream>
#include <vector>
#include <cmath>
#include <pair>


namespace js{

	std::pair<double, double> quadratic(double a, double b, double c){
		double x1, x2;
		pair<double, double> mypair;
		if(a == 0.0){
			std::cout << "Error: (js::quadratic() first param cannot be == 0)" << std::endl;
			return 1;
		}		
		x1 = (-b + sqrt( (b*b) - 4*a*c) )/ (2*a);
		x2 = (-b - sqrt( (b*b) - 4*a*c) )/ (2*a);
		mypair.first = x1;
		mypair.second = x2;

		return mypair;
	};
}