#include<iostream>
using namespace std;
// Swap two numbers

int main(){
    int a, b;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    int original_a = a;
    int original_b = b;

    /* using third variable
    int temp = a;
    a = b;
    b = temp; */

    // whithout using third variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout << original_a << " becomes " << a << endl;
    cout << original_b << " becomes " << b;
    return 0;
}