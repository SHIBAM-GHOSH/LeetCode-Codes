class Solution {
public:
    int trapRainWater(vector<vector<int>>& hm) {
        int n = hm.size();
        int m = hm[0].size();
        if (n < 3 || m < 3) return 0;

        priority_queue<pair<int, pair<int,int>>,
                       vector<pair<int, pair<int,int>>>,
                       greater<>> pq;  // min-heap: {height, {row, col}}

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        // Push all boundary cells
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                    pq.push({hm[i][j], {i, j}});
                    visited[i][j] = true;
                }
            }
        }

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        int sum = 0;

        while (!pq.empty()) {
            auto [height, coord] = pq.top();
            pq.pop();
            int r = coord.first;
            int c = coord.second;

            for (int d = 0; d < 4; d++) {
                int nr = r + dr[d];
                int nc = c + dc[d];
                if (nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
                if (visited[nr][nc]) continue;

                visited[nr][nc] = true;
                // If neighbor is lower than current boundary, it traps water
                sum += max(0, height - hm[nr][nc]);
                // Push neighbor with effective height = max(its height, boundary height)
                pq.push({max(hm[nr][nc], height), {nr, nc}});
            }
        }

        return sum;
    }
};
