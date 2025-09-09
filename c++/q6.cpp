#include <iostream>
#include <iomanip>
 
using namespace std;
 
void q2() {
 float A, B;
 double MEDIA;

 cin >> A;
 cin >> B;
 MEDIA = (A * 3.5 + B * 7.5) / 11;

 cout << fixed << setprecision(5) << "MEDIA = " << MEDIA << endl;
 
}

int main(){
    q2()
    return 0;
}