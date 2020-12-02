//
// Created by Administrator on 2020/12/2.
//
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void swapInt(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void swapDouble(double &a, double &b) {
  double temp = a;
  a = b;
  b = temp;
}

//函数模板
template<typename T>
//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错
void mySwap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

void test01() {
  int a = 10;
  int b = 20;
  swapInt(a, b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  double c = 1.1;
  double d = 2.2;
  swapDouble(c, d);
  cout << "c=" << c << endl;
  cout << "d=" << d << endl;
  // 使用函数模板的两种方式
  // 1. 自动类型推导
  mySwap(a, b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  // 2. 显式指定类型
  mySwap<int>(a, b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
}

int main() {
  test01();
  system("pause");
  return 0;
}
