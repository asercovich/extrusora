


#byte PORTB = 0xF81
#byte TRISB = 0xf93
#byte PORTC = 0xF82
#define BEEP pin_B7
INT8 SP_Z1_L ;
INT8 SP_Z1_H ;
INT32 SP_Z1=0 ;
INT8 SP_Z2_L ;
INT8 SP_Z2_H ;
INT32 SP_Z2=0 ;
INT8 SP_Z3_L ;
INT8 SP_Z3_H ;
INT32 SP_Z3=0 ;
INT8 SP_Z4_L ;
INT8 SP_Z4_H ;
INT32 SP_Z4=0 ;

INT8 PANTALLAS_1=1;
INT8 PANTALLAS_2=1;
INT8 PANTALLAS_3=0;

INT8 FLAG_BOTON = 0;
#bit FLAG_CENTRO_SP = FLAG_BOTON.4
INT8 CONTADOR_SP = 1;
INT8 BORRAR = 1;

//ABA PB1
//ARR PB6
//DER PB5
//IZQ PB3
//CEN PB4

VOID PANTALLAS_SP(){    //PRESENTA LAS PANTALLAS PARA SELECCIONAR EL SP
                        IF (CONTADOR_SP == 1)
                           {
                           lcd_gotoxy(15,1);
                           printf(lcd_putc,">");
                           lcd_gotoxy(15,2);
                           printf(lcd_putc," ");
                           lcd_gotoxy(15,3);
                           printf(lcd_putc," ");
                           lcd_gotoxy(15,4);
                           printf(lcd_putc," ");
                           }      
                       IF (CONTADOR_SP == 2)
                           {
                           lcd_gotoxy(15,1);
                           printf(lcd_putc," ");
                           lcd_gotoxy(15,2);
                           printf(lcd_putc,">");
                           lcd_gotoxy(15,3);
                           printf(lcd_putc," ");
                           lcd_gotoxy(15,4);
                           printf(lcd_putc," ");
                           }
                        
                       IF (CONTADOR_SP == 3)
                           {
                           lcd_gotoxy(15,1);
                           printf(lcd_putc," ");
                           lcd_gotoxy(15,2);
                           printf(lcd_putc," ");
                           lcd_gotoxy(15,3);
                           printf(lcd_putc,">");
                           lcd_gotoxy(15,4);
                           printf(lcd_putc," ");
                           }
                       IF (CONTADOR_SP == 4)
                           {
                           lcd_gotoxy(15,1);
                           printf(lcd_putc," ");
                           lcd_gotoxy(15,2);
                           printf(lcd_putc," ");
                           lcd_gotoxy(15,3);
                           printf(lcd_putc," ");
                           lcd_gotoxy(15,4);
                           printf(lcd_putc,">");
                           }
        }


   
Void Teclado(){ 

//EN SIMULACION CAMBIO LAS TECLAS AL PTOC    
    
         FLAG_BOTON = 0;
         //TRISB ENTRADAS
         bit_SET(TRISB,1);
         bit_SET(TRISB,3);
         bit_SET(TRISB,4);
         bit_SET(TRISB,5);
         bit_SET(TRISB,6);
         delay_ms(20);
  
 
          //CENTRO  SP (TOGGLE FLAG_CENTRO_SP)      
          if (bit_test (PORTC,4) == 1 )
          {
          DELAY_MS (50);
            IF (bit_test(PORTC,4) == 1 )
               {
               FLAG_CENTRO_SP = !FLAG_CENTRO_SP;
                  IF (PANTALLAS_1 == 1)
                  {
                  CONTADOR_SP = 1;
                  }
                  IF (PANTALLAS_1 == 2)
                  {
                  CONTADOR_SP = 2;
                  }
               PANTALLAS_SP();
               
               lcd_gotoxy(20,2);////////////////////////////////////////
               printf(lcd_putc,"%i" ((FLAG_CENTRO_SP)));////////////////
               
               
               }  
            WHILE (bit_test(PORTC,4) == 1 ){}
          }
          
          
                             
           //ARRIBA CAMBIO PANTALLA
           IF (FLAG_CENTRO_SP ==0)
           {
           
              if (bit_test(PORTC,6) == 1 )
              {
                  DELAY_MS (50);
                  if (bit_test(PORTC,6) == 1 )
                  {
                  PANTALLAS_2= PANTALLAS_1;
                  PANTALLAS_1= PANTALLAS_1 -1;
                  if (PANTALLAS_1 <1){
                  PANTALLAS_1=1;}
                  }
               }
           }
           //ARRIBA CONTADOR SP
           ELSE
           {   
               IF (bit_test(PORTC,6) == 1 )
               {
                        DELAY_MS (50);
                        IF (bit_test(PORTC,6) == 1 )
                        {
                           CONTADOR_SP -- ;
                           IF (PANTALLAS_1 == 1)
                           {
                                 IF (CONTADOR_SP <1) 
                                 {
                                 CONTADOR_SP = 1;
                                 }
                           }
                           IF (PANTALLAS_1 == 2)
                           {
                                 IF (CONTADOR_SP < 2) 
                                 {
                                 CONTADOR_SP = 2;
                                 }
                           }
                        PANTALLAS_SP();
                        }
               }

           }
           
           
           

           //ABAJO CAMBIO PANTALLA
           IF (FLAG_CENTRO_SP ==0)
           {
              if (bit_test(PORTC,1) == 1 )
              {
                  DELAY_MS (50);
                  if (bit_test(PORTC,1) == 1 )
                  {
                        PANTALLAS_2= PANTALLAS_1;
                        PANTALLAS_1= PANTALLAS_1 +1;
                        if (PANTALLAS_1 > 2){
                        PANTALLAS_1=2;}
                  }
              }
              
                        lcd_gotoxy(15,1);
                        printf(lcd_putc," ");
                        lcd_gotoxy(15,2);
                        printf(lcd_putc," ");
                        lcd_gotoxy(15,3);
                        printf(lcd_putc," ");
                        lcd_gotoxy(15,4);
                        printf(lcd_putc," ");                 
           }  
            //ABAJO CONTADOR SP
           ELSE
           { 
               if (bit_test(PORTC,1) == 1 )
               {
                     DELAY_MS (50);
                     if (bit_test(PORTC,1) == 1 )
                     {
                           CONTADOR_SP ++ ;        
                           IF (PANTALLAS_1 == 1)
                           {
                                 IF (CONTADOR_SP > 4) 
                                 {
                                 CONTADOR_SP = 4;
                                 }
                           }
                           IF (PANTALLAS_1 == 2)
                           {
                                 IF (CONTADOR_SP > 3) 
                                 {
                                 CONTADOR_SP = 3;
                                 }
                           }     
                     PANTALLAS_SP();
                    }
               }                  
           }
           
 
               
           IF (FLAG_CENTRO_SP ==1)
           {
           lcd_gotoxy(20,1);
           printf(lcd_putc,"%i" ((CONTADOR_SP)));
           lcd_gotoxy(20,2);
           printf(lcd_putc,"%i" ((FLAG_CENTRO_SP)));
           }
           ELSE
           {
           lcd_gotoxy(20,1);
           printf(lcd_putc," ");
           //lcd_gotoxy(20,2);
           //printf(lcd_putc," ");
           }
                    printf(lcd_putc,"%i" ((FLAG_CENTRO_SP)));
          //TRISB SALIDAS
          bit_CLEAR(TRISB,1);
          bit_CLEAR(TRISB,3); 
          bit_CLEAR(TRISB,4); 
          bit_CLEAR(TRISB,5); 
          bit_CLEAR(TRISB,6); 
          //delay_ms(20);
 
 }




