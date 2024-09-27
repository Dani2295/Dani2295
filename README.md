// Descripcion:En este codigo podemos en practica lo visto en clase que para relacionar dos clases una llamada tarjeta y la otra llamada cliente.
//Autor:Daniela Zuno Aguilar

#include <iostream>
#include <Windows.h>
using namespace std;

class Tarjeta {
private:
    string numTarjeta;
    string banco;
    double limiteCredito;
    string fechaVecimiento;

public:
    Tarjeta(string numTar, string ban, double limCred, string facVeci) {

        numTarjeta = numTar;
        banco = ban;
        limiteCredito = limCred;
        fechaVecimiento = facVeci;
    }
    Tarjeta() {

    }

    string getnumTarjeta() {
        return numTarjeta;
    }
    
    string getBanco() {
        return banco;
    }

    double getlimiteCredito() {
        return limiteCredito;
    }

    string getfechaVecimiento() {
        return fechaVecimiento;
    }
};

class Cliente {
private:
    string numCliente;
    string nombre;
    int edad;
    string telefono;
    Tarjeta tc;

public:
    Cliente(string numCli, string nom, int eda, string tefo, Tarjeta tec) {

        numCliente = numCli;
        nombre = nom;
        edad = eda;
        telefono = tefo;
        tc = tec;
    }
    void printInfoCli() {
        cout << "El cliente " << nombre << " de " << edad << " años proporciono el telefono: " << telefono << " para la tarjeta: " << tc.getnumTarjeta() << " que cuenta con un limite de credito de $" << tc.getlimiteCredito() << " Con una fecha de vencimiento de " << tc.getfechaVecimiento() << " La cual es del banco " << tc.getBanco() << endl;

    }

};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    cout << "ASOCIACION ENTRE CLASES\n";
    cout << "TARJETA_CLIENTE\n\n";

    Tarjeta t1("456245215", "santander", 2000, "09/27");
    Cliente c1("1234545656", "Daniela",20, "5560434214", t1);

    c1.printInfoCli();

    system("pause");

}
