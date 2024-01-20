#include<iostream>
using namespace std;
int main()
{
	int N = 0, num1 = 0, num2 = 1, num3 = 2;
	cout << "Enter your number N to check if it is a product of three consecutive numbers : " << endl;
	cin >> N;
	while (num1 * num2 * num3 <= N)
	{
		num1++;
		num2++;
		num3++;
	}
	num1--;
	num2--;
	num3--;
	if (num1 * num2 * num3 != N)
	{
		cout << "This number is not a product of a consecutive triplet" << endl;
	}
	else if (num1 * num2 * num3 == N)
	{
		cout << "This number is a product of a consecutive triplet, which is :" << endl;
		cout << num1 << " " << num2 << " " << num3 << endl;
	}
	system("pause");
	return 0;
}