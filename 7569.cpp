#include <bits/stdc++.h>

using namespace std;

int main()
{
    int M,N,H;
    cin >> M >>N >>H;
    vector<int> vec(M);
    vector< vector<int> > vec1(N);
    vector< vector < vector<int> > > tomato;

    int temp;
    int d[H][N][M];

    queue< pair< pair<int, int>, int> > q;
    for(int i=0; i<H; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                cin >>vec[k];
                d[i][j][k] = -1;
                if(vec[k]==1){
                    q.push({{k,j},i});
                    d[i][j][k] = 0;
                }
            }
            vec1[j]=vec;
        }
        tomato.push_back(vec1);
    }

    int dx[6] = {1, -1, 0, 0, 0, 0};
    int dy[6] = {0, 0, 1, -1, 0, 0};
    int dz[6] = {0, 0, 0, 0, 1, -1};


    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;
        q.pop();
        for(int i=0; i<6; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];
            if (0 <= nx && nx < M &&
                0 <= ny && ny < N &&
                0 <= nz && nz < H ){
                if (tomato[nz][ny][nx] == 0 && d[nz][ny][nx] == -1) {
                    d[nz][ny][nx] = d[z][y][x] + 1;
                    q.push({{nx, ny}, nz });
                }

            }
        }
    }
    int result = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            for (int k=0; k<M; k++)
                result = max(result,d[i][j][k]);
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            for (int k=0; k<M; k++)
                if (tomato[i][j][k] == 0 && d[i][j][k] == -1) {
                    result = -1;
            }
        }
    }
    cout << result;

    return 0;
}
