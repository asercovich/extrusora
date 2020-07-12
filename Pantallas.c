Void pantalla_0_fija(){ 




      

   //lcd_putc("\f");
   
      lcd_gotoxy(18,4);
      printf(lcd_putc,"   ");
      lcd_gotoxy(18,4);
      printf(lcd_putc,"%lU" (SP_Z4));
      
      lcd_gotoxy(18,3);
      printf(lcd_putc,"   ");
      lcd_gotoxy(18,3);
      printf(lcd_putc,"%lU" (SP_Z3));

      lcd_gotoxy(18,2);
      printf(lcd_putc,"   ");
      lcd_gotoxy(18,2);
      printf(lcd_putc,"%lU" (SP_Z2));
      
      lcd_gotoxy(18,1);
      printf(lcd_putc,"   ");
      lcd_gotoxy(18,1);
      printf(lcd_putc,"%lU" (SP_Z1));
     
   lcd_gotoxy(1,1);
   printf(lcd_putc,"Z1:");
   lcd_gotoxy(1,2);
   printf(lcd_putc,"Z2:");  
   lcd_gotoxy(1,3);
   printf(lcd_putc,"Z3:");
   lcd_gotoxy(1,4);
   printf(lcd_putc,"Z4:");
   lcd_gotoxy(16,1);
   printf(lcd_putc,"SP"); 
   lcd_gotoxy(16,2);
   printf(lcd_putc,"SP");
   lcd_gotoxy(16,3);
   printf(lcd_putc,"SP");
   lcd_gotoxy(16,4);
   printf(lcd_putc,"SP"); 
   
   //MUESTRA Z1
   lcd_gotoxy(4,1);
   printf(lcd_putc,"       ");
   lcd_gotoxy(4,1);
   printf(lcd_putc, "%4.0g", (Temp_Z1));
   printf(lcd_putc,"%c" (223));
   printf(lcd_putc, "C");
   
   //MUESTRA Z2
   lcd_gotoxy(4,2);
   printf(lcd_putc,"       ");
   lcd_gotoxy(4,2);
   if(Temp_Z2<999)
   printf(lcd_putc, "%4.0g", (Temp_Z2));
   printf(lcd_putc,"%c" (223));
   printf(lcd_putc, "C");
   
   //MUESTRA Z3
   lcd_gotoxy(4,3);
   printf(lcd_putc,"       ");
   lcd_gotoxy(4,3);
   if(Temp_Z3<999)
   printf(lcd_putc, "%4.0g", (Temp_Z3));
   printf(lcd_putc,"%c" (223));
   printf(lcd_putc, "C");

   
   //MUESTRA Z4
   lcd_gotoxy(4,4);
   printf(lcd_putc,"       ");
   lcd_gotoxy(4,4);
   if(Temp_Z4<999)
   printf(lcd_putc, "%4.0g", (Temp_Z4));
   printf(lcd_putc,"%c" (223));
   printf(lcd_putc, "C");
   
}

Void pantalla_1_fija(){

   //lcd_putc("\f");
          lcd_gotoxy(18,2);
      printf(lcd_putc,"   ");
      lcd_gotoxy(18,2);
      printf(lcd_putc,"%lU" (SP_T_MOT));

      lcd_gotoxy(18,3);
      printf(lcd_putc,"   ");
      lcd_gotoxy(18,3);
      printf(lcd_putc,"%lU" (SP_I_MOT));

   lcd_gotoxy(1,1);
   printf(lcd_putc,"T_AMB:");
   lcd_gotoxy(1,2);
   printf(lcd_putc,"T_MOT:");
   lcd_gotoxy(1,3);
   printf(lcd_putc,"I_MOT:");
   lcd_gotoxy(1,4);
   printf(lcd_putc,"RPM :");
   
   lcd_gotoxy(16,3);
   printf(lcd_putc,"SP");
   
   
   //NUESTRA TEMP_AMB  
   lcd_gotoxy(7,1);
   printf(lcd_putc,"    ");
   lcd_gotoxy(7,1);
   printf(lcd_putc,"%lu" (Temp_Amb));
   lcd_gotoxy(9,1);
   printf(lcd_putc,"%c" (223));
   
   lcd_gotoxy(10,1);
   printf(lcd_putc,"AD");
   lcd_gotoxy(12,1);
   printf(lcd_putc,"    ");
   lcd_gotoxy(12,1);
   printf(lcd_putc,"%lu" (ADC_TEMPERATURA_AMBIENTE));
   
   
   //MUESTRA TEMP MOTOR
   
   lcd_gotoxy(7,2);
   printf(lcd_putc,"    ");
   lcd_gotoxy(7,2);
   printf(lcd_putc,"%lu" (Temp_Mot)); 
   lcd_gotoxy(9,1);
   printf(lcd_putc,"%c" (223));
   lcd_gotoxy(10,2);
   printf(lcd_putc,"AD");
   lcd_gotoxy(12,2);
   printf(lcd_putc,"    ");
   lcd_gotoxy(12,2);
   printf(lcd_putc,"%lu" (ADC_TEMPERATURA_MOTOR));
   lcd_gotoxy(16,2);
   printf(lcd_putc,"SP");

   }
   
Void pantalla_2_fija(){
   // lcd_putc("\f");
    
    lcd_gotoxy(1,1);
    printf(lcd_putc,"OfZ1:");
    lcd_gotoxy(1,2);
    printf(lcd_putc,"OfZ2:");
    lcd_gotoxy(1,3);
    printf(lcd_putc,"OfZ3:");
    lcd_gotoxy(1,4);
    printf(lcd_putc,"OfZ4:");
    
    lcd_gotoxy(11,1);
    printf(lcd_putc,"MaxZ1:");
    lcd_gotoxy(11,2);
    printf(lcd_putc,"MaxZ2:");
    lcd_gotoxy(11,3);
    printf(lcd_putc,"MaxZ3:");
    lcd_gotoxy(11,4);
    printf(lcd_putc,"MaxZ4:");
    
    lcd_gotoxy(6,1);
      printf(lcd_putc,"    ");
    lcd_gotoxy(6,1);
    if(OFFSET_Z1<=999)
      printf(lcd_putc,"%lU" (OFFSET_Z1));
    lcd_gotoxy(6,2);
      printf(lcd_putc,"    ");
    lcd_gotoxy(6,2);
    if(OFFSET_Z2<=999)
       printf(lcd_putc,"%lU" (OFFSET_Z2));
    lcd_gotoxy(6,3);
      printf(lcd_putc,"    ");
    lcd_gotoxy(6,3);
    if(OFFSET_Z3<=999)
       printf(lcd_putc,"%lU" (OFFSET_Z3));
    lcd_gotoxy(6,4);
      printf(lcd_putc,"    ");
    lcd_gotoxy(6,4);
    if(OFFSET_Z4<=999)
      printf(lcd_putc,"%lU" (OFFSET_Z4));
 
   lcd_gotoxy(17,1);
      printf(lcd_putc,"    ");
    lcd_gotoxy(17,1);
    if(MAX_Z1<=1024)
      printf(lcd_putc,"%lU" (MAX_Z1));
    lcd_gotoxy(17,2);
      printf(lcd_putc,"    ");
    lcd_gotoxy(17,2);
    if(MAX_Z2<=1024)
      printf(lcd_putc,"%lU" (MAX_Z2));
    lcd_gotoxy(17,3);
      printf(lcd_putc,"    ");
    lcd_gotoxy(17,3);
    if(MAX_Z3<=1024)
      printf(lcd_putc,"%lU" (MAX_Z3));
    lcd_gotoxy(17,4);
      printf(lcd_putc,"    ");
    lcd_gotoxy(17,4);
    if(MAX_Z4<=1024)
       printf(lcd_putc,"%lU" (MAX_Z4));
}

Void pantalla_3_fija(){

   lcd_gotoxy(1,1);
   printf(lcd_putc,"OfMot:");
   lcd_gotoxy(1,2);
   printf(lcd_putc,"OfAmb:");
   lcd_gotoxy(11,1);
    printf(lcd_putc,"MaxM:");
    lcd_gotoxy(11,2);
    printf(lcd_putc,"MaxA:");
   
   lcd_gotoxy(7,1);
      printf(lcd_putc,"    ");
    lcd_gotoxy(7,1);
    if(OFFSET_MOT<=100)
      printf(lcd_putc,"%lU" (OFFSET_MOT));
    lcd_gotoxy(7,2);
      printf(lcd_putc,"    ");
    lcd_gotoxy(7,2);
    if(OFFSET_AMB<=100)
       printf(lcd_putc,"%lU" (OFFSET_AMB));
        lcd_gotoxy(17,1);
      printf(lcd_putc,"    ");
    lcd_gotoxy(17,1);
    if(MAX_MOT<1024)
      printf(lcd_putc,"%lU" (MAX_MOT));
    lcd_gotoxy(17,2);
      printf(lcd_putc,"    ");
    lcd_gotoxy(17,2);
    if(MAX_AMB<1024)
      printf(lcd_putc,"%lU" (MAX_AMB));
  
}
void Cambiar_pantalla(INT8 key){
   lcd_putc("\f");
   if(key==SW_ARRIBA){
      if(Pantalla_actual>=3)
         Pantalla_actual=0;
      else
         Pantalla_actual++;
      //return;
   }
   else if(key==SW_ABAJO){
      if(Pantalla_actual==0)
         Pantalla_actual=3;
      else
         Pantalla_actual--;
      //return;
   }
   CONTADOR_SP=1;
   if(Pantalla_actual==0)
      pantalla_0_fija();
   else if(Pantalla_actual==1){
      CONTADOR_SP=2;
      pantalla_1_fija();
   }
   else if(Pantalla_actual==2)
      pantalla_2_fija();
   else if(Pantalla_actual==3)
      pantalla_3_fija();
}
