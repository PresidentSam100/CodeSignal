bool solution(string inputString) {
    int n = inputString.size();
    for (int i = 0; i < n / 2; i++) {
        if (inputString[i] != inputString[n - i - 1]) {
            return false;
        }
    }
    return true;
}
