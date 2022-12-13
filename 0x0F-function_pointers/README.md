In C, like normal data pointers (int *, char *, etc), we can have pointers to functions. Following is a simple example that shows declaration and function call using function pointer.





#include <stdio.h>

// A normal function with an int parameter

// and void return type

void fun(int a)

{

    printf("Value of a is %d\n", a);

}

  

int main()

{

    // fun_ptr is a pointer to function fun() 

    void (*fun_ptr)(int) = &fun;

  

    /* The above line is equivalent of following two

       void (*fun_ptr)(int);

       fun_ptr = &fun; 

    */

  

    // Invoking fun() using fun_ptr

    (*fun_ptr)(10);

  

    return 0;

}

Output:



Value of a is 10

Why do we need an extra bracket around function pointers like fun_ptr in above example?

If we remove bracket, then the expression “void (*fun_ptr)(int)” becomes “void *fun_ptr(int)” which is declaration of a function that returns void pointer. See following post for details.

How to declare a pointer to a function?



Following are some interesting facts about function pointers.



 

1) Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.




