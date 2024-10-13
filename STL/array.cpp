#include <iostream>
#include <array> //stl array
using namespace std;

int main(){
    int array[3] = {1,2,3}; //normal array
    std::array<int,2> arr = {1,2}; //stl array
    int size = arr.size(); // to declare size
    int element = arr.at(1); // to access a element
    bool result = arr.empty(); // is empty or not ( returns a boolean value )
    int firstElement = arr.front(); // firstElement
    int lastElement = arr.back(); // lastElement
    return 0;
}
// clang --std=c++17 file.cpp 