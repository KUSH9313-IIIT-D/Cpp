#include <iostream>
using namespace std;

double calculator(){
    cout << "Please enter your operator type between two number\n";
    cout << "1. enter 1 for add\n";
    cout << "2. enter 2 for subraction\n";
    cout << "3. enter 3 for multiplication\n";
    int operatorIndex;
    cin >> operatorIndex;
    
    double a,b;
    cout << "please enter your first number: ";
    cin >> a;
    cout << "please enter your Second number: ";
    cin >> b;
    
    
    switch (operatorIndex)
    {
    case 1:
        return a+b;
        break;
    case 2:
        return a-b;
        break;
    case 3:
        return a*b;
        break;
    
    default:
        return -1;
        break;
    }
}


int main(){
    double ans = calculator();
    cout << "Here is your final value: " << ans << endl;
    return 0;
}