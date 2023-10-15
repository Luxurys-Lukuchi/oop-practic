#include <iostream> 
#include <math.h>
double calculateFallTime(double height) { 
      std::cout << "Модуль успешно подключен "; 
    const double g = 9.8; // Ускорение свободного падения на Земле (м/с^2) 
    double time = sqrt((2 * height) / g); // Формула времени падения 
 
    return time;
  
} 