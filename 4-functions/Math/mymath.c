/* This is the library file where we put the function definitions.
  It is destined to be compiled into an object file,
  which can then be shared with people who need to use those functions*/
int power(int b, int e) {
  int r = 1;
  for (int counter = 0; counter < e; counter++) {
    r *= b;
  }
  return r;
}

int gcd(int n1, int n2) {
  int min;
  if (n1 < n2)
    min = n1;
  else
    min = n2;
  for (min; min >= 1; min--) {
    if (n1 % min == 0 && n2 % min == 0) return min;
  }
}

int lcm(int n1, int n2) {
  int max;
  if (n1 > n2)
    max = n1;
  else
    max = n2;
  for (max; max <= n1 * n2; max++) {
    if (max % n1 == 0 && max % n2 == 0) return max;
  }
}

int lcm2(int n1, int n2) { return (n1 * n2) / gcd(n1, n2); }

int fact(int N) {
  int result = 1;
  for (N; N >= 1; N--) {
    result *= N;
  }
  return result;
}

int factR(int N) {
  if (N == 1)
    return 1;
  else
    return N * factR(N - 1);
}