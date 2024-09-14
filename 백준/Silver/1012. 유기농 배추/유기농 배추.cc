#include <iostream>
#include <queue>

using namespace std;

int T, M, N, K;
int dx[] = { -1, 1, 0, 0 }; // 좌, 우, 상, 하
int dy[] = { 0, 0, -1, 1 };

void BFS(int G[50][50], int y, int x) {
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));

    while (!q.empty()) {
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cur_x + dx[i];
            int ny = cur_y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (G[nx][ny] == 0) continue;
            if (G[nx][ny] == 1) {
                G[nx][ny] = 0;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

int main(void) {
    cin >> T;

    for (int t = 0; t < T; t++) { //각각의 테스트 케이스에 대해
        cin >> M >> N >> K;
        int G[50][50] = { 0 }; //배추 위치를 저장하는 배열
        //0으로 초기화 해둔다.
        for (int i = 0; i < K; i++) {
            int m, n;
            cin >> m >> n;
            G[n][m] = 1;
            //n, m 좌표에 1로 배추가 있음을 표시
        }

        int count = 0;
        for (int x = 0; x < M; x++) {
            for (int y = 0; y < N; y++) {
                if (G[y][x] == 0) continue;
                else {
                    BFS(G, y, x);
                    count++;
                }
            }
        }
        cout << count << '\n';
    }

    return 0;
}