#include <iostream>
using namespace std;

int main() {
  int z;
  cin >> z;
  if(z > 4 ){
    cout << "There are only 4 months left!!";
  } else {
        switch (z) {
        case 1:
            cout << "Winter";
            break;
        case 2:
            cout << "Spring";
            break;
        case 3:
            cout << "Summer";
            break;
        case 4:
            cout << "Autumn";
            break;
        }
    }
  return 0;
}