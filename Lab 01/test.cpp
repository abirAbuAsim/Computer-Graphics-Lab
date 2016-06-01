
#include <graphics.h>

#include <stdlib.h>

#include <stdio.h>

#include <conio.h>



int main(void)

{



   /* request autodetection */

   int gdriver = DETECT, gmode, errorcode;

   int xmax, ymax;



   /* initialize graphics and local variables */

   initgraph(&gdriver, &gmode, "C:\\Program Files (x86)\\CodeBlocks\\MinGW\\lib\\libbgi.a");



   /* read result of initialization */

   errorcode = graphresult();



   if (errorcode != grOk) { /* an error occurred */

      printf("Graphics error: %s\n", grapherrormsg(errorcode));



      printf("Press any key to halt:");

      getch();

      exit(1);

   }



   setcolor(getmaxcolor());

   xmax = getmaxx();

   ymax = getmaxy();



   /* draw a diagonal line */

   line(0, 0, xmax, ymax);



   /* clean up */

   getch();

   closegraph();

   return 0;

}
