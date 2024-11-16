#include <iostream>
using namespace std;

int main()
{
	int salary = 45;
	int max_salary = 50;
	int hours;
	int overtime;
	cout << "Enter the number of hours worked";
	cin >> hours;
	cout << "Enter the number maximum salary";
	cin >> salary;
	int result_salary = (hours <= 40) ? salary * hours : salary * 40 + (hours - 40) * max_salary;
	cout << " the salary is: " << result_salary << endl;
	return 0;
}