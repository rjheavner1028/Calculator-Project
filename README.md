# Calculator-Project
Cs-210 Project to Debug a calculator

Project Summary:
The project is a straightforward C++ calculator software. It enables users to assess fundamental mathematical operations between two integers, such as addition, subtraction, multiplication, and division. It asks the user if they want to evaluate another expression after finishing the calculation.

What did you do particularly well?
- The user input handling is straightforward, and the calculator loop allows for multiple evaluations without restarting the program.
- The code is clear, with each math operation having its separate conditional block, making it easy to read.
- Proper use of comments to indicate corrections and issues.

Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
- Error Handling: The code does not account for potential issues like division by zero. Implementing error checks for these scenarios would make the program more robust.
- Expandability: Using a `switch` statement instead of multiple `if` statements would make it easier to add more operations in the future.
- Input Validation: There's no validation for invalid operations or non-numeric input.
- Efficiency: Instead of having multiple `if` statements, a single `if-else` or `switch` structure would be more efficient as only one condition would match.

Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
- From the perspective of examining the provided code, handling the user input (`cin >> op1 >> operation >> op2;`) and making corrections might have been challenging. However, referring to C++ documentation or forums like Stack Overflow would help in overcoming these challenges.

What skills from this project will be particularly transferable to other projects or coursework?
- Basic operations in C++ and understanding user input.
- Conditional programming for decision-making.

How did you make this program maintainable, readable, and adaptable?
- Maintainable: By keeping the main logic within the `main` function and not over-complicating with multiple functions or classes.
- Readable: Usage of clear variable names (`op1`, `op2`, `operation`) and spacing. Also, comments indicating changes and corrections enhance readability.
- Adaptable: The structure is simple enough that if more operations or features are to be added, they can be integrated with minimal changes.

In the future, splitting the code into separate functions for each operation and utilizing more advanced error handling and user input validation techniques would make the project even more effective.
