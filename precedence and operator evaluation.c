Precedence and Operator Evaluation!

In C, operators have a specific order in which they are evaluated. This is known as **operator
precedence**.

Here's the standard order of operations:

1. Parentheses `(` and `)`
2. Exponents `**` (for example, `a ** 3`)
3. Multiplication `*`, Division `/`, Modulus `%`
4. Addition `+`, Subtraction `-`

For example:
```c
int a = 5;
int b = 3;

int result = (a + b) * 2; // evaluates to 16
```
In this example:

1. The parentheses are evaluated first: `(a + b)` evaluates to `8` (`a` is 5 and `b` is 3).
2. The multiplication is evaluated next: `8 * 2` evaluates to `16`.

This shows that the operators follow a specific order of precedence, which helps prevent
unexpected behavior.

**Short-circuit Evaluation**

Some operators have **short-circuit evaluation**, where they only evaluate one side of the
expression if the other side can determine the result. For example:

* The logical AND operator `&&` stops evaluating as soon as it encounters a false value.
* The logical OR operator `||` stops evaluating as soon as it encounters a true value.

Here's an example:
```c
int x = 5;
int y = 0;

if (x > 10 && y > 1) {
    printf("This will never be printed!\n");
}
```
In this case, the expression `y > 1` is not evaluated because `x > 10` is false. The `&&`
operator stops evaluating as soon as it encounters a false value.

**Operator Overloading**

C does not support **operator overloading**, which means you can't define your own custom
operators or change their behavior. For example, you can't create a custom addition operator
that adds two complex numbers together.

However, C++ supports operator overloading through the use of member functions in classes.
