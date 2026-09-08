#include <stdio.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
  // TODO: check if n is prime using loop up to sqrt(n)
  int cnt = 0;
  int x;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      cnt++;
    }
  }
  if (cnt > 2) {
    x = 0;
    return x;
  } else {
    x = 1;
    return x;
  }
}

int main(void) {
  int n;

  printf("Enter an integer n (>= 2): ");
  scanf("%d", &n);

  while (n < 2) {
    printf("N value is too low! Enter an integer n (>= 2): ");
    scanf("%d", &n);
  }

  //   char result[] = "";
  int prime_tf = is_prime(n);
  // if (prime_tf == 1)
  // {
  //     result = "Prime";
  // }
  // else
  // {
  //     result = "Not Prime";
  // }
  printf("N value is ");
  printf("%d\n", prime_tf);

  // TODO: validate input and print all primes up to n

  return 0;
}
