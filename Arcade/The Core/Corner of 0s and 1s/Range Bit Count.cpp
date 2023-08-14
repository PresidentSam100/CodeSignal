int solution(int a, int b) {
    int bits = 0;
    for (unsigned int i = a; i <= b; i++) {
        unsigned int n = i;
        while (n != 0) {
            bits += n & 1;
            n >>= 1;
        }
    }
    return bits;
}
