#include <iostream>
#include <string>
#include "exprtk.hpp"

using namespace std;

template <class T>
T min_v(T a, T b = 0){
  return a < b ? a : b;
}

template <class T>
T max_v(T a, T b = 0){
  return b < a ? a : b;
}

void init(string& op, int& min, int& max){

  cout << "Hello! Please type one of the options below and hit ENTER" << endl << "/\n*\n+\n-\n >> ";
  cin >> op;

  cout << "Enter your min sum > ";
  cin >> min;

  while(max<=min){
    cout << "Enter your max sum > ";
    cin >> max;
  }
}

int calc(string op, int min, int max){
  srand(time(NULL));
  int r, r2;
  while(true){
    r = (rand() % max) + min + 1;
    r2 = (rand() % max) + min + 1;

    string ans_un = min_v<int>(r, r2) << op << max_v<int>(r, r2);
    cout << ans_un << endl;
    cout << te_compile(ans_un, 0);
    break;
  }
}

int main(){
  string op = "*";
  int min = 0;
  int max = 0;
  init(op, min, max);

  calc(op, min, max);
}
