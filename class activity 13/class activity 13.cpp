// class activity 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    double ave_temp;
    cout << "Enter the number of temperatures: ";
    cin >> x;
    vector<double> temperature(x);
    double sum = 0.0;
    for (int i = 0; i < x; i++) {

        cout << "Enter the temperatures: ";
        cin >> temperature[i];
        sum = sum + temperature[i];

        ave_temp = sum / x;
    }
    cout << "The average temperature is: " << ave_temp << endl;
  
    return 0;
}