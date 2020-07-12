void Beep_corto(void);
void Beep_largo(void);
void Guardar_EEPROM(INT16 dato,INT16 dir);
INT16 Leer_EEPROM(INT16 dir);



INT16 Leer_EEPROM(INT16 dir){
   INT8 low=0;
   INT8 high=0;
   INT16 res=0;
   low = READ_EEPROM(dir);
   high = READ_EEPROM(dir+1);
   res = (high << 8);
   res = (res | low);
   return res;
}

void Guardar_EEPROM(INT16 dato,INT16 dir){                      //SP_Z4     0
  INT8 aux_l ;                                                  //SP_Z3     2
  INT8 aux_h ;                                                  //SP_Z2     4
  INT16 aux;                                                    //SP_Z1     6

  aux_l = READ_EEPROM(dir);
  aux_h = READ_EEPROM(dir+1); 
  aux = (aux_h << 8);
  aux = (aux | aux_l);
  if(aux==dato){  
   return;
  }

  else{
       aux_l = 0;
      aux_h = 0;
      aux_l=dato;
      dato=(dato>>8);
      aux_h=dato;
      WRITE_EEPROM(dir, aux_l);
      WRITE_EEPROM(dir+1, aux_h);
  /*
      aux_l = 0;
      aux_h = 0;
      if (bit_test(dato,0) == 1 ) bit_SET(aux_l,0);
      if (bit_test(dato,1) == 1 ) bit_SET(aux_l,1);
      if (bit_test(dato,2) == 1 ) bit_SET(aux_l,2);
      if (bit_test(dato,3) == 1 ) bit_SET(aux_l,3);
      if (bit_test(dato,4) == 1 ) bit_SET(aux_l,4);
      if (bit_test(dato,5) == 1 ) bit_SET(aux_l,5);
      if (bit_test(dato,6) == 1 ) bit_SET(aux_l,6);
      if (bit_test(dato,7) == 1 ) bit_SET(aux_l,7);
      if (bit_test(dato,8) == 1 ) bit_SET(aux_h,0);
      bit_CLEAR(aux_h,9);
      bit_CLEAR(aux_h,10);
      bit_CLEAR(aux_h,11);
      bit_CLEAR(aux_h,12);
      bit_CLEAR(aux_h,13);
      bit_CLEAR(aux_h,14);
      bit_CLEAR(aux_h,15);         
      WRITE_EEPROM(dir, aux_l);
      WRITE_EEPROM(dir+1, aux_h);
      return;  */
  }
}


void Beep_largo(void){
   OUTPUT_HIGH(BEEP);
   delay_ms(200);
   OUTPUT_LOW(BEEP);
   
   delay_ms(100);
   
   OUTPUT_HIGH(BEEP);
   delay_ms(50);
   OUTPUT_LOW(BEEP);
   delay_ms(50);
   OUTPUT_HIGH(BEEP);
   delay_ms(50);
   OUTPUT_LOW(BEEP);
   delay_ms(50);
}

void Beep_corto(void){   
   OUTPUT_HIGH(BEEP);
   delay_ms(50);
   OUTPUT_LOW(BEEP);
   delay_ms(50);
   OUTPUT_HIGH(BEEP);
   delay_ms(50);
   OUTPUT_LOW(BEEP);
   delay_ms(50);
}
