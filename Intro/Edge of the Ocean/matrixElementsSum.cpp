int solution(int[][] matrix) {
    boolean[] noZero = new boolean[matrix[0].length];
    int sum = 0;
    for (int r = 0; r < matrix.length; r++) {
        for (int c = 0; c < matrix[0].length; c++) {
            if (matrix[r][c] == 0) {
                noZero[c] = true;
            } else if (!noZero[c]) {
                sum += matrix[r][c];
            }
        }
    }
    return sum;
}
