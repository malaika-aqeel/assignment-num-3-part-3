#include<iostream>
#include <iomanip>
using namespace std;
double celsiusToFahrenheit(double celsius ){
return (celsius * 9 / 5) + 32;
}
int main(){
double celsius;
cout<<"enter temperature in celsius";
cin>>celsius;
cout << fixed << setprecision(1) <<
celsiusToFahrenheit(celsius);
 return 0;
}
