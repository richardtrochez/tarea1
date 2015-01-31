// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
    return mi_pila.top();    //muestra el primer elemento de la pila
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{

    return mi_pila.size();  //funcion que muestra el tamano de la pila sin necesidad de recorerla.
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{

//recorre la la pila mientras no se encuentra vacia
    while(!mi_pila.empty())
    {


    if (str==mi_pila.top()) // aqui se establece una comparacion si se encuentra str en la cabeza de la pila
    return true;            // retorna true si la encuentra
    mi_pila.pop();          // saca el primer elemento de la pila para seguir buscando str
    }
    return false;           // retorna false si no encuentra str en la pila
}

//devuelve el elemento mayor de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    while(!mi_pila.empty())      //mientras la pila no esta vacia recorre la estructura
    {
    int aux=mi_pila.top();        // se crea un auxiliar que se iguala al primer dato de la pila con lo cual se preserva el dato una vez removido
    if (aux>mi_pila.top())        // se realiza el comparativo entre el primer dato y el almacenado en el auxiliar si es mayor lo muestra
    mi_pila.pop();                // saca el primer elemento de la pila
    return aux;                   // retorna el valor mas alto de la pila en un tipo de dato int
    }
    return -1;                    // default de la tarea retorna -1 al momento en que el auxiliar no es menor al top de la pila
}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
int aux=mi_pila.top();              // se inicializa el auxiliar en el area superior par que no tenga problemas con secuencia de la estructura

  while (!mi_pila.empty())          // de no estar vacia la estructura se recorre
  {
    if (mi_pila.top()<aux)           // comparativa de variables almacenas
    {
     aux=mi_pila.top();              // si el primer elemento es el menor se transforma en el auxilar el cual almacena datos que se van a elmimiar

    }
    else{                            // si no se cumple la condicion se saca el primer elemento de la pila porque se entiende que es mayor
    mi_pila.pop();
    }
  }
    return aux;                      // termina el ciclo y se muestra el valor mayor de la pila

}

//devuelve la cantidad de veces que se encuentra la letra 'a' minuscula en "mi_pila"
int contarLetraA(stack<char> mi_pila)
{
int contar=0;                                            // se inicia antes del ciclo para que la variable no presente dificultades dentro de la estructura
while(!mi_pila.empty())                                  // si la pila no esta vacia se recorre hasta terminar de encontrar las a
    {
    if('a'==mi_pila.top())                               // se evalua si la pila contiene a
    contar=contar+1;                                     // de ser asi el oontador umenta a +1
    mi_pila.pop();                                        // una vez utilizado el primer elemento de la pila se saca dando paso a otro dato
    }
return contar;                                           // al finalizar de realizar la busqueda de los datos que contengan a en toda la pila

}


int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
