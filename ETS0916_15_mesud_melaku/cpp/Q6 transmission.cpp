#include <iostream>

using namespace std;

int main() {
    int fileSizeInBytes,transmissionRate ;
    cout << "Please enter the file size in bytes: " ;
    cin >> fileSizeInBytes ;// I'll be testing it using 400MB in bytes or 419430400
    transmissionRate = 960;  // characters per second

    double timeInSeconds = (double)fileSizeInBytes / transmissionRate;
    double timeInMinutes = timeInSeconds / 60;
    double timeInHours = timeInMinutes / 60;
    double timeInDays = timeInHours / 24;

    cout << "Time to send the file:" << endl;
    cout << "Seconds: " << timeInSeconds << "s" << endl;
    cout << "Minutes: " << timeInMinutes << "min" << endl;
    cout << "Hours: " << timeInHours << "hr" << endl;
    cout << "Days: " << timeInDays << " day" << endl;

    return 0;
}
