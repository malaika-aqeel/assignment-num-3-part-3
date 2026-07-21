#include<iostream>
#include <iomanip>
using namespace std;
int calculateSum(int array[], int size)
{
 int sum = 0;
 for (int i = 0; i < size; i++)
 {
 sum = sum + array[i];
 }
 return sum;
}
int main()
{
 int N;
 cout<<"enter size :";
 cin >> N;
 int scores[100];
 for (int i = 0; i < N; i++)
 {
 cin >> scores[i];
 }
 cout << fixed << setprecision(2) << “total sum
is”<<calculateSum(scores, N);
 return 0;
}
