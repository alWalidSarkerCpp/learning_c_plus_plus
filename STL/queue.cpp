#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> names;
    names.push("walid");
    names.push("sarker");
    names.push("sijan");
    names.push("sarder");
    names.push("rafsan");
    cout<<"first element: "<<names.front()<<endl;
    cout<<"last element: "<<names.back()<<endl;
    names.pop();
    cout<<endl;
    //remember in queue there we push from the front and remove from the front
    cout<<"first element has been removed, so the ans: "<<names.front()<<endl; 
    cout<<"Size: "<<names.size()<<endl;
    return 0;
}