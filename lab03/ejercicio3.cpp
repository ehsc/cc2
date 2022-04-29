/*3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de
una persona y por medio de una función calcule su edad en años, meses y días.*/

#include <iostream> 

void calcularEdad(int year1,int month1,int day1,int year2,int month2,int day2){
    int day,month;

    if (day1 < day2){ 

        day1 = day1 + 30; 
        month1 = month1 - 1; 
        day = day1 - day2;
    }
    else 
        day = day1 - day2; 
 
    if( month1 < month2){  
        month1 = month1 + 12;
        year1 = year1 - 1;
        month = month1 - month2;
    }
    else 
        month = month1 - month2;
 
    std::cout << "\nUsted tiene " << year1 - year2 << " años, " << month << " meses y " << day << " dias\n";
}

int main (){
    int year1, month1, day1, year2, month2, day2;

    std::cout << "Año actual: "; std::cin >> year1;
    std::cout << "Mes actual: "; std::cin >> month1;
    std::cout << "Dia actual: "; std::cin >> day1;
 
    std::cout << "\nAño de Nacimiento: ";  std::cin >> year2;
    std::cout << "Mes de Nacimiento: ";  std::cin >> month2;
    std::cout << "Dia de Nacimiento: ";  std::cin >> day2;
 
    calcularEdad(year1,month1,day1,year2,month2,day2);
}