int solution(int min1, int min2_10, int min11, int s) {
    int ans = 0;
    while (s > 0) {
        if (ans < 1) {
            s -= min1;
        } else if (ans < 10) {
            s -= min2_10;
        } else {
            s -= min11;
        }
        ans++;
    }
    if (s < 0)
        ans--;
    return ans;
}
