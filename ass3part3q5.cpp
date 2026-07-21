#include<iostream>
using namespace std;
int countvowels(char name[]){
int count =0;
for(int i=0;name[i] != '\0';i++){
if(name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'
|| name[i]=='u'){
count++;
}
}
return count;
}
int main(){
char name[100];
cout<<"enter your name :";
 cin >> name;
 cout << "Total Vowels: " << countvowels(name);
 return 0;
}
