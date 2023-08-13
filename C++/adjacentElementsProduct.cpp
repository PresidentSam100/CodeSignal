int solution(vector<int> inputArray) {
    int n = inputArray.size();
    int ans = INT_MIN;
    for (int i = 0; i < n - 1; i++) {
        ans = max(inputArray[i] * inputArray[i + 1], ans);
    }
    return ans;
}
