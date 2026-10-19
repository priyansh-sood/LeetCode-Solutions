class MedianFinder {
public:
vector<int> v;

MedianFinder() {}

void addNum(int num) {
    v.push_back(num);
}

double findMedian() {
    sort(v.begin(), v.end());

    int n = v.size();

    if (n % 2 == 1) {
        return v[n / 2];
    }

    return ((double)v[n / 2] + v[(n / 2) - 1]) / 2.0;
}


};
