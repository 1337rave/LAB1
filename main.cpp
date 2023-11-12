#include <iostream>
using namespace std;

int main() {
    const int max_length = 100;
    char str[max_length];

    cout << "Enter a string: ";
    cin.getline(str, max_length);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            str[i] = '\t';
        }
    }
    cout << "Result: " << str << endl;

    return 0;
}
