#include <stdio.h>

int main(int argc, char **argv)
{
    // initalizing a null pointer
    // pointers must always be initialized
    int *ptr1 = NULL;
    int *ptr2 = 0;

    // assigning a value to a pointer
    int var = 8;
    ptr1 = &var;

    // dereferencing the pointer in order to access the underlying memory address (Extremely fucking unsafe)
    *ptr1 = 200;

    // pointer increments are different for different types of pointers
    int *int_ptr = NULL;
    int_ptr = (int *)&var;

    // char const should be initialized with single quotes
    char char_var = 'D';
    char *char_ptr = (char *)&char_var;

    printf("Pointer locations before increment, int: %p, char: %p\n", int_ptr, char_ptr);

    int_ptr++;
    char_ptr++;

    printf("Pointer locations after increment, int: %p, char: %p\n", int_ptr, char_ptr);

    int array[3];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    // Iterating over an integer array by using the pointer arithmatic is wrong.
    // The rust compiler wouldn't be happy
    int *array_element_pointer = &array[0];
    for (;;)
    {
        printf("The array element: %d \n", *array_element_pointer);
        if (array_element_pointer == &array[2])
        {
            break;
        }
        array_element_pointer++;
    }

    // structs are essentially arrays with fields optimized for memory access effeciency.
    // The smallest ammount of memory that a cpu can read is called a __word__
    // on most 64 bit architectures it is 32 bits or 4 bytes. So if we have three character fields and an int field
    // the compiler will allocate 4 bytes to the three char fields to optimize memory access speed by
    // making the int field __aligned__ by making it readable in one word which is a lot faster than reading in two words
    // a structure where the data is optimized for memory footprint and not access speed is called a packaed structure
    // a struct can be made packed with struct  __attribute__((__packed__)) type_t {...}

    // start reading on page 80
    return 0;
}