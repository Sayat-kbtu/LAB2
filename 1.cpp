#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int pos = 0;
    int neg = 0;
    int neu = 0;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0)
            continue;
        cout << "Positive: " << arr[i] << endl; 
    }   
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            continue;
        cout << "Negative: " << arr[i] << endl;
    }
   
    
    return 0;

}
