# C++ - Algorithms part 1


## Table of contents
* [Overview](#overview)
* [General info](#general-info)
* [Technologies and tools](#technologies-and-tools)
* [Task list](#task-list)
    * [Task 1](#task-1)
    * [Task 2](#task-2)
    * [Task 3](#task-3)
    * [Task 4](#task-4)
    * [Task 5](#task-5)
    * [Task 6](#task-6)
    * [Task 7](#task-7)
    * [Task 8](#task-8)
* [Licence](#licence)

---

## Overview
The appearance of a running application:
![App]();

---



## General info
A console application designed to apply simple algorithms, mainly to mathematical tasks. The tasks are listed below, and their rules are set in advance by the teacher.

---


## Technologies and tools
* C++

---

## Task list

---

### Task 1 
Create a vector of integers with the size specified by the user in the console. 
Write two functions:

* ```fill_progressive```, which will fill the vector passed to it with consecutive integers from 1 to n, where n is the length of the vector
* ```print_vector```, which will display the elements of the vector in the console, separated by commas

Example:
```c++
std::vector<int> vec(6);
fill_progressive(vec);
print_vector(vec);

```

---

### Task 2 
Write a function ```min_max``` that finds the minimum and maximum in a vector of ```double``` numbers passed to it. Return the found values through two argument-references:

```c++
double min;
double max;
std::vector<double> values = {-1.0, 100, 3.14, -999.9, 21.37};

min_max(values, min, max); 
```

---

### Task 3
Write a ```factorial``` function that determines the power from a passed argument **without using recursion**. To allow operations on large integers use the ```uint64_t``` variable type.

An example function call should look as follows:
```c++
uint64_t result = factorial(15);
std::cout << result << std::endl; 
```

---

### Task 4

Write a function ```factorial_r``` that determines the power from a passed argument **using recursion**. To allow operations on large integers use the ```uint64_t``` variable type. Make use of the definition of a force.

An example function call should look like this:
```c++
uint64_t result = factorial_r(15);
std::cout << result << std::endl;
```

---

### Task 5
Write an ```is_prime``` function that checks if the given number is prime (divides without remainder only by 1 and itself), so that it can be used in the following example:

```c++
int prime_or_not_prime = 13;
if (is_prime(prime_or_not_prime)) {
    std::cout << prime_or_not_prime << " is prime!" << std::endl;
} else {
    std::cout << prime_or_not_prime << " is not prime!" << std::endl;
}
```
Then ask the user to enter a range (lower and upper limit) and using the is_prime function display the prime numbers from the desired range.

---

### Task 6
A special case of alternating series, called the Leibniz formula, allows us to determine the approximation of the number π.
Write a function ```leibniz_pi``` that computes π with the given precision given in the parameter - sum the expressions until the next word added is not less than the given precision. You can compare the result with the constant ```M_PI``` from the ```<cmath>``` header.
```c++
double stop_at = 0.001;
double pi_approx = pi_leibniz(stop_at);

std::cout << pi_approx << std::endl;
std::cout << "error: " << pi_approx - M_PI << std::endl;
```
---

### Task 7
Write a ```draw_square``` function that draws a center empty square of the given side, composed of ```#``` characters, in the console.
Then modify the function by adding two Boolean parameters ```left_diagonal``` and ```right_diagonal```. Setting either (or both) of them to ```true``` should cause the corresponding diagonals to be drawn inside the square.

---

### Task 8
Euclid's algorithm for finding the greatest common divisor of two numbers. Write a function ```gcd(a, b)``` implementing the described algorithm and returning the result.

---

## Licence
All rights reserved &copy; 2021 Mateusz Polakiewicz