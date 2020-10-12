# JackScript
A string and vector library for C++

## Current Version 
version 0.1.0-alpha

## First Release Version
version 1.0

## Usage
```c++
#import <string>
#import <vector>
#import <JackScript.h>

main(){
  // declarations
  std::vector<Char> MyArray;
  std::string MyString = "hello world";
  
  // call function
  MyArray = js::stringToVector(MyString); // returns a vector
  
}
```
