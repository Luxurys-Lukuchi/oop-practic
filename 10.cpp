#include <iostream> 
#include <cmath> 
#include "10.h" 
//#include "log.cpp" 
//opencomitwhjh
//hskghsgh

 

int main() { 
    double height; 
 
    std::cout << "Введите высоту (в метрах): "; 
    std::cin >> height; 
 
    double fallTime = calculateFallTime(height); 
 
    std::cout << "Время падения камня: " << fallTime << " секунд" << std::endl; 
 
    return 0; 
} 