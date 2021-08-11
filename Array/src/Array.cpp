//============================================================================
// Name        : Array.cpp
// Author      : redcoder
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// vector function use in cpp  program ........m
#include <iostream>
#include<string>
#include <vector>
using namespace std;

int main() {
vector<int> numbers;

vector<int>last(numbers);

numbers.push_back(4);
numbers.push_back(5);
numbers.push_back(6);
numbers.push_back(7);
numbers.push_back(5);

cout << numbers.capacity();
cout << numbers.size();
//before pop..
cout << "Before pop" <<endl;
for (int i = 0 ; i <=last.size(); i++)
{
	cout<< last[i]<<endl;
}
 numbers.pop_back();

 cout << "After pop" <<endl;

 for (int i = 0 ; i <=numbers.size(); i++)
 {
 	cout<< numbers[i]<<endl;
 }
	return 0;
}
