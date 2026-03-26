#include <stdio.h>
#include <stdlib.h>

int main(){
    int M1[]={4,6,1,2};
    int i,j,aux;
    int tam=sizeof(M1)/sizeof(int);
    for(i=0;i<tam;i++);
    {
          for(j=i+1;j<tam;j++);
        {
            if(M1[i]>M1[j])
            {
                aux = M1[i];
                M1[i]=M1[j];
                M1[j]=aux;
            }
        }
    }
    for(i=0;1<tam;i++){
        printf("%d ",M1[i]);
    }


    return 0;
}
