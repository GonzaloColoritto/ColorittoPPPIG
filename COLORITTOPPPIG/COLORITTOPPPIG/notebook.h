#ifndef NOTEBOOK_H_INCLUDED
#define NOTEBOOK_H_INCLUDED

typedef struct{

    int id;
    char procesador[20];
    char marca[20];
    int precio;


}sNotebook;


void ordenarNotebooks(sNotebook vec[],int tam)
{

    sNotebook auxNotebook;

    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {

            if(vec[i].marca> vec[j].marca)
            {

                auxNotebook=vec[i];
                vec[i]=vec[j];
                vec[j]=auxNotebook;
            }
            else if( (vec[i].marca==vec[j].marca) && (vec[i].precio<vec[j].precio))
            {
                auxNotebook=vec[i];
                vec[i]=vec[j];
                vec[j]=auxNotebook;
            }

        }
    }

}

#endif // NOTEBOOK_H_INCLUDED
