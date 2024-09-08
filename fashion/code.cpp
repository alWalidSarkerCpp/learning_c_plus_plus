#include <iostream>
#include <vector>
using namespace std;

int main(){
    int digits[] = {1,2,3,4,5};
        string input = "";
        for(int index=0;index<5;index++){
            input += to_string(digits[index]);
        }
        input = to_string(stoi(input)+1);
        vector<int> array;
        for(int index=0;index<input.length();index++){
            array.push_back(input[index] - '0');
        }
        for(int index=0;index<array.size();index++){
            cout<<array[index]<<" ";
        }
    return 0;
}