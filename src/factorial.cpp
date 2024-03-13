#include <iostream>
using namespace std;

int main()
{
    // the factorial of a number
    // 6! = 1*2*3*4*5*6 = 720

    int number;
    cout << "Number: ";
    // cin >> number;

    number = 6;

    int factorial = 1;

    // for(int i = 1; i <= number; i++) {
    //     factorial = factorial * i;

    // }

    // another way of solving this
    // 6! = 6*5*4*3*2*1 = 720

    for(int i = number; i >= 1; i--) {
        factorial = factorial * i;

    }

    cout << number << "!= " << factorial;

}