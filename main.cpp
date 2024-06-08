#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   vec.push_back(cnt);
}

int main() {
   cin >> N >> M;
   func(0);
}
