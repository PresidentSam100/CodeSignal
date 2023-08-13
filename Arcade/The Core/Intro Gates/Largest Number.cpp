int solution(int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans *= 10;
        ans += 9;
    }
    return ans;
}
