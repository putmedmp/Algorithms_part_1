#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define M_PI 3.14159265358979323846

// TASK 1
void print_vector(std::vector<int> vector) {
    for (auto it : vector) {
        std::cout << it << ", ";
    }
}   


void fill_progressive(std::vector<int> &vector) {
    unsigned int counter = 1;
    for (auto &it : vector) {
        it = counter;
        counter++;
    }

}

// TASK 2
double& min_max(std::vector<double> vec, double &min, double &max) {
    min = *min_element(vec.begin(), vec.end());
    max = *max_element(vec.begin(), vec.end());
    return min, max;
}



// TASK 3
unsigned long long int factorial(unsigned int num) {
    unsigned int factorial = 1;
    if (num == 0) {
        
    }
    else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
    }
    return factorial;
}



// TASK 4
unsigned long long int factorial_r(unsigned int num) {
    if (num == 0) {
        return 1;
    }
    else {
        return num * factorial_r(num - 1);
    }
}

// TASK 5
bool is_prime(int num) {
    bool prime = true;
    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0) {
        prime = false;
    }
    if (num == 2 || num == 3 || num == 5 ) {
        prime = true;
    }
    if (num == 1) {
        prime = false;
    }
    return prime;
}



// TASK 6
double pi_leibniz(double stop_at) {
    double error = 1;
    double x = 1;
    double y = 1;
    double step = 3;
    int ssst = -1;
    while (error > stop_at) {
        y = x;
        x = x + ((1 / step) * ssst);
        error = abs(y - x);
        step += 2;
        ssst *= -1;

    }
    return  x * 4;

}


// TASK 7
void draw_square(int size, bool left, bool right) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            if (i == 0) {
                std::cout << "#";
            }
            else if (i == size - 1) {
                 std::cout << "#";
            }
            else if (j == 0) {
                std::cout << "#";
            }
            else if (j == size - 1) {
                 std::cout << "#";
            }
            else if (i == j && right) {
                 std::cout << "#";
            }
            else if (j == size - i - 1 && left) {
                 std::cout << "#";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}



// TASK 8
int gcd(int x, int y) {
    if (y == 0)
        return x;
    return gcd(y, x % y);
}


int main() {

    // MENU
    bool menu = true;

    while (menu != false) {
        std::cout << "Welcome to Lab_1, please enter a number: \n";
        std::cout << "Task 1 --> 1 \n";
        std::cout << "Task 2 --> 2 \n";
        std::cout << "Task 3 --> 3 \n";
        std::cout << "Task 4 --> 4 \n";
        std::cout << "Task 5 --> 5 \n";
        std::cout << "Task 6 --> 6 \n";
        std::cout << "Task 7 --> 7 \n";
        std::cout << "Task 8 --> 8 \n";
        std::cout << "Exit --> x \n";

        char cases = 1;
        std::cin >> cases;

        switch (cases) {
        case '1': {
            // TASK 1
            unsigned int vectorSize = 0;

            std::cout << "Welcome to task 1. Please enter vector size: \n";
            std::cin >> vectorSize;

            std::vector<int> myVector(vectorSize);
            fill_progressive(myVector);

            std::cout << "Vector elements are: ";
            print_vector(myVector);
            std::cout << "\n";

            system("pause");
            system("CLS");
            break;
        }
        case '2': {
            // TASK 2
            double min = 0;
            double max = 0;
            std::vector<double> values = { -1.0, 100, 3.14, -999.9, 21.37 };


            std::cout << "Welcome to task 2. Min and max values of set (-1.0, 100, 3.14, -999.9, 21.37) are: \n";
            min_max(values, min, max);
            std::cout << "Min: " << min << ", " << "max: " << max << "\n";

            system("pause");
            system("CLS");
            break;
        }

        case '3': {
            //Task 3
            unsigned int num = 0;


            std::cout << "welcome to task 3. Please enter number to calculate factorial:  \n";
            std::cin >> num;
            std::cout << "Factorial of " << num << " (function without recursion) is: \n";
            uint64_t result = factorial(num);
            std::cout << result << std::endl;

            system("pause");
            system("CLS");
            break;
        }

        case '4': {
            //Task 4
            unsigned int num = 0;


            std::cout << "welcome to task 4. Please enter number to calculate factorial:  \n";
            std::cin >> num;
            std::cout << "Factorial of " << num << " (function with recursion) is: \n";
            uint64_t result = factorial_r(num);
            std::cout << result << std::endl;

            system("pause");
            system("CLS");
            break;
        }

        case '5': {
            //Task 5
            int prime_or_not_prime = 0;
            unsigned int num, down, up = 0;


            std::cout << "welcome to task 5. Please enter number to see if it's prime: \n";
            std::cin >> prime_or_not_prime;

            if (is_prime(prime_or_not_prime)) {
                std::cout << prime_or_not_prime << " is prime!" << std::endl;
            }
            else {
                std::cout << prime_or_not_prime << " is not prime!" << std::endl;
            }
            std::cout << "Please enter number which begins the interval: " << std::endl;
            std::cin >> down;
            std::cout << "Enter number which ends the interval: " << std::endl;
            std::cin >> up;
            std::cout << "Prime numbers between " << down << " and " << up << " are: " << std::endl;


            for (num = ceil(down); num <= floor(up); num++) {
                    if (is_prime(num) == true) {
                        std::cout << num << ", ";
                    }
            }

            std::cout << "\n";

                system("pause");
                system("CLS");
                break;
            }

        case '6': {
            //Task 6
            double stop_at = 0.0001;
            double pi_approx = pi_leibniz(stop_at);

            std::cout << "welcome to task 6. A PI approximation is: \n";
            std::cout << pi_approx << std::endl;
            std::cout << "Error: " << pi_approx - M_PI << std::endl;

            system("pause");
            system("CLS");
            break;
        }

        case '7': {
            //Task 7
            unsigned int size = 1;
            bool left = false;
            bool right = false;


            std::cout << "welcome to task 7. Please enter square size: \n";
            std::cin >> size;
            std::cout << "Plecse 1 or 0 for left diagonal:  \n";
            std::cin >> left;
            std::cout << "Plecse 1 or 0 for right diagonal:  \n";
            std::cin >> right;
            draw_square(size, left, right);

            system("pause");
            system("CLS");
            break;
        }

        case '8': {
            //Task 8
            double x, y = 0;


            std::cout << "welcome to task 8. Evaluate GCD of two numbers!  \n";
            std::cout << "Please enter first number: " << std::endl;
            std::cin >> x;
            std::cout << "Please enter second number: " << std::endl;
            std::cin >> y;
            std::cout << "GCD of " << x << " and " << y << " is: " <<  gcd(x, y) << std::endl;

            system("pause");
            system("CLS");
            break;
        }

        case 'x': {
            menu = false;
            break;
        }

        default: std::cout << "Invalid input. Please enter correct number (1-8) \n";
        }
        }

}