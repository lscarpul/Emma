*This project has been created as part of the 42 curriculum by enucci.*

## Description
**push_swap** is an algorithmic project from the 42 curriculum. The primary goal is to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed, you have to manipulate various types of algorithms and choose the most appropriate solution for optimized data sorting. 

This specific implementation utilizes the highly efficient **Turk algorithm** (as seen in the `turk.*.c` files) to calculate optimal moves and minimize the amount of operations needed to sort both small and large sets of numbers.

## Instructions
### Compilation
To compile the project, run the following command at the root of the repository:
```bash
make
```
This will compile the source code and generate the `push_swap` executable.

### Execution
To run the program, pass a list of integers as arguments. The program will output the list of operations required to sort the arguments:
```bash
./push_swap 4 67 3 87 23
```

You can also use the provided checker to verify if the instructions successfully sort the stack:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```

## Resources
- **Push Swap - A journey to find most efficient sorting algorithm**: A popular reference for the Turk algorithm used in this project to achieve high operational efficiency.
- **42 Network Push_Swap subject**: The official guidelines and constraints for the project.
- **AI Usage**: Artificial Intelligence was utilized during this project as an coding assistant (GitHub Copilot / Gemini) to help generate this README, write boilerplate code, structure standard functions, and assist in debugging memory leaks.
