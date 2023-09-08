int nearestValidPoint(int x, int y, int** points, int pointsSize, int* pointsColSize) {
    int best = INT_MAX, bestid = -1;
    for (int i = 0; i < pointsSize; ++i) {
        int px = points[i][0], py = points[i][1];
        if (x == px) {
            int dist = abs(y - py);
            if (dist < best) {
                best = dist;
                bestid = i;
            }
        }
        else if (y == py) {
            int dist = abs(x - px);
            if (dist < best) {
                best = dist;
                bestid = i;
            }
        }
    }
    return bestid;
}

/*作者：LeetCode-Solution
链接：https://leetcode.cn/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/solution/zhao-dao-zui-jin-de-you-xiang-tong-x-huo-x900/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。*/