PROGRAMS 01
#include<iostream>
using namespace std;
int main(){
  int a[5] = {10,20,30,40,50};
  for (int i = 0; i < 5; i++){
    cout << a[i] << " ";
  }
  return 0;
}


PROGRAMS 02
void program2(){
  int a[5] = {1,2,3,4,5};
  int sum = 0;
  for (int i = 0; i < 5; i++){
    sum = sum + a[i];
  }
  cout << "Sum = " << sum << endl;
}

