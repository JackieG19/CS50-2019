## Data Types

**int** is a data type to use for variable that will store integers that takes up 4 bytes of memory(32 bits).

This means the range of value they can stores is neccessarily limited to 32 bits worth on information.
``` 
    31                                                  31
  -2                      0                           2-1
___|______________________|___________________________|___
```
**unsigned int** 
- is a qualifer that can be applied to certain types (including int) 
- which effectively doubles the positive range of variables of that types
- at the cost of disallowing any negative values.

**char**
- is used for variables that will store single characters
- characters always take up 1 bytes of memory(8 bits)
- this means the range of values they can store is neccessarily limited to 8 bits worth of information

Thanks to ASCII, there's a mapping of character lke A, B, C, etc, to numeric values in the positive side of this range. 
``` 
 -128                     0                          127
___|______________________|___________________________|___
```
**float** 
- is used for variables that will store floating-point values, also known as a real number
- floating point values always takes up 4 bytes of memory(32 bits)

It's a little complicated to describe the range of a float, but suffice it to say 
with 32 bits of precision, some of which might be used for precise we can be. 

**double**
- is used for variables that will store floating-point values, also knowns as real numbers
- the difference is that doubles are double precision, they always take up 8 bytes of memory(64 bits)

With an additional 32 bits of precision relative to a float, 
double allow us to bespecify much n=more precise real numbers.

**void**
- is not a data type
- functions can have a void return type, which just means they don't return a value
- the parameter list of a function can also be void 
- it simply means the function no parameters.

Think of void more as a placeholder for "nothing". It's more complex than that, 
but this should suffice for the better part of the course.

**bool** is used for variable that is capable only of storing one of two values; true nad false

**string** is used for variables that will store a series of characters, includes things such as words, 
sentence, paragraph, and the likes.

Creating a variable need to specify the data type of the variable and give it a name.
- Example:
  - int number;
  - int letter
  
To create multiple variables of the same type, you specify the type name once, 
and then list as many variables ofthat types as you want.
- Example:
  - int height;
  - int width;
  - float sqrt2;
  - float sqrt3;
  - float pi;
___

Using a variable

After a variable has been declared, its no longer neccessory to specify that variable's type.
```
  int number;   // declaration
  
  number = 17;  // assignment
  
  char letter;   // declaration
  
  letter = 'H';  // assignment
```
If you are simultaneously declaring and setting the value of a variable (sometimes called initializing), 
you can consolidate this to one step.
```
// initialization
  int number; 
  char letter;
```
