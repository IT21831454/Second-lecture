#include <iostream>
using namespace std;

int main(void) {
  string name[3];

  for (int n = 0; n < 3; n++) {
    cout << "Enter name " << n + 1 << " : ";
    cin >> name[n];
  }

  for (int n = 0; n < 3; n++) {
    cout << name[n]<<"\t";
    cout<<endl;
  }

  return 0;
}
