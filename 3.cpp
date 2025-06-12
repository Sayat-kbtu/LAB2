#include <iostream> 
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    if(x % 2==1 && y % 2==0){
        cout << "One even and one odd.";
    } else if(x % 2==0 && y % 2==1){
        cout << "One even and one odd.";
    }else if(x % 2==0 && y % 2==0){
        cout << "Both even.";
    }else{
        cout<<"Both odd.";
    }
return 0;
}   