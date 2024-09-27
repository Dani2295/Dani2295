// Descripcion:En esta practica pusimos en practica lo visto en la clase sobre las clases y objetos donde en este codigo creamos 2 objetos los cuales se muestran en pantalla sus caracteristicas.
// Autor: Daniela Zuno Aguilar

#include <iostream>
using namespace std; 

class Automovil {

private:
    
    string marca;
    int KilMetraje;
    int litGasolina;

public:

    string getMarca() {
        return marca;
    }
    void setMarca(string marc) {
        marca = marc;
    }

    int getKilMetraje() {
        return KilMetraje;
    }

    int getLitGasolina() {
        return litGasolina;
    }
    
    void maneja(int dist) {
        KilMetraje = KilMetraje + dist;
    }

    void cargaGasolina(int lit) {
        if (lit <= 40) {
            litGasolina = litGasolina + lit;
        }
        else{
            cout << "Limite excedido\n";
        }   
    }
    Automovil(string marcaAuto) {
        marca = marcaAuto;
        KilMetraje = 0;
        litGasolina = 10;
    }
    
};
    

int main()
{
    cout << "\t\tOBJETOS DE AUTOMOVILES:\n";
    cout << "Estado de los objetos\n";

    Automovil a1 = Automovil("Nissan");
    Automovil a2 = Automovil("Ferrari");

    a1.maneja(100);
    a1.cargaGasolina(30);
    a2.maneja(200);
    a2.cargaGasolina(40);

    cout << a1.getMarca() << ", kilometraje: " << a1.getKilMetraje() << "km Gasolina: " << a1.getLitGasolina() << "litros" << endl;
    cout << a2.getMarca() << ", kilometraje: " << a2.getKilMetraje() << "km Gasolina: " << a2.getLitGasolina() << "litros" << endl;

    system("pause");
 }
