#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> vec[10001];
vector<int> result_bfs;
vector<int> result_dfs;
bool visit[1001];

void bfs(int temp){
    queue<int> q; //큐 선언
    q.push(temp); //큐에 temp를 넣고, visit에 true로 변환
    visit[temp] = true;
    while(!q.empty()){
        int x = q.front(); //q의 맨앞원소 = x
        q.pop(); // 맨 앞 원소 pop (큐는 선입선출, 뒤에서 들어오고 앞에 게 나간다.
        result_bfs.push_back(x); //벡터 맨 뒤에 삽입

        for (int i = 0; i < vec[x].size(); i++){
            if(!visit[vec[x][i]]){ //방문하지 않은 곳만 탐색
                q.push(vec[x][i]);
                visit[vec[x][i]] = true;
            }
        }
    }
}

int main(){
    int u, v, N, M;
    int answer = 0;

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    for (int i = 1; i <= N; i++)
    {
        if (visit[i]) continue;
        bfs(i);
        answer++;
    }
    cout << answer;

    return 0;
}