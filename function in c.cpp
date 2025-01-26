. //Formal Arguments (Parameters)

Formal arguments, also known as parameters, 
are the variables declared in the function definition. 
They act as placeholders for the values that are passed to the function when it is called. 
These parameters define what type of data the function expects as input.

Formal arguments are used within the function's body to perform operations using the passed values.

The function declaration or definition specifies the type and name of these parameters.

//Syntax of Formal Arguments:

return_type function_name(data_type param1, data_type param2, ...) {
    // function body
}
//Example of Formal Arguments:

#include <stdio.h>

// Function definition with formal arguments

int add(int a, int b) {  // 'a' and 'b' are formal arguments
    return a + b;
}

int main() {
    int result = add(3, 5);  // Pass actual arguments (3, 5)
    printf("Sum: %d\n", result);
    return 0;
}

//2. Actual Arguments (Arguments)
Actual arguments, also known simply as arguments,
 are the real values or variables that are passed to the function when it is called. 
 These values are used to initialize the formal arguments in the function.

Actual arguments can be constants, variables,
 or expressions, depending on what is passed when calling the function.

The actual arguments are provided at the time of function invocation.

//Syntax of Actual Arguments:

function_name(actual_argument1, actual_argument2, ...);
Example of Actual Arguments:

int result = add(3, 5);  // '3' and '5' are actual arguments


Key Differences between Formal and Actual Arguments
//Formal Arguments (Parameters)	           Actual Arguments (Arguments)

Declared in the function definition        .Provided during function call.

Act as placeholders for data.	    The actual data or values passed to the function.

Defined by the function’s signature.	Provided by the caller of the function.

They are variables within the function.	They can be constants, variables, or expressions.

They define what type of data the function expects.	
                               They provide the actual values or references that the function uses.

//Pass-by-Value vs Pass-by-Reference

Pass-by-Value:
 In C, function arguments are typically passed by value.
  This means that when you pass an argument,
   a copy of the actual argument is made and assigned to the corresponding formal argument.
    Changes made to the formal argument inside the function do not affect the actual argument in the caller.

Example (Pass-by-Value):


#include <stdio.h>

void changeValue(int x) {
    x = 100;  // This change affects only the local variable 'x' inside the function
}

int main() {
    int num = 10;
    changeValue(num);  // Pass-by-value
    printf("num: %d\n", num);  // Output: num: 10 (num is not modified)
    return 0;
}
//Pass-by-Reference: 
In C, pass-by-reference can be simulated using pointers.\
 Instead of passing the value of a variable, you pass its memory address.
  This allows the function to modify the original value of the argument.

Example (Pass-by-Reference using Pointers):


#include <stdio.h>

void changeValue(int *x) {
    *x = 100;  // Dereferencing the pointer to modify the original value
}

int main() {
    int num = 10;
    changeValue(&num);  // Pass-by-reference using pointers
    printf("num: %d\n", num);  // Output: num: 100 (num is modified)
    return 0;
}
//Conclusion
Formal arguments are the variables defined in the function declaration/
definition and represent the parameters of the function.
 They are placeholders for the values the function will use.
Actual arguments are the real values (or variables) passed to the function when it is called,
 and they are used to initialize the formal arguments.
The distinction is important because the function signature depends on the formal arguments,
 while the function’s behavior depends on the actual arguments passed to it.
