void Modo_programacion1(INT16 key){
   if(Pantalla_actual==2)
    PANTALLAS_SP();
   else if(Pantalla_actual==3)
    PANTALLAS_SP();
   else
      PANTALLAS_SP1();
   if (key==SW_NOKEY)
      return;
   else if(key==SW_CENTRO){
      flag_programacion=0;
      lcd_putc("\f");
       lcd_gotoxy(5,2);
       Guardar_EEPROM(SP_Z1,DIR_SPZ1);
       Guardar_EEPROM(SP_Z2,DIR_SPZ2);
       Guardar_EEPROM(SP_Z3,DIR_SPZ3);
       Guardar_EEPROM(SP_Z4,DIR_SPZ4);
       Guardar_EEPROM(OFFSET_Z1,DIR_OFF_Z1);
       Guardar_EEPROM(OFFSET_Z2,DIR_OFF_Z2);
       Guardar_EEPROM( OFFSET_Z3,DIR_OFF_Z3);
       Guardar_EEPROM( OFFSET_Z4,DIR_OFF_Z4);
       Guardar_EEPROM( OFFSET_MOT,DIR_OFF_MOT);
       Guardar_EEPROM( OFFSET_AMB,DIR_OFF_AMB);
       Guardar_EEPROM(MAX_Z1,DIR_MAX_Z1);
       Guardar_EEPROM(MAX_Z2,DIR_MAX_Z2);
       Guardar_EEPROM(MAX_Z3,DIR_MAX_Z3);
       Guardar_EEPROM(MAX_Z4,DIR_MAX_Z4);
       Guardar_EEPROM(MAX_MOT,DIR_MAX_MOT);
       Guardar_EEPROM(MAX_AMB,DIR_MAX_AMB);
       Guardar_EEPROM(SP_I_MOT,DIR_SP_I_MOT);
       Guardar_EEPROM(SP_T_MOT,DIR_SP_T_MOT);
       printf(lcd_putc,"Datos Guardados");
             Beep_corto();
             lcd_putc("\f");
      return;
   }
   else if(key==SW_ABAJO){
      if(Pantalla_actual==1){
         if(CONTADOR_SP==2)
            CONTADOR_SP=3;
         else
            CONTADOR_SP--;
      }
      else if(Pantalla_actual==2){
         if(CONTADOR_SP==1)
            CONTADOR_SP=8;
         else
            CONTADOR_SP--;
      
      }
      else if(Pantalla_actual==3){
         if(CONTADOR_SP==1)
            CONTADOR_SP=6;
         ELSE IF(CONTADOR_SP==5)
            CONTADOR_SP=2;
         ELSE 
            CONTADOR_SP--;
      }
      else{
         if(CONTADOR_SP==1)
            CONTADOR_SP=4;
         else
            CONTADOR_SP--;
      }
   }
   else if(key==SW_ARRIBA){
      if(Pantalla_actual==1){
         if(CONTADOR_SP==3)
            CONTADOR_SP=2;
         else
            CONTADOR_SP++;
      }
      else if(Pantalla_actual==2){
         if(CONTADOR_SP==8)
            CONTADOR_SP=1;
         else
            CONTADOR_SP++;
      }
      else if(Pantalla_actual==3){
         if(CONTADOR_SP==2)
            CONTADOR_SP=5;
         ELSE IF(CONTADOR_SP==6)
            CONTADOR_SP=1;
         ELSE 
            CONTADOR_SP++;
      }
      else{
         if(CONTADOR_SP==4)
            CONTADOR_SP=1;
         else
            CONTADOR_SP++;
      }
   }
   else if(key==SW_DERECHA){
      if(Pantalla_actual==0){
         if(CONTADOR_SP==1){
            if(SP_Z1>=300)
               SP_Z1=0;
            SP_Z1++;
         }
         else if(CONTADOR_SP==2){
            if(SP_Z2>=300)
               SP_Z2=0;
            SP_Z2++;
         }
         else if(CONTADOR_SP==3){
            if(SP_Z3>=300)
               SP_Z3=0;
            SP_Z3++;
         }
         else if(CONTADOR_SP==4){
            if(SP_Z4>=300)
               SP_Z4=0;
            SP_Z4++;
         }
         
      }
      else if(Pantalla_actual==1){
         if(CONTADOR_SP==3){
            if(SP_I_MOT>=100)
               SP_I_MOT=0;
            SP_I_MOT++;
         }
         else if(CONTADOR_SP==2){
            if(SP_T_MOT>=100)
               SP_T_MOT=0;
            SP_T_MOT++;
         }
      }
      else if(Pantalla_actual==2){ 
         if(CONTADOR_SP==1)
            OFFSET_Z1 = ADC_TERMOCUPLA_Z1;
         else if(CONTADOR_SP==2)
            OFFSET_Z2 = ADC_TERMOCUPLA_Z2;
         else if(CONTADOR_SP==3)
            OFFSET_Z3 = ADC_TERMOCUPLA_Z3;
         else if(CONTADOR_SP==4)
            OFFSET_Z4 = ADC_TERMOCUPLA_Z4;
         else if(CONTADOR_SP==5){
            if(MAX_Z1>=1024)
               MAX_Z1=0;
            MAX_Z1++;
         }
         else if(CONTADOR_SP==6){
            if(MAX_Z2>=1024)
               MAX_Z2=0;
            MAX_Z2++;
         }
         else if(CONTADOR_SP==7){
            if(MAX_Z3>=1024)
               MAX_Z3=0;
            MAX_Z3++;
         }
         else if(CONTADOR_SP==8){
            if(MAX_Z4>=1024)
               MAX_Z4=0;
            MAX_Z4++;
         }
      }
      ELSE IF(Pantalla_actual==3){
         if(CONTADOR_SP==1)
            OFFSET_MOT = ADC_TEMPERATURA_MOTOR;
         else if(CONTADOR_SP==2)
            OFFSET_AMB = ADC_TEMPERATURA_AMBIENTE;
         else if(CONTADOR_SP==5){
            if(MAX_MOT>=1024)
               MAX_MOT=0;
            MAX_MOT++;
         }
         else if(CONTADOR_SP==6){
            if(MAX_AMB>=1024)
               MAX_AMB=0;
            MAX_AMB++;
         }
      }      
   }
   else if(key==SW_IZQUIERDA){
         if(Pantalla_actual==0){
         if(CONTADOR_SP==1){
            if(SP_Z1<=0)
               SP_Z1=300;
            SP_Z1--;
         }
         else if(CONTADOR_SP==2){
            if(SP_Z2<=0)
               SP_Z2=300;
            SP_Z2--;
         }
         else if(CONTADOR_SP==3){
            if(SP_Z3<=0)
               SP_Z3=300;
            SP_Z3--;
         }
         else if(CONTADOR_SP==4){
            if(SP_Z4<=0)
               SP_Z4=300;
            SP_Z4--;
         }
         
      }
      else if(Pantalla_actual==1){
         if(CONTADOR_SP==3){
            if(SP_I_MOT<=0)
               SP_I_MOT=100;
            SP_I_MOT--;
         }
         else if(CONTADOR_SP==2){
            if(SP_T_MOT<=0)
               SP_T_MOT=100;
            SP_T_MOT--;
         }
      }
      else if(Pantalla_actual==2){
         if(CONTADOR_SP==1)
            OFFSET_Z1 = ADC_TERMOCUPLA_Z1;
         else if(CONTADOR_SP==2)
            OFFSET_Z2 = ADC_TERMOCUPLA_Z2;
         else if(CONTADOR_SP==3)
            OFFSET_Z3 = ADC_TERMOCUPLA_Z3;
         else if(CONTADOR_SP==4)
            OFFSET_Z4 = ADC_TERMOCUPLA_Z4;
         else if(CONTADOR_SP==5){
            if(MAX_Z1<=0)
               MAX_Z1=1024;
            MAX_Z1--;
         }
         else if(CONTADOR_SP==6){
            if(MAX_Z2<=0)
               MAX_Z2=1024;
            MAX_Z2--;
         }
         else if(CONTADOR_SP==7){
            if(MAX_Z3<=0)
               MAX_Z3=1024;
            MAX_Z3--;
         }
         else if(CONTADOR_SP==8){
            if(MAX_Z4<=0)
               MAX_Z4=1024;
            MAX_Z4--;
         }
      }
      ELSE IF(Pantalla_actual==3){
         if(CONTADOR_SP==1)
            OFFSET_MOT = ADC_TEMPERATURA_MOTOR;
         else if(CONTADOR_SP==2)
            OFFSET_AMB = ADC_TEMPERATURA_AMBIENTE;
         else if(CONTADOR_SP==5){
            if(MAX_MOT<=0)
               MAX_MOT=1024;
            MAX_MOT--;
         }
         else if(CONTADOR_SP==6){
            if(MAX_AMB<=0)
               MAX_AMB=1024;
            MAX_AMB--;
         }
      }
   }
   
}
