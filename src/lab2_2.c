#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    // TODO: compute factorial iteratively
    int x = n;
    for (int i = n-1; i >= 1; i--)
    {
        x = x * i;
    }
    return x; // placeholder
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    while (n < 1){
        printf("N is too low. What is n value?: ");
        scanf("%d", &n);
    }
    int factorial_sum = factorial(n); 
    printf("Factorial value is: ");
    printf("%d\n", factorial_sum);



    // TODO: validate input, call function, print result

    return 0;
}
