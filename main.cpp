#include<iostream>
#include <string>

using namespace std;

void swap1(int num1, int num2)  // Pass the value by Argument------> NOT CHANGE !
{
	int  temp = num1;
	num1 = num2;
	num2 = temp;
}

void swap2(int &num1, int &num2)  // Pass the value by Argument------> NOT CHANGE !
{
	int  temp = num1;
	num1 = num2;
	num2 = temp;
}
void swap3(int * pNum1, int *pNum2)  // Pass the value by Argument------> NOT CHANGE !
{
	int * temp = pNum1;
	pNum1 = pNum2;
	pNum2 = temp;
}
void swap4(int *&pNum1, int* &pNum2)    //// Pass the value by Reference ------> CHANGE !
{
	int *temp = pNum1;
	pNum1 = pNum2;
	pNum2 = temp;
}

int main()
{
	int num1 = 1;
	int num2 = 5;

   swap1(num1, num2);
   cout << num1 << "  " << num2 << endl;

	swap2(num1, num2);
	cout << num1 << "  " << num2 << endl;

	int *pNum1 = &num1;
	int *pNum2 = &num2;

	swap3(pNum1, pNum2);   // Swap Pointer by ARGUMENT - Not Change !

	cout << "Pointer address x :" << pNum1 << " Pointer address y : " << pNum2 << endl;  // Check if Pointer of x-y Swap or not
	cout << "The addres x : " << pNum1 << " The addres y : " << pNum2 << endl;
	cout <<" Value  x  after swap : "<< num1 << "value y after swap : " << num2 << endl;

	swap4(pNum1, pNum2); // Swap Pointer by REFERENCE - Change !
	cout << "The addres x : " << pNum1 << " The addres y : " << pNum2 << endl;

	return 0;
}