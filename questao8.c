#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
    
    setlocale(LC_ALL,"portuguese");
    
    int i,x,aux,v[10];
    
    for(i=0;i<10;i++) {
        
        printf("Digite o valor %i: ",i);
        scanf("%i",&v[i]);
    }
    
    for(i=0;i<10;i++) {
        
        for(x=i+1;x<10;x++) {
            
            if(v[i]>v[x]) {
                
                aux = v[i];
                v[i] = v[x];
                v[x] = aux;
            }
        }  
    }
    
    for(i=0;i<10;i++) {
        
        printf("\nO valor %i agora é: %i",i,v[i]);
    }

    return(0);
}