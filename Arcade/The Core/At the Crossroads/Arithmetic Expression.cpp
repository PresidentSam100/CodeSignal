bool solution(int a, int b, int c) {
    if (a + b == c) {
        return true;
    }
    if (a - b == c) {
        return true;
    }
    if (a * b == c) {
        return true;
    }
    if (a == b * c) {
        return true;
    }
    return false;
}
