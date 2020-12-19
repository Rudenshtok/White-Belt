void Reverse(vector<int>& numbers) {
    vector<int> t;
    t = numbers;
    for (int n = 0; n < numbers.size(); ++n) {
        numbers[n] = t[numbers.size() - 1 - n];
    }
}

