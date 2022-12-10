#include "conejo.hpp"


Conejo::Conejo(string nombre, int edad, string tamanio, char especie, string personalidad){
    this->nombre = nombre;
    this->edad = edad;
    this->tamanio = tamanio;
    this->especie = especie;
    this->personalidad = personalidad;
    hambre = 0;
    higiene = 100;
    existe = true;
    escapado = false;
}


void Conejo::modificador_hambre_higiene(){
    if(hambre < 100 && hambre >= 0) hambre += modificador_alimento_personalidad();
    if(higiene <= 100 && higiene > 0) higiene -= modificador_higiene_personalidad();
}


void Conejo::alimentar(){
    hambre = 0;
    cout<<nombre<<" comio lechuga."<<endl;
}


void Conejo::higienizar(){
    higiene = 100;
}


void Conejo::mostrar(){
    cout<<" Nombre: "<<nombre
    <<" Edad: "<<edad
    <<" Tamanio: "<<tamanio
    <<" Especie: Conejo"
    <<" Personalidad: "<<personalidad<<endl
    <<" Nivel de Hambre: "<<hambre
    <<" Nivel de Higiene: "<<higiene<<endl;
}


void Conejo::mostrar(bool mostrar_adoptado){
    cout<<" Nombre: "<<nombre
    <<" Edad: "<<edad
    <<" Tamanio: "<<tamanio
    <<" Especie: Conejo"
    <<" Personalidad: "<<personalidad<<endl
    <<" Nivel de Hambre: "<<hambre
    <<" Nivel de Higiene: "<<higiene<<endl;
    if (escapado) cout<<" ESCAPADO"<<endl;
    else if (!existe) cout<<" ADOPTADO"<<endl;
    else cout<<endl;
}
