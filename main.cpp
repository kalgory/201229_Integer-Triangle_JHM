#include <iostream>
#include <vector>


using namespace std;

vector<vector<int>> triangle_vec_vec;
vector<vector<int>> memo_vec_vec;
int triangle_height;

int calculate(int x, int y) {
  if (y == triangle_height - 1) {
    return triangle_vec_vec[y][x];
  }
  if (memo_vec_vec[y][x] != 0) {
    return memo_vec_vec[y][x];
  }
  memo_vec_vec[y][x] = triangle_vec_vec[y][x] + max(calculate(x, y + 1), calculate(x + 1, y + 1));
  return memo_vec_vec[y][x];
}

int solution(vector<vector<int>> _triangle_vec_vec) {
  triangle_height = _triangle_vec_vec.size();
  triangle_vec_vec = move(_triangle_vec_vec);
  memo_vec_vec.resize(triangle_height, vector<int>(triangle_height, 0));

  return calculate(0, 0);;
}

int main() {
  cout << solution({{7}, {3, 8}, {8, 1, 0}, {2, 7, 4, 4}, {4, 5, 2, 6, 5}}) << endl;
  return 0;
}
