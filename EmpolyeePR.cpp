#include <iostream>
using namespace std;

struct Employee {
	char name[20];
	float salary;
};

float MaxSalary(Employee** Matrix, int r, int c) {

	float maxsalary = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (Matrix[i][j].salary > maxsalary) {
				maxsalary = Matrix[i][j].salary;

			}
		}
	}
	return maxsalary;
}
int main() {

	

	int row, column;
	cout << "Enter number of rows then number of columns : " << endl;
	cin >> row >> column;

	Employee** emp = new Employee * [row];
	for (int i = 0; i < row; i++) {
		emp[i] = new Employee[column];
	}
	
	int count = 1;
	cout << "Enter name of Employees then his/her Salary : " << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << count << " : ";
			cin >> emp[i][j].name >> emp[i][j].salary;
			count++;
		}
	}



	cout << "Max Salary of Employees : " << MaxSalary(emp, row, column) << endl;

	for (int i = 0; i < row; i++) {
		delete[] emp[i];
	}
	delete[] emp;
	emp = nullptr;




}