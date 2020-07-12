
#define SW_CENTRO    1
#define SW_ARRIBA    3
#define SW_ABAJO     2
#define SW_IZQUIERDA 4
#define SW_DERECHA   5
#define SW_NOKEY     0
//ABAJO PB1
//ARRIBA PB6
//DERECHA PB5
//IZQUIERDA PB3
//CENTRO PB4
VOID TRIS_IN(){
//TRISB ENTRADAS
         bit_SET(TRISB,1);
         bit_SET(TRISB,3);
         bit_SET(TRISB,4);
         bit_SET(TRISB,5);
         bit_SET(TRISB,6);
         delay_ms(20); 
         }
         
INT8 leer_botones(void){
  TRIS_IN();
  if(bit_test (PORT,4)) // boton centro
  {
      flag++;
      if(!(flag%4)&&flag>30){
        return 1;
      }
      if(flag==4){
        return 1;
      }
  }
  else if(bit_test(PORT,6)) //boton arriba
  {
      flag++;
      if(!(flag%4)&&flag>30){
        return 2;
      }
      if(flag==2){
        return 2;
      }
  }
  else if(bit_test(PORT,1)) //boton abajo
  {
      flag++;
      if(!(flag%4)&&flag>30){
        return 3;
      }
      if(flag==2){
        return 3;
      }
  }
  else if(bit_test(PORT,3)) //boton izquierda
  {
      flag++;
      if(flag>10){
        return 4;
      }
      if(flag==2){
        return 4;
      }
  }
  else if(bit_test(PORT,5)) //boton derecha
  {
      flag++;
      if(flag>10){
        return 5;
      }
      if(flag==2){
        return 5;
      }
  }
  else
      flag=0;
  delay_ms(20);
  return 0;
}   //    --------------------------------------------------------------------------------
VOID PANTALLAS_SP1(){
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
VOID PANTALLAS_SP(){

if(Pantalla_actual==2||Pantalla_actual==3){
   IF (CONTADOR_SP == 1)
   {
      lcd_gotoxy(10,1);
      printf(lcd_putc,"<");
      lcd_gotoxy(10,2);
      printf(lcd_putc," ");
      lcd_gotoxy(10,3);
      printf(lcd_putc," ");
      lcd_gotoxy(10,4);
      printf(lcd_putc," ");
   }      
   IF (CONTADOR_SP == 2)
   {
      lcd_gotoxy(10,1);
      printf(lcd_putc," ");
      lcd_gotoxy(10,2);
      printf(lcd_putc,"<");
      lcd_gotoxy(10,3);
      printf(lcd_putc," ");
      lcd_gotoxy(10,4);
      printf(lcd_putc," ");
   }
   
   IF (CONTADOR_SP == 3)
   {
      lcd_gotoxy(10,1);
      printf(lcd_putc," ");
      lcd_gotoxy(10,2);
      printf(lcd_putc," ");
      lcd_gotoxy(10,3);
      printf(lcd_putc,"<");
      lcd_gotoxy(10,4);
      printf(lcd_putc," ");
   }
   IF (CONTADOR_SP == 4)
   {
      lcd_gotoxy(10,1);
      printf(lcd_putc," ");
      lcd_gotoxy(10,2);
      printf(lcd_putc," ");
      lcd_gotoxy(10,3);
      printf(lcd_putc," ");
      lcd_gotoxy(10,4);
      printf(lcd_putc,"<");
   }
   IF (CONTADOR_SP == 5)
   {
      lcd_gotoxy(10,1);
      printf(lcd_putc,">");
      lcd_gotoxy(10,2);
      printf(lcd_putc," ");
      lcd_gotoxy(10,3);
      printf(lcd_putc," ");
      lcd_gotoxy(10,4);
      printf(lcd_putc," ");
   }      
   IF (CONTADOR_SP == 6)
   {
      lcd_gotoxy(10,1);
      printf(lcd_putc," ");
      lcd_gotoxy(10,2);
      printf(lcd_putc,">");
      lcd_gotoxy(10,3);
      printf(lcd_putc," ");
      lcd_gotoxy(10,4);
      printf(lcd_putc," ");
   }
   
   IF (CONTADOR_SP == 7)
   {
      lcd_gotoxy(10,1);
      printf(lcd_putc," ");
      lcd_gotoxy(10,2);
      printf(lcd_putc," ");
      lcd_gotoxy(10,3);
      printf(lcd_putc,">");
      lcd_gotoxy(10,4);
      printf(lcd_putc," ");
   }
   IF (CONTADOR_SP == 8)
   {
      lcd_gotoxy(10,1);
      printf(lcd_putc," ");
      lcd_gotoxy(10,2);
      printf(lcd_putc," ");
      lcd_gotoxy(10,3);
      printf(lcd_putc," ");
      lcd_gotoxy(10,4);
      printf(lcd_putc,">");
   }
}
else{IF (CONTADOR_SP == 1)
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
}

VOID PANTALLA_PROGRAMACION()
{
   lcd_putc("\f");
   lcd_gotoxy(1,4);
   printf(lcd_putc,"  MODO PROGRAMACION ");
   delay_ms(1000);
   lcd_gotoxy(1,4);
   printf(lcd_putc,"                     ");
}
   /*
Void Teclado(){ 
//EN SIMULACION CAMBIO LAS TECLAS AL PTOC    


         TRIS_IN();


///////////////////////////////////////////////////////////////////////////////
//CENTRO  SP (TOGGLE FLAG_CENTRO_SP) / MODO PROGRAMACION
///////////////////////////////////////////////////////////////////////////////
               if (bit_test (PORT,4) == 1 )
          {
          DELAY_MS (50);
            IF (bit_test(PORT,4) == 1 )
               {
               PANTALLA_PROGRAMACION();
               FLAG_FIN_SP1 = FLAG_CENTRO_SP; 
               FLAG_CENTRO_SP = !FLAG_CENTRO_SP; //XOR
               WHILE (bit_test(PORT,4) == 1 ){} //ESPERA A SOLTAR TECLA
                  IF (PANTALLAS_1 == 1)  //ACOMODA EL CONTADOR SP PARA LAS DISTITAS PANTALLAS               
                  {
                  CONTADOR_SP = 1;
                  }
                  IF (PANTALLAS_1 == 2)
                  {
                  CONTADOR_SP = 2;
                  }
               PANTALLAS_SP();  //SIMBOLOGÍA DE MODO DE PROGRAMACION        
               } 
               IF (FLAG_FIN_SP1 >0) //DETECTA SALIDA DE PROGRAMACION PARA GUARDAR NE EEPROM
               { 
               SP();
               }
          }
  
///////////////////////////////////////////////////////////////////////////////
//ARRIBA CAMBIO PANTALLA   
///////////////////////////////////////////////////////////////////////////////
     
              if (bit_test(PORT,6) == 1 )
              {
                  DELAY_MS (50);
                  if (bit_test(PORT,6) == 1 )
                  {
                     IF (FLAG_CENTRO_SP ==0) //CAMBIA PANTALLA
                     {
                     PANTALLAS_2= PANTALLAS_1;
                     PANTALLAS_1= PANTALLAS_1 -1;
                     if (PANTALLAS_1 <1){
                     PANTALLAS_1=1;}
                    // WHILE(bit_test(PORT,6) == 1 ){}
                     }
                  }
              }

///////////////////////////////////////////////////////////////////////////////
//ABAJO CAMBIO PANTALLA
/////////////////////////////////////////////////////////////////////////////// 
              if (bit_test(PORT,1) == 1 )
              {
                  DELAY_MS (50);
                  if (bit_test(PORT,1) == 1 )
                  {
                    IF (FLAG_CENTRO_SP ==0)
                    {
                        PANTALLAS_2= PANTALLAS_1;
                        PANTALLAS_1= PANTALLAS_1 +1;
                        if (PANTALLAS_1 > 2){
                        PANTALLAS_1=2;}
                    }
                  }
              }  


  
///////////////////////////////////////////////////////////////////
//ARRIBA CONTADOR SP
///////////////////////////////////////////////////////////////////////////////         
               IF (bit_test(PORT,6) == 1 )//ARRIBA
               {
                        DELAY_MS (50);
                        IF (bit_test(PORT,6) == 1 )//ARRIBA
                        {
                         IF (FLAG_CENTRO_SP ==1) // DECRE CONTADOR SP
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
 
///////////////////////////////////////////////////////////////////////////////           
//ABAJO CONTADOR SP
///////////////////////////////////////////////////////////////////////////////
               if (bit_test(PORT,1) == 1 )//ABAJO
               {
                     DELAY_MS (50);
                     if (bit_test(PORT,1) == 1 )//ABAJO
                     {
                        IF (FLAG_CENTRO_SP ==1)
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


                                          
///////////////////////////////////////////////////////////////////////////////
// BORRA MARCADORES SP > CUANDO SALE DE MODO DE PROGRAMACION
///////////////////////////////////////////////////////////////////////////////
               IF (FLAG_CENTRO_SP ==0) 
           {
                        lcd_gotoxy(15,1);
                        printf(lcd_putc," ");
                        lcd_gotoxy(15,2);
                        printf(lcd_putc," ");
                        lcd_gotoxy(15,3);
                        printf(lcd_putc," ");
                        lcd_gotoxy(15,4);
                        printf(lcd_putc," ");
           }         
 
            
///////////////////////////////////////////////////////////////////////////////
//IZQUIERDA CONTADOR SP PARA AJUSTAR VALORES A PROGRAMAR
///////////////////////////////////////////////////////////////////////////////      
/*
               if (bit_test(PORT,3) == 1 )
               {
                   DELAY_MS (50);
                   if (bit_test(PORT,3) == 1 )
                   {
                     IF (FLAG_CENTRO_SP ==1) // DECRE VALOR DE SP
                     {
                       IF (PANTALLAS_1 == 1)/////////////////////////////////////////////PANTALA 1
                       {
                          IF (CONTADOR_SP == 1)////////////////////////////////////
                           {
                            SP_Z1 = (SP_Z1 -1);IF (SP_Z1 > 300) SP_Z1 = 0;
                            lcd_gotoxy(18,1);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,1);printf(lcd_putc,"%lU" (SP_Z1));
                           }
                           IF (CONTADOR_SP == 2)////////////////////////////////////
                           {
                            SP_Z2 = (SP_Z2 -1);IF (SP_Z2 > 300) SP_Z2 = 0;
                            lcd_gotoxy(18,2);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,2);printf(lcd_putc,"%lU" (SP_Z2));
                           }
                           IF (CONTADOR_SP == 3)////////////////////////////////////
                           {
                            SP_Z3 = (SP_Z3 -1);IF (SP_Z3 > 300) SP_Z3 = 0;
                            lcd_gotoxy(18,3);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,3);printf(lcd_putc,"%lU" (SP_Z3));
                           }
                           IF (CONTADOR_SP == 4)////////////////////////////////////
                           {
                            SP_Z4 = (SP_Z4 -1);IF (SP_Z4 > 300) SP_Z4 = 0;
                            lcd_gotoxy(18,4);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,4);printf(lcd_putc,"%lU" (SP_Z4));
                           }
                      }
                       IF (PANTALLAS_1 == 2)/////////////////////////////////////////////PANTALA 2
                      {
                           IF (CONTADOR_SP == 2)////////////////////////////////////
                            {
                            SP_T_MOT = (SP_T_MOT -1);IF (SP_T_MOT > 300) SP_T_MOT = 0;
                            lcd_gotoxy(18,2);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,2);printf(lcd_putc,"%lU" (SP_T_MOT));                          
                            }
                           IF (CONTADOR_SP == 3)////////////////////////////////////
                            {
                            SP_I_MOT = (SP_I_MOT -1);IF (SP_I_MOT > 300) SP_I_MOT = 0;
                            lcd_gotoxy(18,3);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,3);printf(lcd_putc,"%lU" (SP_I_MOT));                        
                            }
                      }
                     }
                   }
               }


               if (bit_test(PORT,3) == 1 )
               {
                   DELAY_MS (50);
                   if (bit_test(PORT,3) == 1 )
                   {
                     IF (FLAG_CENTRO_SP ==1) // DECRE VALOR DE SP
                     {
                       IF (PANTALLAS_1 == 1)/////////////////////////////////////////////PANTALA 1
                       {
                          IF (CONTADOR_SP == 1)////////////////////////////////////
                           {
                            SP_Z1 = 0;
                            lcd_gotoxy(18,1);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,1);printf(lcd_putc,"%lU" (SP_Z1));
                           }
                           IF (CONTADOR_SP == 2)////////////////////////////////////
                           {
                            SP_Z2= 0;
                            lcd_gotoxy(18,2);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,2);printf(lcd_putc,"%lU" (SP_Z2));
                           }
                           IF (CONTADOR_SP == 3)////////////////////////////////////
                           {
                            SP_Z3  = 0;
                            lcd_gotoxy(18,3);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,3);printf(lcd_putc,"%lU" (SP_Z3));
                           }
                           IF (CONTADOR_SP == 4)////////////////////////////////////
                           {
                            SP_Z4 =0;
                            lcd_gotoxy(18,4);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,4);printf(lcd_putc,"%lU" (SP_Z4));
                           }
                      }
                       IF (PANTALLAS_1 == 2)/////////////////////////////////////////////PANTALA 2
                      {
                           IF (CONTADOR_SP == 2)////////////////////////////////////
                            {
                            SP_T_MOT =   0;
                            lcd_gotoxy(18,2);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,2);printf(lcd_putc,"%lU" (SP_T_MOT));                          
                            }
                           IF (CONTADOR_SP == 3)////////////////////////////////////
                            {
                            SP_I_MOT =  0;
                            lcd_gotoxy(18,3);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,3);printf(lcd_putc,"%lU" (SP_I_MOT));                        
                            }
                      }
                     }
                   }
               }
                         
///////////////////////////////////////////////////////////////////////////////
//DERECHA CONTADOR SP PARA AJUSTAR VALORES A PROGRAMAR
///////////////////////////////////////////////////////////////////////////////
               if (bit_test(PORT,5) == 1 )
               {
                   DELAY_MS (50);
                   if (bit_test(PORT,5) == 1 )
                   {
                     IF (FLAG_CENTRO_SP ==1) // INCRE VALOS DE SP
                     {
                       IF (PANTALLAS_1 == 1)/////////////////////////////////////////////PANTALA 1
                         {
                           IF (CONTADOR_SP == 1)////////////////////////////////////
                           {
                            SP_Z1 = (SP_Z1 + 1);IF (SP_Z1 > 300) SP_Z1 = 300;
                            lcd_gotoxy(18,1);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,1);printf(lcd_putc,"%lU" (SP_Z1));                          
                           }
                           IF (CONTADOR_SP == 2)////////////////////////////////////
                           {
                            SP_Z2 = (SP_Z2 + 1);IF (SP_Z2 > 300) SP_Z2 = 300;
                            lcd_gotoxy(18,2);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,2);printf(lcd_putc,"%lU" (SP_Z2));                           
                           }
                           IF (CONTADOR_SP == 3)////////////////////////////////////
                           {
                            SP_Z3 = (SP_Z3 + 1);IF (SP_Z3 > 300) SP_Z3 = 300;
                            lcd_gotoxy(18,3);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,3);printf(lcd_putc,"%lU" (SP_Z3));                         
                           }
                           IF (CONTADOR_SP == 4)////////////////////////////////////
                           {
                            SP_Z4 = (SP_Z4 + 1);IF (SP_Z4 > 300) SP_Z4 = 300;
                            lcd_gotoxy(18,4);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,4);printf(lcd_putc,"%lU" (SP_Z4)); 
                           }
                        }
                       IF (PANTALLAS_1 == 2)/////////////////////////////////////////////PANTALA 2
                      {
                           IF (CONTADOR_SP == 2)////////////////////////////////////
                            {
                            SP_T_MOT = (SP_T_MOT + 1);IF (SP_T_MOT > 300) SP_T_MOT = 300;
                            lcd_gotoxy(18,2);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,2);printf(lcd_putc,"%lU" (SP_T_MOT));                           
                            }
                           IF (CONTADOR_SP == 3)////////////////////////////////////
                            {
                            SP_I_MOT = (SP_I_MOT + 1);IF (SP_I_MOT > 300) SP_I_MOT = 300;
                            lcd_gotoxy(18,3);printf(lcd_putc,"   "); 
                            lcd_gotoxy(18,3);printf(lcd_putc,"%lU" (SP_I_MOT));                         
                            }
                       }
                       
                     }
                   }
               } 

//TEMPORAL////////////////////////////////////////////////////////////////////////////////
/*
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
           lcd_gotoxy(20,2);
           printf(lcd_putc,"%i" ((FLAG_CENTRO_SP)));
           //lcd_gotoxy(20,3);
           //printf(lcd_putc,"%i" ((PANTALLAS_1)));
           lcd_gotoxy(1,14);
           printf(lcd_putc,"%i" ((PANTALLAS_1)));
      
           Lcd_gotoxy(1,14);
           printf(lcd_putc,"%i" ((CONTADOR_SP)));
           
           
//TRISB SALIDAS
          bit_CLEAR(TRISB,1);
          bit_CLEAR(TRISB,3); 
          bit_CLEAR(TRISB,4); 
          bit_CLEAR(TRISB,5); 
          bit_CLEAR(TRISB,6); 
          delay_ms(20);
 
 
}

*/


