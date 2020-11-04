    #include <stdio.h>
    #include <conio.h>
    #include <stdlib.h>
    int main(void)
    {
      int i;
      
      printf("Gerando 15 valores aleatorios:\n\n");
      
      for (i = 0; i < 15; i++)
      {
        /* gerando valores aleatórios entre zero e 100 */
        printf("%d ", rand() % 100);
      }
      
      getch();
      return 0;
    }
