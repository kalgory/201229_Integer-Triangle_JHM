#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> triangle_vec_vec;
vector<vector<int>> memo_vec_vec;
int height;

int calculate() {
  return 0;
}

int solution(vector<vector<int>> _triangle_vec_vec) {
  height = _triangle_vec_vec.size();
  triangle_vec_vec = move(_triangle_vec_vec);
  memo_vec_vec.resize(height, vector<int>(height, 0));

  int answer = 0;
  return answer;
}

int main() {
  cout << solution({{7}, {3, 8}, {8, 1, 0}, {2, 7, 4, 4}, {4, 5, 2, 6, 5}}) << endl;
  return 0;
}
