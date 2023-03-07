#include <iostream>
#include <fstream>
using namespace std;

struct tEmpleado{
    char dni[9];
    char nombre[20];
    int horasTrabajadas;
    int precioHora;
};
void EmpleadosNoAndaluces(){
    tEmpleado empl; ifstream canalE; canalE.open("Empleados.txt",ios::in);
    if(canalE){
        canalE>>empl.dni;
        while(!canalE.eof()){
            canalE>>empl.nombre; canalE>>empl.horasTrabajadas; canalE>>empl.precioHora;
            if(empl.horasTrabajadas>40){
                canalE>>empl.nombre; canalE>>empl.horasTrabajadas; canalE>>empl.precioHora;
                cout<<"DNI: "<<empl.dni<< " Nombre: "<<empl.nombre<<" Horas trabajadas:"<<empl.horasTrabajadas<< " Precio hora: "<<empl.precioHora<<endl;
            }
            canalE>>empl.dni;
        }
        canalE.close();
    }


}

void EmplDni(bool perreo, char DNI[9]){
    perreo= false;
    tEmpleado empl; ifstream canalE; canalE.open("Empleados.txt",ios::in);
    if(canalE){
        canalE>>empl.dni;
        while(!canalE.eof()){
            canalE>>empl.nombre; canalE>>empl.horasTrabajadas; canalE>>empl.precioHora;
            if(empl.dni==DNI){
                canalE>>empl.nombre; canalE>>empl.horasTrabajadas; canalE>>empl.precioHora;
                cout<<"DNI: "<<empl.dni<< " Nombre: "<<empl.nombre<<" Horas trabajadas:"<<empl.horasTrabajadas<< " Precio hora: "<<empl.precioHora<<endl;
                perreo= true;
            }
            canalE>>empl.dni;
        }
        canalE.close();
    }
}

void AnyadirEmpl(char dn[9],char nom[20],int horasTrab,int precHora){
    ofstream canalE; canalE.open("Empleados.txt",ios::app);
    canalE << dn << nom << horasTrab << precHora << endl;

}