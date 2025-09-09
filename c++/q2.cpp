#include <iostream>
#include <iomanip> //entender essa biblioteca

int main(){
    double entrada1, entrada2;
    double media;
    
    std::cin >> entrada1;
    std::cin >> entrada2;

    media = (entrada1 * 3.5 + entrada2 * 7.5) / 11;
    
    std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << media << std::endl;
    //entender o fixed e o setprecision
    return 0;
}