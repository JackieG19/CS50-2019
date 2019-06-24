## Conditional Statement

Conditional expression allows 
- your programs to make decisions 
- and take different forks in the road, 
  - depending on the values of the variables or user input.

1. If statement
```
if (boolean-expression)
{
  // code here
  
  if true...
  - all lines of code between the curly braces will execute in order

  if false... 
  - those lines of code will not execute
}
```

2. If and else statement
```
if(boolean-expression)
{
  // code here
  if true
  - all lines of code between the first set of curly braces will execute in order 

}

else 
{
  // code here
  
  if false
  - all lines of the code between the second set of curly braces will execute
}
```

3. if-else if-else chain
```
if (boolean-expression)
{
  // first branch
}

else
{
  // second branch
}
else if
{
  // third branch
}
else
{
  // fourth branch
}

As you would expect, each branch is mutually exclusive
```
___

It is also possible to create a chain of non-mutually exclusive branches. 

In this example, only the third and fourth branches are mutually exclusive.

The else binds to the nearest if only.

```
int x = GetIn();
switch(x)
{
  case 1:
    printf("one!\n");
    break;
  case 2:
    printf("two!\n");
    break;
  case 3:
    printf("three!\n");
    break;
  default:
    printf("sorry!\n");
}
```
C's switch statement is a conditional statement that permits enumeration of discrete cases, 
instead of relying on boolean expression.

It's important to break; between each case, or you will "fall through" each case 
(unless that is desired behavior)

___

```
int x;
if(expr)
{
  x = 5;
}

else
{
  x = 6;
}
```
- These two snippets of code are identically.
```
int x = (expr) ? 5:6; 
```
The ternary operator (?:) in mostly a nice trick, but is useful for writing trivially short conditional branches.

You won't need to write it if you don't want to.
