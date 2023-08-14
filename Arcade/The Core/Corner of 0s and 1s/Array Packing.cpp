int solution(vector<int> a) {
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
        ans += a[i] << (i * 8);
    return ans;
}
