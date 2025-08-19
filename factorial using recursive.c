int fact(int n)
{
    if (n <=1)   // base case
        return 1;
    else
        return n * fact(n - 1);  // recursive step
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %d\n", n, fact(n));

    return 0;
}
