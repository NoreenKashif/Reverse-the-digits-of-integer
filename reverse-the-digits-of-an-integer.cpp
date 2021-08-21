#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	int num1,num, reverse,n, d;
	cout << "How much digits your integer holds : ";
	cin >> n;
	cout << "Enter digit integer: ";
	cin >> num;
	num1 = num;
	reverse = 0;//accumulator
	while (num!=0)
	{
		d = num % 10;
		reverse = (reverse * 10) + d;
		num = num / 10;
	}
	cout << "\nReverse of " << num1 << " is : " << setw(n)<<setfill('0')<<reverse;
	cout << endl;
}
