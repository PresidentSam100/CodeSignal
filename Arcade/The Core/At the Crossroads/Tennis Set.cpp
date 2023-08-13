bool solution(int score1, int score2) {
    if (max(score1, score2) == 6) {
        return min(score1, score2) < 5;
    } else {
        return max(score1, score2) == 7 && (min(score1, score2) == 6 || min(score1, score2) == 5);
    }
}
