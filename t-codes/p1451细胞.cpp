#include <iostream>

using namespace std;
const int MAXN = 105;
int m, n;
char field[MAXN][MAXN];
int color[MAXN][MAXN];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int colorCount;

void floodFill(int x, int y) {
    
    for (int k = 0; k < 4; ++k) {
        int xx = x + dx[k];
        int yy = y + dy[k];
        if (xx > 0 && xx <= m && yy > 0 && yy <= n) {
            if(color[xx][yy] == 0 && field[xx][yy]>='1' && field[xx][yy]<='9'){
                color[xx][yy] = colorCount;floodFill(xx, yy);
            }
        }
    }
}

int main() {
    cin >> m >> n;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> field[i][j];
        }
    }
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (field[i][j] >='1' && field[i][j]<='9' && color[i][j] == 0) {
                colorCount++;
                color[i][j] =colorCount; 
                floodFill(i, j);
            }
        }
    }
    cout << colorCount << endl;
    return 0;
}
