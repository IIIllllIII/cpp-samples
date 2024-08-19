### Prerequisites

- [ ] VSCode with [C++ extension installed](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
- [ ] compiler setup
- [ ] C++20 support (optional)

### Samples

Compile using `g++ -std=c++20 main.cpp -o main` or equivalent command.

#### 0. Hello World sample

Concepts:
- running a simple C++ program
- `std::cout` to write to console

`Tasks:` 
- [ ] change the value of `i` and see the output. 
- [ ] decide how should `i` be set: should it be inputted at start, should it be validated that it's in the color list range. Then update the code.

#### 1. Number guess sample

Concepts:
- `std::cin` and `std::cout` to read and write to console
- `std::rand` and `std::srand` to generate random numbers
- control structures: `if`, `else if`, `else`
- loops and breaks: `while`, `for`, `break`, `continue`
- `std::stoi` to convert string to integer

`Task:` 
- [ ] If C++20 is available, try to use `std::format` to convert `{"tried.times", "Your try count is: "}` into `{"tried.times", "You tried {} times."}` and use `std::format` to format the string instead of concatenating.
- [ ] in the `isNumber` function, provide a personalized message for negative numbers (hint: pass the index so that the `-` char is only tested if index is zero; instead of boolean do return -1 (negative), 0 (non a number) or 1 (number))
- [ ] change `while (true) { ... }` so that the guess_counter is used for the loop, and if it exists without the user guessing the number then print the exit fail message
- [ ] extract the values `1` and `100` so that they are configurable at start (at least `100`, either by randomly choosing them - and test if the first is lower than the last - or by asking the user to input a number for `100`)

> (if not, install and switch to C++20)

#### 3. Reading and writing files

#### 4. Classes and objects

#### 5. Testing

#### 6. Multithreading

#### 7. Networking
