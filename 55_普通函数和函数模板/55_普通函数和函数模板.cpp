//
// Created by Administrator on 2020/12/2.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//1. 如果普通函数和函数模板都可以调用，则优先调用普通函数
//2. 可以通过空模板参数列表 强制调用函数模板
//3. 函数模板可以发生函数重载
//4. 如果函数模板可以产生更好的匹配，优先调用函数模板
void myPrint(int a, int b) {
  cout << "调用普通函数" << endl;
}

template<class T>
void myPrint(T a, T b) {
  cout << "调用函数模板" << endl;
}

template<class T>
void myPrint(T a, T b, T c) {
  cout << "调用函数模板" << endl;
}

void test01() {
  int a = 10;
  int b = 20;
  // 调用普通函数
  myPrint(a, b);
  // 通过空模板参数列表，强制调用函数模板
  myPrint<>(a, b);
  // 调用重载的函数模板
  myPrint(a, b, 100);
  // 函数模板产生更好的匹配 优先调用函数模板
  char c1 = 'a';
  char c2 = 'b';
  myPrint(c1, c2);
}

int main() {
  test01();
  system("pause");
  return 0;
}