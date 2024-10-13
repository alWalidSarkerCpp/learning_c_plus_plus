#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> numbers;
    int number = 1;
    while(number<=10){
        numbers.push_back(number);
        number++;
    }
    numbers.erase(numbers.begin(),numbers.begin()+1);
    for(int number : numbers){
        cout<<number<<" ";
    }
    return 0;
}