int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    if (x < y) {
        return y - x;
    } else {
        return x - y;
    }
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    if (x < y) {
        return y / x;
    } else {
        return x / y;
    }
}

int exponent(int x, int y) {
    return x**y;
}
