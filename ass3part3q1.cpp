#include <iostream>
using namespace std;
int calculate2Low(int arr[], int size)
{
 int smallest, secondSmallest;
 if (arr[0] < arr[1])
 {
 smallest = arr[0];
 secondSmallest = arr[1];
 }
 else
 {
 smallest = arr[1];
 secondSmallest = arr[0];
 }
 for (int i = 2; i < size; i++)
 {
 if (arr[i] < smallest)
 {
 secondSmallest = smallest;
 smallest = arr[i];
 else if (arr[i] < secondSmallest)
 {
 secondSmallest = arr[i];
 }
 }
 return secondSmallest;
}
int calculate2High(int arr[], int size)
{
 int largest, secondLargest;
 if (arr[0] > arr[1])
 {
 largest = arr[0];
 secondLargest = arr[1];
 }
 else
 {
 largest = arr[1];
 secondLargest = arr[0];
 }
 for (int i = 2; i < size; i++)
 {
 if (arr[i] > largest)
 {
 secondLargest = largest;
 largest = arr[i];
 }
 else if (arr[i] > secondLargest)
 {
 secondLargest = arr[i];
 }
 }
 return secondLargest;
}
int main()
{int N;
 cout<<"enter size :";
 cin >> N;
 int scores[N];
 for (int i = 0; i < N; i++)
 {
 cin >> scores[i];
 }
 cout << "2nd Lowest Score = " << calculate2Low(scores, N) << endl;
 cout << "2nd Highest Score = " << calculate2High(scores, N) <<
endl;
 return 0;
}

