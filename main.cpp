#include <iostream>
#include <vector>
#include <string>
#include "jackstring/jackstring.h"
using namespace std;
// using namespace js;
void loop(vector<int> arr){
	// int i ;
	for( int i = 0; i < arr.size(); ++i){
		cout << i << endl;
	}
}

int main(){
	string str = "data";
	int a = js::jackLength(str);
	cout << a ;
	 
	return 0;
}
