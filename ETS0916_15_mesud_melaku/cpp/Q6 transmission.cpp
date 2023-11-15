#include <iostream>
using namespace std;

int main() {
    int transmissionRate = 960 ;
    int fileSizeInBytes = 419430400;  // 400MB in bytes

    double timeInSeconds = (double)fileSizeInBytes / transmissionRate;
    double timeInMinutes = timeInSeconds / 60;
    double timeInHours = timeInMinutes / 60;
    double timeInDays = timeInHours / 24;

    cout << "Time to send the file:" << endl;
    cout << "Seconds: " << timeInSeconds << "s" << endl;
    cout << "Minutes: " << timeInMinutes << "min" << endl;
    cout << "Hours: " << timeInHours << "hr" << endl;
    cout << "Days: " << timeInDays << "days" << endl;
return 0;
}
