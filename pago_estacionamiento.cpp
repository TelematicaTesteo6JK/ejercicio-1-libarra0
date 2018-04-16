#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
//Corrección para evitar más de 24 horas.
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>=11)
		cant = horas*7;
    if(horas >= 25)
        cant = horas*0;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    cout << "" << endl;
    // Agrega tus casos de prueba
    cout << "Table EP" << endl;
    cout << "Test data" << " " << "Expected result" << " " << "Actual result" << " " << "Pass/Fail" << endl;
    
    cout << "-2       " << " " << "0              "<<  " " <<pago_estacionamiento(-2); if(pago_estacionamiento(-2) == 0) {cout <<  "             Pass" << endl;} else {cout << "             Fail" << endl;} 
    cout << "6        " << " " << "54             "<<  " " <<pago_estacionamiento(6); if(pago_estacionamiento(6) == 54) {cout <<   "            Pass" << endl;} else {cout << "             Fail" << endl;} 
    cout << "10       " << " " << "90             "<<  " " <<pago_estacionamiento(10); if(pago_estacionamiento(10) == 90) {cout << "            Pass" << endl;} else {cout << "             Fail" << endl;} 
    cout << "12       " << " " << "84             "<<  " " <<pago_estacionamiento(12); if(pago_estacionamiento(12) == 84) {cout << "            Pass" << endl;} else {cout << "             Fail" << endl;} 
    cout << "25       " << " " << "0              "<<  " " <<pago_estacionamiento(25); if(pago_estacionamiento(25) == 0) {cout <<  "             Pass" << endl;} else {cout << "             Fail" << endl;} 
    
    cout << "" <<endl;
    
    cout << "Table BVA" << endl;
    cout << "Test data" << " " << "Expected result" << " " << "Actual result" << " " << "Pass/Fail" << endl;

    cout << "0        " << " " << "0              "<<  " " <<pago_estacionamiento(0); if(pago_estacionamiento(0) == 0) {cout <<  "             Pass" << endl;} else {cout << "             Fail" << endl;} 
    cout << "1        " << " " << "10             "<<  " " <<pago_estacionamiento(1); if(pago_estacionamiento(1) == 10) {cout << "            Pass" << endl;} else {cout << "             Fail" << endl;} 
    cout << "5        " << " " << "50             "<<  " " <<pago_estacionamiento(5); if(pago_estacionamiento(5) == 50) {cout << "            Pass" << endl;} else {cout << "             Fail" << endl;} 
    cout << "6        " << " " << "54             "<<  " " <<pago_estacionamiento(6); if(pago_estacionamiento(6) == 54) {cout << "            Pass" << endl;} else {cout << "             Fail" << endl;} 
    cout << "10       " << " " << "90             "<<  " " <<pago_estacionamiento(10); if(pago_estacionamiento(10) == 90) {cout << "            Pass" << endl;} else {cout << "             Fail" << endl;}
    cout << "11       " << " " << "77             "<<  " " <<pago_estacionamiento(11); if(pago_estacionamiento(11) == 77) {cout << "            Pass" << endl;} else {cout << "             Fail" << endl;}
    cout << "24       " << " " << "168            "<<  " " <<pago_estacionamiento(24); if(pago_estacionamiento(24) == 168) {cout << "           Pass" << endl;} else {cout << "             Fail" << endl;} 
    cout << "25       " << " " << "0              "<<  " " <<pago_estacionamiento(25); if(pago_estacionamiento(25) == 0) {cout << "             Pass" << endl;} else {cout << "             Fail" << endl;} 
}

int main()
{

    casos_de_prueba();

	return 0;
}