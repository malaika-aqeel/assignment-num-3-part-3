#include <iostream>
using namespace std;
int main()
{
 char arr[5];
 char temp;
 cout << "Enter 5 letters: ";
 for (int i = 0; i < 5; i++)
 {
 	cin >> arr[i];
 }

 for (int i = 0; i < 4; i++)
 {
 for (int j = 0; j < 4 - i; j++)
 {
 if (arr[j] > arr[j + 1])
 {
 temp = arr[j];
 arr[j] = arr[j + 1];
 arr[j + 1] = temp;
 }
 }
 }

 cout << "Sorted Letters: ";
 for (int i = 0; i < 5; i++)
 cout << arr[i] << " ";
 }
 return 0;
}
