#include <iostream>
#include <vector>

using namespace std;

int min_towns_to_win(int N, vector<int>& A, vector<int>& B) {
    int min_towns_needed = 0;
    int total_A_votes = 0, total_B_votes = 0;

    // Calculating total votes for each candidate
    for (int i = 0; i < N; ++i) {
        total_A_votes += A[i];
        total_B_votes += B[i];
    }

    // If candidate 2 already has more or equal votes, return 0
    if (total_A_votes <= total_B_votes) {
        return 0;
    }

    // Counting the number of towns where candidate 2 can potentially win
    for (int i = 0; i < N; ++i) {
        // If giving gifts in a town would make candidate 2 win that town
        if (2 * A[i] > B[i]) {
            min_towns_needed++;
        }
    }

    return min_towns_needed;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i] >> B[i];
    }
    
    int result = min_towns_to_win(N, A, B);
    
    cout << result << endl;
    
    return 0;
}
