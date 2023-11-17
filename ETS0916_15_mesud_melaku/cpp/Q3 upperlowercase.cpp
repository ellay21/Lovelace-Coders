#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
    char letter,upper,lower;

    cout << "Enter a letter: ";
    cin >> letter;

    upper = toupper(letter);
    cout << "Uppercase equivalent: " << upper << endl;
    lower = tolower(letter);
    cout << "Lowercase equivalent: " << lower << endl;

    return 0;
}
/* i can also use an if loop to make this program in a better way, i did not write using if loop
because i thought the whole point of this question was to practice ctype library and not the loop. */
