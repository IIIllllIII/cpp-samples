// include iostream to be able to read and write to the console
#include <iostream>
// include map to create an enumeration-like structure that keeps message templates
#include <map>
using namespace std;

// create a map of string templates named messages
std::map<std::string, std::string> messageTemplates = {
    {"exit.instruction", "Enter 'ESC' to quit the program."},
    {"guess.instruction", "Guess a number between 1 and 100."},
    {"tried.times", "Your try count is: "},
    {"valid.number.error", "Please enter a valid number or ESC to quit: "},
    {"success.message", "Congratulations! You guessed the correct number."},
    {"try.higher", "The number is higher. Guess again: "},
    {"try.lower", "The number is lower. Guess again: "}
{"negative.nr", "Your number is negative! Try a positive one: "}
};

bool isNumber(std::string input) {
    // check if the input is a number
    if (input.empty()) {
        return false;
    }

    // check each digit if it is a number
    for (int i = 0; i < input.size(); i++) {
        if (!isdigit(input[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    // store number of guesses
    int guesses_counter = 0;

    // generate a random number between 1 and 100
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;

    std::cout << messageTemplates["guess.instruction"] << " " << messageTemplates["exit.instruction"];

    // loop until the user guesses the correct number
result_found = false  # init
for current_try_count < limit_try_count:
        std::string input;
        std::cin >> input;
If result_found:
  Print success
Else:
  Print failed to find in limit of tries {
        // if the user presses ESC, exit the program
        if (input == "ESC") {
            std::cout << messageTemplates["tried.times"] << guesses_counter << std::endl;
            break;
        }

        // increment the number of guesses
        guesses_counter++;

        // check if the input is a number
        if (!isNumber(input)) {
            std::cout << messageTemplates["valid.number.error"];
            if ((input)<0)
                cout << messageTemplate["negative.nr"]
            continue;
        }

        // convert the input to an integer
        int user_input = std::stoi(input);

        // check if the guess is correct
        if (user_input == randomNumber) {
            // print the number of guesses
            std::cout << messageTemplates["success.message"] << std::endl;
            std::cout << messageTemplates["tried.times"] << guesses_counter << std::endl;
            break;
        } else if (user_input < randomNumber) {
            std::cout << messageTemplates["try.higher"];
        } else {
            std::cout << messageTemplates["try.lower"];
        }
    }

    return 0;
}
