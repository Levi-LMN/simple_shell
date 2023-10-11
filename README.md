# Simple Shell

Welcome to the Simple Shell project! This is a command-line interpreter (shell) implemented in the C programming language. The shell provides a basic interactive interface for users, allowing them to execute various UNIX commands.

## Project Highlights
* *Basic Shell Features:* Implements fundamental shell functionalities like command execution, prompt display, and basic command parsing.

* *Advanced Functionalities:* Handles command arguments, environment variables, logical operators, built-in commands, and more.

* *Robust Error Handling:* Provides detailed error messages and gracefully handles unexpected inputs and scenarios.

* *Academic Integrity:* Developed from scratch, following academic integrity guidelines. No plagiarism or code copying.

# Getting started
## Prequisities
* GCC Compiler: Ensure you have a C compiler installed on your system. If not, you can download and install it from GCC's official website.

## Installation
1. Clone the Repository:
```
git clone https://github.com/Levi-LMN/simple_shell
```

2. Compile the Shell:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell
```

3. Run the shell
```
./shell
```

4. Execute Commands:
* Enter UNIX commands to test the shell's functionality.

# Usage
## interactive mode
* Execute Commands:
    * Enter UNIX commands to test the shell's functionality.
* Batch mode:
    * Run ./shell [filename] to execute commands from a file. The file should contain one command per line.

## Features
* Handle Single Commands
* Handle Commands with Arguments
* Handle Environment Variables
* Implement Built-in Commands (exit, env)
* Handle Logical Operators (&&, ||)
* Handle Comments (#)
* Error Handling and Messages

## Contributors
[Levi Mukuha](https://github.com/Levi-LMN)

## Resources
[Project description]()

## license
This project is licensed under the [MIT License.](https://opensource.org/license/mit/)