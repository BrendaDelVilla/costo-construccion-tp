#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../lib-costo-construccion/costo-construccion.h"
//prueba para convertir coma a punto

typedef struct{char *cadOri;
              }Cadena;

void formatear_Coma();

int main()
{
    system("chcp 65001");
    formatear_Coma();

    return 0;
}
///////////////////////////////////
void formatear_Coma()
{
    Cadena cadena[]=
    {   { "1000,1"},
        { "3333,44"},
        { "222"},
        { "88,4578861"},
        { "123,679"},
        { "888,1111"},
    };
    int total=sizeof(cadena)/sizeof(cadena[0]);
    char cad[50];//aproximado

    puts("convertir coma a punto\n");
    for(int i=0;i<total;i++)
    {
       strcpy(cad, cadena[i].cadOri);
       convertir_Coma(cad);
       printf("antes:%s\t\tdespues:%s\n",cadena[i].cadOri,cad);

    }
}
