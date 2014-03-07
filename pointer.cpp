#include <iostream>
using namespace std;

int main(){
  int a[2][2] = {1,2,3,4};
  int (*p)[2] = a;
  for (int i=0; i<2; ++i){
    cout <<*p[i];
    cout<<endl;
  }
}
