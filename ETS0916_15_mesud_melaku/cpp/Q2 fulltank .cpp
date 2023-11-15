#include <iostream>
using namespace std;

int main() {
    double capacity, milesPerGallon, miles;

    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> capacity;
    cout << "Enter the miles per gallon the automobile can be driven: ";
    cin >> milesPerGallon;

    miles = capacity * milesPerGallon;

   cout << "The automobile can be driven for " << miles << " miles without refueling." << endl;

    return 0;
}
