#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> names;
    names.push("walid");
    names.push("sarker");
    names.push("sijan");
    names.push("sarder");
    names.pop();
    cout<<"size: "<<names.size()<<endl;
    cout<<"top: "<<names.top()<<endl;
    return 0;
}