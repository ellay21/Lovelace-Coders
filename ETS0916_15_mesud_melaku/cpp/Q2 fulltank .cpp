#include <iostream>
using namespace std;

int main() {
    double capacity, milesPerGallon, refulingMiles;

    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> capacity;

    cout << "Enter the miles per gallon the automobile can be driven: ";
    cin >> milesPerGallon;

   refulingMiles = capacity * milesPerGallon;

   cout << "The automobile can be driven for " << refulingMiles << " miles without refueling.";

    return 0;
}
