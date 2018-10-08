#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout <<setprecision(4) <<fixed;
    double pi = 3.14159;
    double raio;
    cin >> raio;
    double area = pi * raio * raio;
    cout <<"A=";
    cout <<area <<endl;

    return 0;
}
