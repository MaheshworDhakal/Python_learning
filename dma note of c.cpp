//dynamic memory allocation in C allows you to allocate and deallocate memory at runtime. 
This is useful when you don't know in advance how much memory you need.
 
The C standard library provides several functions to handle dynamic memory allocation:
	
 malloc(), calloc(), realloc(), and free().

//Key Functions for Dynamic Memory Allocation

//malloc() (Memory Allocation):

Allocates a specified number of bytes of memory and returns a pointer to the first byte.
Memory is not initialized.

void* malloc(size_t size);
Example:
int *ptr = (int *)malloc(10 * sizeof(int)); // Allocates memory for 10 integers
if (ptr == NULL) {
    // Handle allocation failure
}
//calloc() (Contiguous Allocation):

Allocates memory for an array of n elements, each of size size, and initializes all the bytes to zero.

void* calloc(size_t n, size_t size);
Example:

int *ptr = (int *)calloc(10, sizeof(int)); // Allocates memory for 10 integers and initializes to 0
if (ptr == NULL) {
    // Handle allocation failure
}

//realloc() (Reallocation):

Resizes a previously allocated memory block. It can increase or decrease the size of the memory block.

void* realloc(void* ptr, size_t new_size);
Example:

ptr = (int *)realloc(ptr, 20 * sizeof(int)); // Resize the memory block to hold 20 integers
if (ptr == NULL) {
    // Handle allocation failure
}
//free() (Deallocate Memory):

Frees a dynamically allocated memory block, releasing the memory back to the heap.

void free(void* ptr);
Example:

free(ptr); // Frees the memory allocated earlier

//Example Program Using Dynamic Memory Allocation
Here’s an example of how you might use dynamic memory allocation to manage an array of integers:


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int)); // Memory allocation

    if (arr == NULL) {  // Check if malloc returned NULL (allocation failed)
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Input elements into the dynamically allocated array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output the elements
    printf("You entered the following integers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deallocate the memory once done
    free(arr);

    return 0;
}
Explanation:
	
//Allocating Memory:

arr = (int *)malloc(n * sizeof(int)); dynamically allocates memory for n integers.
 The sizeof(int) ensures that the memory allocation is correct for the integer type.

//Checking Allocation Failure:

If malloc fails, it returns NULL. 
We check for this with if (arr == NULL).

//Deallocating Memory:

Once the array is no longer needed, 
free(arr); is called to deallocate the memory and return it to the system.

//Common Issues with Dynamic Memory Allocation:
Memory Leaks: Forgetting to free dynamically allocated memory leads to memory leaks,
 which can cause the program to consume excessive memory over time.
Dangling Pointers: 
After calling free(), the pointer still holds the address of the freed memory. 
It's a good practice to set the pointer to NULL after freeing it.
Unsuccessful Allocation:
 Always check the returned pointer for NULL after allocation to ensure memory was successfully allocated.
Good Practices:
Always free the dynamically allocated memory when you're done using it.
Check if the memory allocation was successful by verifying if the pointer is NULL.
After freeing memory, it's good practice to set the pointer to NULL to avoid accidental access to freed memory.
