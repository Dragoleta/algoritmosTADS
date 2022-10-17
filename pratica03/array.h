#include <iostream>
#include "functions.h"

using namespace std;

template <class T>
class Array
{
private:
    int size; // size do Array
    T *items; // items do Array
public:
    Array(int tam)
    {
        // instanciar o array de items com new (pratica 1) e setar size;
    }
    virtual ~Array()
    {
        // destruir o array de items (prática 1);
    }
    virtual T get(int idx)
    {
        // retornar um item do array a partir do indice;
    }
    virtual void set(int idx, const T &item)
    {
        // set o item do array pointed by used indices =
    }
    virtual void print();
};
template <class T>
void Array<T>::print()
{
    // print cada item numa linha da forma "<idx>: <item>"
}