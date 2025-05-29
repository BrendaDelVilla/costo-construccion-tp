#include "costo-construccion.h"

void convertir_Coma(char *IndiceCad)
{
    int convertido=0;
    char *PosComa=NULL;
    while(*IndiceCad!='\0')
        {
           if(*IndiceCad==',')
              {
                convertido++;
                PosComa=IndiceCad;

              }
          IndiceCad++;
        }
    if(convertido==1)
           {
                *PosComa='.';
           }
    else
          {
             //hay mas de una coma - ( si es 0 no hay coma)
          }

}
