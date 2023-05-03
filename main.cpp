#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int attempt_number, rand_number;
    int attempts = 6;

    srand(time(nullptr));

    rand_number = rand() % 10 + 1;

    while (attempts > 0) {
        std::cout << "Enter a number: ";
        std::cin >> attempt_number;

        if (attempt_number == rand_number) {
            std::cout << "Congratulations !!" << std::endl;
            std::cout << "You got it right !!" << std::endl;

            return 0;
        } else {
            attempts--;

            std::cout << "You missed !" << std::endl;
            std::cout << "You have " << attempts << " attempts" << std::endl;
        }
    }

    return 0;
}
