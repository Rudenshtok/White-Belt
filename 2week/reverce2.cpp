vector<int> Reversed(const vector<int>& v) {
    vector<int> t;
    for (int i = v.size() - 1; i >= 0; --i) {
        t.push_back(v[i]);
    }
    return t;
}