#include <iostream>
using namespace std;
int main() { 
/*int a, b;
cin >> a >> b;
if (a==b){
    cout << "a jest rowne b" <<endl;}                               //zad 1
else if (a>b){ cout << "a jest wieksze od b" <<endl;}
else if (a<b){ cout << "a jest mniejsze od b" << endl;}

int a1, b1;
cin >> a1 >> b1;
if (a1==b1){
    cout << "a jest rowne b" <<endl;}                               //zad 2
else if (a1>b1){ cout << "a jest wieksze od b" <<endl;}
else { cout << "a jest mniejsze od b" << endl;}

double r;
cin >> r;
if (r<0 || r>1){
    cout << "nieprawidlowa wartosc" << endl;
}
else if (r>=0.7 && r<=1) {
    cout << "bardzo silna korelacja dodatnia" << endl;}         //zad 3

else if (r>=0.5) {
    cout << "silna korelacja dodatnia" << endl;
}
else if (r>=0.3) {
    cout << "umiarkowana korelacja dodatnia" << endl;
    }
else if (r>=0.2) {
    cout << "slaba korelacja" << endl;
}
else { 
    cout << "nie ma takiej korelacji" <<endl;
}
float liczba1, liczba2, wynik;
char znak;
cout << "Wpisz dwie liczby zmienno przecinkowe, a nastepnie znak (+, -, *, /)";
cin >> liczba1 >> liczba2 >> znak;
if (znak == '+'){
wynik = liczba1 + liczba2;
cout << wynik;
}
else if (znak == '*'){
wynik = liczba1 * liczba2;                                          //zad 4
cout << wynik;
}
if (liczba2 ==0)
{cout << "nie mozna dzielic przez 0!!!!!!" << endl;
}
else if (znak == '/'){
wynik = liczba1 / liczba2;
cout << wynik;}

else if (znak == '-'){
wynik = liczba1 - liczba2;
cout << wynik;
}*/

for (int i = 0; i < 10; i++) {
      if (i == 5)                               
         continue; 

      cout << "Iteracja nr " << i << endl;                      //zad5
   }

   int i1=0;
while (0) {i1++; cout << i1 <<endl;
}

float liczba1, liczba2, wynik;
char znak;
cout << "Wpisz dwie liczby zmienno przecinkowe, a nastepnie znak (+, -, *, /)";
cin >> liczba1 >> liczba2 >> znak;
if (znak == '+'){
wynik = liczba1 + liczba2;
cout << wynik;
}
else if (znak == '*'){
wynik = liczba1 * liczba2;                                          //zad 6
cout << wynik;
}
if (liczba2 ==0)
{cout << "nie mozna dzielic przez 0!!!!!!" << endl;
}
else if (znak == '/'){
wynik = liczba1 / liczba2;
cout << wynik;}

else if (znak == '-'){
wynik = liczba1 - liczba2;
cout << wynik;


}






