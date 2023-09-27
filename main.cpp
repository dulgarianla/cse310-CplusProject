#include <iostream>
#include <string>

int main() {
    // To add borders to help separate the questions for the user and make it look nicer
    std::string borders(100, '-');
    double number1, number2, results;
    char options;

    // Start of the program
    std::cout << "Hi! I'm Calcky The Calculator" << std::endl;
    std::cout << borders << std::endl;

    // Input for the first number from user input
    // Using cin for user input
    std::cout << "Please enter the first number: " << std::endl;
    std::cout << borders << std::endl;
        if (!(std::cin >> number1))
        {
            return 0; // Exit if input is invalid
        }

    // Input for the operator
    std::cout << "Please now enter the operator you want to use (+, -, *, /): " << std::endl;
    std::cout << borders << std::endl;
        if (!(std::cin >> options))
        {
            return 0; // Exit if input is invalid
        }

    // Input for the second number
    std::cout << "Please enter the second number: " << std::endl;
    std::cout << borders << std::endl;
        if (!(std::cin >> number2))
        {
            return 0; // Exit if input is invalid
        }
    std::cout << borders << std::endl;

    // Perform the calculation based on the selected operator
    if (options == '+')
    {
        results = number1 + number2;
    }
    else if (options == '-')
    {
        results = number1 - number2;
    }
    else if (options == '*')
    {
        results = number1 * number2;
    }
    else if (options == '/')
    {
        results = number1 / number2;
    }

    // Display the result to the user
    std::cout << "Your result is: " << number1 << " " << options << " " << number2 << " = " << results << std::endl;

    return 0; // Return success code
}
