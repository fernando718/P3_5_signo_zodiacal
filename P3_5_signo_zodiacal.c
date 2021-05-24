
/*Deep3_Prog5:
Verificar a que elemento (Fuego, tierra, aire, agua)
Corresponde un signo del zodiaco*/
 #include <stdio.h>
 int main()
 {
   int signo;
   printf("\n           Signos del zodiaco \n\n");
   printf("\n 1.  Aries");
   printf("\n 2.  Tauro");
   printf("\n 3.  Geminis");
   printf("\n 4.  Cáncer");
   printf("\n 5.  Leo");
   printf("\n 6.  Virgo");
   printf("\n 7.  Libra");
   printf("\n 8.  Escorpio");
   printf("\n 9.  Sagitario");
   printf("\n 10. Capricornio");
   printf("\n 11. Acuario");
   printf("\n 12. Piscis");

   printf("\n Escribe el número que sea tu signo");
   scanf("%d", &signo);

   switch(signo)
   {
      case 1:
      case 5:
      case 9: 
              printf("\n Tu elemento es el FUEGO");
              break;
      case 2:
      case 6:
      case 10:
              printf("\n Tu elemento es la TIERRA");
              break; 
      case 3: 
      case 7:
      case 11:
              printf("\n Tu elemento es el AIRE");
              break;
      case 4:
      case 8:
      case 12: 
              printf("\n Tu elemento es el AGUA");
              break;
      default:
              printf("\n El número no corresponde a un número del zodiaco ");
             break;
    }
      return 0;
 }
