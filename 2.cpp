#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    float d;
    cin >> a >> b >> c >>d;
    int max_el = max(a,b);
    int max_el_2 = max(max_el, c);
    int min_el = min(a, b);
    int min_el_2 = min(min_el, c);
    int kolem = pow(round(d), 3);
    int dd = pow(a, 2) + pow(b, 2) +pow(c, 2);
    int n = sqrt(dd);
 
 
 
 
    cout << "The biggest number: " << max_el_2 << endl;
    cout << "The lower number: " << min_el_2 << endl;
    cout << "Volume: " << kolem << endl;
    cout << "Module of the vector: " << n << endl;
    return 0;
 
 
}