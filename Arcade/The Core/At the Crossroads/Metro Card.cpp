vector<int> solution(int lastNumberOfDays) {
    vector<int> vec;
    if (lastNumberOfDays == 28) {
        vec.push_back(31);
    }
    if (lastNumberOfDays == 30) {
        vec.push_back(31);
    }
    if (lastNumberOfDays == 31) {
        vec.push_back(28);
        vec.push_back(30);
        vec.push_back(31);
    }
    return vec;
}
