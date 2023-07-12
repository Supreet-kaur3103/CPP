#include <iostream>
using namespace std;

//your code goes here
template <class T>
T myMax(T p, T q){
    
        return p > q ? p : q;
}


int main () {
    double x, y;
    cin>>x>>y;
    int a, b;
    cin>>a>>b;
    cout << myMax(x, y) << endl;
    cout << myMax(a, b) << endl;
}