#include <iostream>
using namespace std;

double FahrenheitKeCelcius(double);
float FahrenheitKeCelcius(float);
int FahrenheitKeCelcius(int);

int main() {
 cout << "Fahrenheit ke Celcius: " << FahrenheitKeCelcius(8) << endl;
 cout << "Fahrenheit ke Celcius: " << FahrenheitKeCelcius(8) << endl;
 cout << "Fahrenheit ke Celcius " << FahrenheitKeCelcius(8) << endl;
 return 0;
}

double FahrenheitKeCelcius(double x){
    double y = (x - 32.0) * (5.0 / 9.0);
 return ( y);
}

float FahrenheitKeCelcius(float x){
   float y = (x - 32.0) * (5.0 / 9.0);
 return (y);
}
int FahrenheitKeCelcius(int x){
    int y = (x - 32.0) * (5.0 / 9.0);
 return (y);
}
