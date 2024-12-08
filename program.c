int fib(int n)  // sum 함수 대신 fib 함수로 정의
{
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
}

int main()
{
  printf("Hello world!\n");
  printf("%d\n", fib(5));  // fib 함수 호출
  return 0;
}

