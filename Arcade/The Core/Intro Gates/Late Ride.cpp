int solution(int n) {
    int hour = n / 60;
    int min = n % 60;
    int ans = hour % 10 + hour / 10 + min % 10 + min / 10;
    return ans;
}
