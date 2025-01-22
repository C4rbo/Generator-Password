# Password Generator

A C++ program that generates secure and customizable passwords based on user preferences. The user can choose to include uppercase letters, numbers, and symbols, as well as define the length of the password.

## Features

- **Secure Password Generation**: The program generates passwords based on a set of secure characters.
- **Customizable Options**: The user can choose between numeric passwords, letter-based passwords, or complex passwords (which may include uppercase letters, numbers, and symbols).
- **Password Storage**: Each generated password is displayed and stored for future reference.

## Technologies

- **Programming Language**: C++
- **Libraries**: `iostream`, `vector`, `string`, `cstdlib`, `ctime`, `random`

## How it Works

1. The program asks the user to choose from the following options:
   - Generate a numeric password
   - Generate a password with letters
   - Generate a complex password (which may include uppercase letters, numbers, and symbols)
   - Exit the program

2. The user inputs the desired length of the password and, in the case of a complex password, selects whether to include uppercase letters, numbers, and symbols.

3. The password is securely generated using a random number generator based on `std::random_device` and `std::mt19937`, and displayed to the user.

4. The generated passwords are saved and shown at the end of the program execution.

## How to Run the Program

### Requirements

- A C++ compiler (e.g., [g++](https://gcc.gnu.org/)).

### Compilation and Execution

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/password-generator.git
   cd password-generator
   ```

2. Compile the program:
   ```bash
   g++ -o password_generator password_generator.cpp
   ```

3. Run the program:
   ```bash
   ./password_generator
   ```

### Example Execution

```
Choose an option:
1. Generate numeric password
2. Generate password with letters
3. Generate complex password
4. Exit
1
Enter the length of the numeric password: 8
Generated password: 37592864

Choose an option:
1. Generate numeric password
2. Generate password with letters
3. Generate complex password
4. Exit
3
Enter the length of the complex password: 12
Include uppercase letters? (1 = Yes, 0 = No): 1
Include numbers? (1 = Yes, 0 = No): 1
Include symbols? (1 = Yes, 0 = No): 1
Generated password: t9U#eG7&fXjp
```

## Legal Disclaimer

This tool is for educational purposes and authorized usage only. Encrypt or decrypt files that you have permission to modify. Unauthorized tampering with files may be illegal. The author assumes no responsibility for any misuse of this tool.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contributing

Contributions are welcome! If you have suggestions for improvements or find any bugs, please open an issue or submit a pull request on GitHub.

## Author

- C4rbo (https://github.com/C4rbo)