int reverse(int x) {
    long X = x;
    int rev = 0;

    if (X < 0)
        X = -X;

    while (X > 0) {
        int digit = X % 10;
        if (rev > (INT_MAX - digit) / 10)
            return 0;
        rev = rev * 10 + digit;
        X = X / 10;
    }

    if (x < 0)
        return -rev;

    return rev;
}
