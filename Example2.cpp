#include"Example2.h"
#include<iostream>
using namespace std;

int main(){
  int a,b;
  a=10; b=20;
    cout << "関数呼び出し前のgvの値：" << gv << endl;
  int wa=sum(a,b);
  cout << "関数呼び出し後のgvの値：" << gv << endl;
  cout << "関数からの返り値waの値：" << wa << endl;
}
