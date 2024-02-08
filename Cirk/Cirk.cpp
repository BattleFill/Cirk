#include <iostream>
using namespace std;
double Kryg(double rad) {
    return 3.14 * rad * rad;
}
double Kolco(double maxrad, double minrad) {
    double maxarea = Kryg(maxrad);
    double minarea = Kryg(minrad);
    if (maxarea > minarea) {
        return maxarea - minarea;
    } else {
        return minarea - maxarea;
    }
}
int main() {
    setlocale(LC_ALL, "RUS");
    double minrad, maxrad;
    cout << "Введите первый радус: ";
    cin >> minrad;
    cout << "Введите второй радиус: ";
    cin >> maxrad;
    double CArea = Kolco(maxrad, minrad);
    cout << "Площадь кольца приблизительно равна " << CArea << endl;
    return 0;
}