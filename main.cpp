#include <iostream>
using namespace std;
int main (){
    double temp_value;
    cout << "Enter the temperature value: ";
    cin >> temp_value;
    if (temp_value < -50 || temp_value > 60) {
        cout << "Temperature out of range\n";
    }
    else {
        if (temp_value < 10) {
            cout << "It is cold\n";
        }else if (temp_value >= 10 and temp_value <= 25) {
            cout << "The weather is moderate\n";
        }else {
            cout << "It is hot\n";
        }
    }
    return 0;
}
