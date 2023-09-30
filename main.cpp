#include <iostream>
#include <string>
#include <limits>

int main() {
    // Create borders to help separate the questions for the user and making it easier to follow along
    std::string borders(100, '-');

    // Declare variables for storing user input and calculation results
    double number1, number2, results;
    char options;

    // Display a greeting message to the user and print a border line
    std::cout << "Hi! I'm Calcky The Calculator" << std::endl;
    std::cout << borders << std::endl;

    // Input for the first number from user input
    // Prompt the user to enter the first number
    while (true)
    {
        std::cout << "Please enter the first number: " << std::endl;
        // Check if the input is valid (a double)
        if (std::cin >> number1) {
            break; // Break out of the loop if valid input is provided
        }
        else
        {
            // Display an error message for invalid input
            std::cerr << "Invalid input for the first number. Please try again." << std::endl;
            // Clear any error flags and the input buffer
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Input for the operator
    // Prompt the user to enter an operator (+, -, *, /)
    while (true)
    {
        std::cout << "Please enter the operator you want to use (+, -, *, /): " << std::endl;
        // Check if the input is valid (a character) and within the allowed operators
        if (std::cin >> options)
        {
            if (options == '+' || options == '-' || options == '*' || options == '/')
            {
                break; // Break out of the loop if a valid operator is provided
            }
            else
            {
                // Display an error message for an invalid operator
                std::cerr << "Invalid input for the operator. Please try again." << std::endl;
                // Clear any error flags and the input buffer
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        else
        {
            // Display an error message for invalid input
            std::cerr << "Invalid input for the operator. Please try again." << std::endl;
            // Clear any error flags and the input buffer
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Input for the second number
    // Prompt the user to enter the second number
    while (true)
    {
        std::cout << "Please enter the second number: " << std::endl;
        // Check if the input is valid (a double)
        if (std::cin >> number2)
        {
            break; // Break out of the loop if valid input is provided
        }
        else
        {
            // Display an error message for invalid input
            std::cerr << "Invalid input for the second number. Please try again." << std::endl;
            // Clear any error flags and the input buffer
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Print a border line
    std::cout << borders << std::endl;

    // Perform the calculation based on the selected operator
    // Addition operator
    if (options == '+')
    {
        results = number1 + number2;
    }
        // Subtraction operator
    else if (options == '-')
    {
        results = number1 - number2;
    }
        // Multiplication operator
    else if (options == '*')
    {
        results = number1 * number2;
    }
        // Division operator
    else if (options == '/') {

        results = number1 / number2;
    }

    // Display the result to the user
    std::cout << "Your result is: " << number1 << " " << options << " " << number2 << " = " << results << std::endl;

    return 0; // Return success code
}
