#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mergeAndCount(vector<int>& A, int left, int mid, int right) {
    vector<int> leftPart(A.begin() + left, A.begin() + mid + 1);
    vector<int> rightPart(A.begin() + mid + 1, A.begin() + right + 1);
    
    int i = 0, j = 0, cnt = 0;
    int leftSize = leftPart.size(), rightSize = rightPart.size();

    while (i < leftSize && j < rightSize) {
        if (rightPart[j] >= 2 * leftPart[i]) {
            cnt++;
            i++;
        }
        j++;
    }

    return cnt;
}

int divideAndConquer(vector<int>& A, int left, int right) {
    if (left >= right) return 0;

    int mid = (left + right) / 2;
    int leftCount = divideAndConquer(A, left, mid);
    int rightCount = divideAndConquer(A, mid + 1, right);
    int mergedCount = mergeAndCount(A, left, mid, right);

    return leftCount + rightCount + mergedCount;
}

int minKangaroosVisible(vector<int>& A) {
    sort(A.begin(), A.end());
    int countPairs = divideAndConquer(A, 0, A.size() - 1);
    return A.size() - countPairs;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << minKangaroosVisible(A) << endl;
    return 0;
}
