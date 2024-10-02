#include <iostream>
#include <vector>
using namespace std;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int n, m, x, y, result = 0 ;
bool campus[601][601] = { false }; //방문여부 체크
vector<vector<char>> v;

void dfs(int x, int y) {
    campus[x][y] = true;
    if (v[x][y] == 'P')
        result++;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && ny >= 0 && nx < n&&ny < m && !campus[nx][ny]) {
            if (v[nx][ny] != 'X'&&v[nx][ny]!='I')
                dfs(nx, ny);
        }
    }
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        char tmp;
        vector<char> c;
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            if (tmp == 'I') {
                x = i;
                y = j;
            }
            c.push_back(tmp);
        }
        v.push_back(c);
    }

    dfs(x, y);

    if (result == 0)
        cout << "TT" << '\n';
    else
        cout << result << '\n';

    return 0;
}
