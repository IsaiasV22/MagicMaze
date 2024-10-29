#include "Composite.h"

Composite::Composite()
{
    numfila = 5;
    numColumna = 5;
    mat = new Componente * *[numfila];

    for (int i = 0; i < numfila; i++)
    {
        mat[i] = new Componente * [numColumna];
    }

    for (int i = 0; i < numfila; i++)
    {
        for (int j = 0; j < numColumna; j++)
        {
            mat[i][j] = NULL;

        }
    }
}

Composite::Composite(int f,int c)
{
    numfila = f;
    numColumna = c;
    mat = new Componente ** [numfila];

    for (int i = 0; i < numfila; i++)
    {
        mat[i] = new Componente * [numColumna];
    }

    for (int i = 0; i < numfila; i++)
    {
        for (int j = 0; j < numColumna; j++)
        {
            mat[i][j] = NULL;

        }
    }
}

Composite::~Composite()
{
    for (int i = 0; i < numfila; i++)
    {
        for (int j = 0; j < numColumna; j++)
        {
            delete mat[i][j];
        }
    }

    for (int i = 0; i < numfila; i++)
    {
        delete[] mat[i];
    }
    delete[]mat;
}

string Composite::toString() const
{
    
    stringstream s;
    for (int i = 0; i < numfila; i++) {
        for (int j = 0; j < numColumna; j++) {
            if (mat[i][j] != NULL) {
                s << mat[i][j]->toString() << " | ";

            }
        }
        s << endl;
    }
    return s.str();
}
