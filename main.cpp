#include <iostream>

int main() {
    const int max_length = 100;
    char str[max_length];

    // Ввід рядка символів
    std::cout << "Enter a string: ";
    std::cin.getline(str, max_length);

    int letter_count = 0;
    int digit_count = 0;
    int other_count = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            letter_count++;
        }
        else if (isdigit(str[i])) {
            digit_count++;
        }
        else {
            other_count++;
        }
    }

    std::cout << "Number of letters: " << letter_count << std::endl;
    std::cout << "Number of digits: " << digit_count << std::endl;
    std::cout << "Number of other characters : " << other_count << std::endl;

    return 0;
}