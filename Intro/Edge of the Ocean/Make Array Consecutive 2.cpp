int solution(vector<int> statues) {
    int min = INT_MAX;
    int max = INT_MIN;
    int n = statues.size();
    for (int i = 0; i < n; i++) {
        max = std::max(statues[i], max);
        min = std::min(statues[i], min);
    }
    return max - min - n + 1;
}
