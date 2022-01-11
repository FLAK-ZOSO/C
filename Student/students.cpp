#include <iostream>
#include "D:\\C++\Documenti\Header file\student.hpp"
using namespace std;


const int n = 3;


int main() {
	Student class_[n];
	
	for (int i = 0; i < n; i++) {
		cout << "Insert student " << i << " informations:" << endl;
		cout << "Age: ";
		cin >> class_[i].age;
		cout << "Name: ";
		cin >> class_[i].name;
		cout << "Surname: ";
		cin >> class_[i].surname;		
	}
	
	return 0;
}
