Each process has it's unique PID (process identifier)

Signals that can interrupt/stop the process:
 - SIGTERM: initializes gracefull shutdown and allows the program to exit.
 - SIGKILL: ends the process immediately without a chance to exit gracefully.
 - SIGINT: interrupts the process from a user. Usually issued through Ctrl + C. Doesn't offer a chance for cleanup.

The memory layout of a process is split into:
 - Uninitialized data segment or Block started by Symbol segment: contains uninitialized global variables
 - Data segment: contains initialized global variables set to non zero values
 - Text segment of Code segment: contains the sections with the code from the program and the one injected by the compiler
 - Heap
 - Stack

static memory layout is a part of an executable while dynamic memory layout is created when the process is started by the os

Endiannes of a CPU mean whether the smallest byte comes first (little-endian) or the biggest one (big-endian)

Stack, in its abstract form, is a First In, Last Out (FILO) or
Last In, First Out (LIFO) data structure. Regardless of the
implementation details, each entry is stored (pushed) on top
of the stack, and it will be buried by further entries. One entry
cannot be popped out without removing the above entries first.

