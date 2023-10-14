bool solution(vector<int> sequence) {
    int bad = 0;
    for (int i = 1; i < sequence.size(); i++) {
        if (sequence[i - 1] >= sequence[i]) {
            bad++;
            if (i >= 2 && i < sequence.size() - 1 && sequence[i - 2] >= sequence[i] && sequence[i - 1] >= sequence[i + 1]) {
                return false;
            }
        }
    }
    return bad <= 1;
}
