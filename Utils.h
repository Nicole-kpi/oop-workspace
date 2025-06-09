#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <ctime>
#include <cstdlib>
#include <cmath>

class Utils {
public:
    static std::pair<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        int x = rand() % gridWidth;
        int y = rand() % gridHeight;
        return std::make_pair(x, y);
    }

    static double calculateDistance(std::pair<int, int>& a, std::pair<int, int> b) {
    //计算两个位置之间的欧几里得距离
        int x1 = a.first;
        int y1 = a.second;
        int x2 = b.first;
        int y2 = b.second;
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};

#endif // UTILS_H