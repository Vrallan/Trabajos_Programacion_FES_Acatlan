//programa que tenga un reloj digital con hora, minutos y segundos

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 int main()
 {
     int hora, minuto, segundo;
     time_t tiempo = time(0);
     struct tm *tlocal = localtime(&tiempo);
     hora = tlocal->tm_hour;
     minuto = tlocal->tm_min;
     segundo = tlocal->tm_sec;
     printf("La hora actual es: %02d:%02d:%02d", hora, minuto, segundo);
     return 0;
 }
