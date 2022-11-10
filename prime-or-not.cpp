#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
void checkPrime(int number) {

	int n = number / 2;
	bool check = false;
	for (int i = 2; i <= n; i++)
	{
		if (number%i == 0)
		{
			cout << "The number not is a prime number" << endl;
			check = true;
			break;
		
		}
	}
	if (check == false)
	{
		cout << "This is  a prime number" << endl;
	}
}
int main() {

	//this program is going to determine if a number is a prime number;
	int number;
	cout << "Please enter a number or a negative number to terminate" << endl;
	cin >> number;
	while (number > 0)
	{

		checkPrime(number);
		cout << "Please enter a number or a negative number to terminate" << endl;
		cin >> number;
	}

	cout << "you exited the program";
	system("pause");
	return 0;

}

