#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int check(const vector<string>& board, int x, int y) {
    // W로 시작한다고 가정한 체스판과 비교
    int repaint1 = 0, repaint2 = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char expected1 = ((i + j) % 2 == 0) ? 'W' : 'B';
            char expected2 = ((i + j) % 2 == 0) ? 'B' : 'W';
            if (board[x + i][y + j] != expected1) repaint1++;
            if (board[x + i][y + j] != expected2) repaint2++;
        }
    }
    return min(repaint1, repaint2);
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> board(N);
    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }

    int result = 64; // 최대 64칸을 다시 칠할 수 있음
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            result = min(result, check(board, i, j));
        }
    }

    cout << result << '\n';
    return 0;
}