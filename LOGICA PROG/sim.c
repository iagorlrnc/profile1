#include <stdio.h> 
#include <stdlib.h>

int main(){
  int x;
  float valor;

  printf("Digite dois numeros: \n");
  scanf("%d", &x);
  scanf("%f", &valor);

    if (x < 13){
      valor = valor + 5;
      printf("Valor: %f \n", valor);
    } else if(x > 15){
      valor = valor - 5;
      printf("Valor: %d \n", x);
      printf("Valor: %f \n", valor);
    } else{
      printf("Valor: %d \n", x);
    }
}


///////////////////////
//   if(){
//     valor = valor - 5;
//     printf("Valor: %f \n", valor);
//   } else
//   {
//    printf("Valor: %d \n", x);
//   }
// }
/////////////////////
//   if (x < 13){
//     valor = valor + 5;
//     printf("Valor: %f \n", valor);
//   } else if(x > 15){
//     printf("Valor: %d \n", x);
    
//     printf("Valor: %f \n", valor);
//   } else{
//     printf("Valor: %d \n", x);
//   }
// }
///////////////////////
// if (x < 13){
//     valor = valor + 5;
//     printf("Valor: %f \n", valor);
//   } else{
//     printf("Valor: %d \n", x);
//   }
//   if(x > 15){
//     valor = valor - 5;
//     printf("Valor: %f \n", valor);
//   } else
//   {
//    printf("Valor: %d \n", x);
//   }
//////////////////////////////
  // if (x < 13){
  //   valor = valor + 5;
  //   printf("Valor: %f \n", valor);
  // } else if(x > 15){
  //   printf("Valor: %d \n", x);
  //   valor = valor - 5;
  //   printf("Valor: %f \n", valor);
  // }
  ////////////////////////////
//     if (x < 13){
//       valor = valor + 5;
//       printf("Valor: %f \n", valor);
//   }
//   else if (x > 15){
//       valor = valor - 5;
//       printf("Valor: %f \n", valor);     
//   }
//   else{
//       printf("Valor: %d \n", x);
//   }
// }
/////////////////////
//     if (x < 13){
//       valor = valor + 5;
//       printf("Valor: %f \n", valor);
//     } else if(x > 15){
//       valor = valor - 5;
//       printf("Valor: %d \n", x);
//       printf("Valor: %f \n", valor);
//     } else{
//       printf("Valor: %d \n", x);
//     }
// }
