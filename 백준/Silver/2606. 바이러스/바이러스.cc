#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int count=0;
int N, Pair;
vector<int> vec[101];
bool visit[101];


void bfs(int temp){
    queue<int> q; //큐 선언
    q.push(temp); //큐에 temp를 넣고, visit에 true로 변환
    visit[temp] = true;
    while(!q.empty()){
        int x = q.front(); //q의 맨앞원소 = x
        q.pop(); // 맨 앞 원소 pop (큐는 선입선출, 뒤에서 들어오고 앞에 게 나간다.

        for (int i = 0; i < vec[x].size(); i++){
            if(!visit[vec[x][i]]){ //방문하지 않은 곳만 탐색
                q.push(vec[x][i]);
                visit[vec[x][i]] = true;
                count++;
            }
        }
    }
}

int main(){
    cin>>N>>Pair;

    for(int i=0;i<Pair;i++){
        int start, end;
        cin>>start>>end;
        vec[start].push_back(end);
        vec[end].push_back(start);
    }
    bfs(1);
    cout<<count<<'\n';
    return 0;
}

