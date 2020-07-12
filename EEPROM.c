
void SP(){
//SP Z4
          SP_Z4_L = 0;
          SP_Z4_H = 0;
          if (bit_test(SP_Z4,0) == 1 ) bit_SET(SP_Z4_L,0);
          if (bit_test(SP_Z4,1) == 1 ) bit_SET(SP_Z4_L,1);
          if (bit_test(SP_Z4,2) == 1 ) bit_SET(SP_Z4_L,2);
          if (bit_test(SP_Z4,3) == 1 ) bit_SET(SP_Z4_L,3);
          if (bit_test(SP_Z4,4) == 1 ) bit_SET(SP_Z4_L,4);
          if (bit_test(SP_Z4,5) == 1 ) bit_SET(SP_Z4_L,5);
          if (bit_test(SP_Z4,6) == 1 ) bit_SET(SP_Z4_L,6);
          if (bit_test(SP_Z4,7) == 1 ) bit_SET(SP_Z4_L,7);
          if (bit_test(SP_Z4,8) == 1 ) bit_SET(SP_Z4_H,0);
          bit_CLEAR(SP_Z4_H,9);
          bit_CLEAR(SP_Z4_H,10);
          bit_CLEAR(SP_Z4_H,11);
          bit_CLEAR(SP_Z4_H,12);
          bit_CLEAR(SP_Z4_H,13);
          bit_CLEAR(SP_Z4_H,14);
          bit_CLEAR(SP_Z4_H,15);
          //if (bit_test(SP_Z4,8) == 1 ) bit_SET(SP_Z4_H,1);          
          WRITE_EEPROM(0, SP_Z4_L);
          WRITE_EEPROM(1, SP_Z4_H);
          
//SP Z3
          SP_Z3_L = 0;
          SP_Z3_H = 0;
          if (bit_test(SP_Z3,0) == 1 ) bit_SET(SP_Z3_L,0);
          if (bit_test(SP_Z3,1) == 1 ) bit_SET(SP_Z3_L,1);
          if (bit_test(SP_Z3,2) == 1 ) bit_SET(SP_Z3_L,2);
          if (bit_test(SP_Z3,3) == 1 ) bit_SET(SP_Z3_L,3);
          if (bit_test(SP_Z3,4) == 1 ) bit_SET(SP_Z3_L,4);
          if (bit_test(SP_Z3,5) == 1 ) bit_SET(SP_Z3_L,5);
          if (bit_test(SP_Z3,6) == 1 ) bit_SET(SP_Z3_L,6);
          if (bit_test(SP_Z3,7) == 1 ) bit_SET(SP_Z3_L,7);
          if (bit_test(SP_Z3,8) == 1 ) bit_SET(SP_Z3_H,0);
          bit_CLEAR(SP_Z3_H,9);
          bit_CLEAR(SP_Z3_H,10);
          bit_CLEAR(SP_Z3_H,11);
          bit_CLEAR(SP_Z3_H,12);
          bit_CLEAR(SP_Z3_H,13);
          bit_CLEAR(SP_Z3_H,14);
          bit_CLEAR(SP_Z3_H,15);
          //if (bit_test(SP_Z4,8) == 1 ) bit_SET(SP_Z4_H,1);          
          WRITE_EEPROM(2, SP_Z3_L);
          WRITE_EEPROM(3, SP_Z3_H);
          
//SP Z2
          SP_Z2_L = 0;
          SP_Z2_H = 0;
          if (bit_test(SP_Z2,0) == 1 ) bit_SET(SP_Z2_L,0);
          if (bit_test(SP_Z2,1) == 1 ) bit_SET(SP_Z2_L,1);
          if (bit_test(SP_Z2,2) == 1 ) bit_SET(SP_Z2_L,2);
          if (bit_test(SP_Z2,3) == 1 ) bit_SET(SP_Z2_L,3);
          if (bit_test(SP_Z2,4) == 1 ) bit_SET(SP_Z2_L,4);
          if (bit_test(SP_Z2,5) == 1 ) bit_SET(SP_Z2_L,5);
          if (bit_test(SP_Z2,6) == 1 ) bit_SET(SP_Z2_L,6);
          if (bit_test(SP_Z2,7) == 1 ) bit_SET(SP_Z2_L,7);
          if (bit_test(SP_Z2,8) == 1 ) bit_SET(SP_Z2_H,0);
          bit_CLEAR(SP_Z2_H,9);
          bit_CLEAR(SP_Z2_H,10);
          bit_CLEAR(SP_Z2_H,11);
          bit_CLEAR(SP_Z2_H,12);
          bit_CLEAR(SP_Z2_H,13);
          bit_CLEAR(SP_Z2_H,14);
          bit_CLEAR(SP_Z2_H,15);
          //if (bit_test(SP_Z4,8) == 1 ) bit_SET(SP_Z4_H,1);          
          WRITE_EEPROM(4, SP_Z2_L);
          WRITE_EEPROM(5, SP_Z2_H);
          
//SP Z1
          SP_Z1_L = 0;
          SP_Z1_H = 0;
          if (bit_test(SP_Z1,0) == 1 ) bit_SET(SP_Z1_L,0);
          if (bit_test(SP_Z1,1) == 1 ) bit_SET(SP_Z1_L,1);
          if (bit_test(SP_Z1,2) == 1 ) bit_SET(SP_Z1_L,2);
          if (bit_test(SP_Z1,3) == 1 ) bit_SET(SP_Z1_L,3);
          if (bit_test(SP_Z1,4) == 1 ) bit_SET(SP_Z1_L,4);
          if (bit_test(SP_Z1,5) == 1 ) bit_SET(SP_Z1_L,5);
          if (bit_test(SP_Z1,6) == 1 ) bit_SET(SP_Z1_L,6);
          if (bit_test(SP_Z1,7) == 1 ) bit_SET(SP_Z1_L,7);
          if (bit_test(SP_Z1,8) == 1 ) bit_SET(SP_Z1_H,0);
          
          if (bit_test(SP_Z1,9) == 1 ) bit_SET(SP_Z1_H,1);
          /*
          if (bit_test(SP_Z1.10) == 1 ) bit_SET(SP_Z1_H.2);
          if (bit_test(SP_Z1.11) == 1 ) bit_SET(SP_Z1_H.3);
          if (bit_test(SP_Z1.12) == 1 ) bit_SET(SP_Z1_H.4);
          if (bit_test(SP_Z1.13) == 1 ) bit_SET(SP_Z1_H.5);
          if (bit_test(SP_Z1,14) == 1 ) bit_SET(SP_Z1_H.6);
          if (bit_test(SP_Z1.15) == 1 ) bit_SET(SP_Z1_H.7);
          */
          
          bit_CLEAR(SP_Z1_H,9);
          bit_CLEAR(SP_Z1_H,10);
          bit_CLEAR(SP_Z1_H,11);
          bit_CLEAR(SP_Z1_H,12);
          bit_CLEAR(SP_Z1_H,13);
          bit_CLEAR(SP_Z1_H,14);
          bit_CLEAR(SP_Z1_H,15);
          
          WRITE_EEPROM(6, SP_Z1_L);
          WRITE_EEPROM(7, SP_Z1_H);
          
//SP I_MOT
          SP_I_MOT_L = 0;
          SP_I_MOT_H = 0;
          if (bit_test(SP_I_MOT,0) == 1 ) bit_SET(SP_I_MOT_L,0);
          if (bit_test(SP_I_MOT,1) == 1 ) bit_SET(SP_I_MOT_L,1);
          if (bit_test(SP_I_MOT,2) == 1 ) bit_SET(SP_I_MOT_L,2);
          if (bit_test(SP_I_MOT,3) == 1 ) bit_SET(SP_I_MOT_L,3);
          if (bit_test(SP_I_MOT,4) == 1 ) bit_SET(SP_I_MOT_L,4);
          if (bit_test(SP_I_MOT,5) == 1 ) bit_SET(SP_I_MOT_L,5);
          if (bit_test(SP_I_MOT,6) == 1 ) bit_SET(SP_I_MOT_L,6);
          if (bit_test(SP_I_MOT,7) == 1 ) bit_SET(SP_I_MOT_L,7);
          if (bit_test(SP_I_MOT,8) == 1 ) bit_SET(SP_I_MOT_H,0);
          bit_CLEAR(SP_I_MOT_H,9);
          bit_CLEAR(SP_I_MOT_H,10);
          bit_CLEAR(SP_I_MOT_H,11);
          bit_CLEAR(SP_I_MOT_H,12);
          bit_CLEAR(SP_I_MOT_H,13);
          bit_CLEAR(SP_I_MOT_H,14);
          bit_CLEAR(SP_I_MOT_H,15);
          //if (bit_test(SP_Z4,8) == 1 ) bit_SET(SP_Z4_H,1);          
          WRITE_EEPROM(8, SP_I_MOT_L);
          WRITE_EEPROM(9, SP_I_MOT_H);
          
//SP T_MOT
          SP_T_MOT_L = 0;
          SP_T_MOT_H = 0;
          if (bit_test(SP_T_MOT,0) == 1 ) bit_SET(SP_T_MOT_L,0);
          if (bit_test(SP_T_MOT,1) == 1 ) bit_SET(SP_T_MOT_L,1);
          if (bit_test(SP_T_MOT,2) == 1 ) bit_SET(SP_T_MOT_L,2);
          if (bit_test(SP_T_MOT,3) == 1 ) bit_SET(SP_T_MOT_L,3);
          if (bit_test(SP_T_MOT,4) == 1 ) bit_SET(SP_T_MOT_L,4);
          if (bit_test(SP_T_MOT,5) == 1 ) bit_SET(SP_T_MOT_L,5);
          if (bit_test(SP_T_MOT,6) == 1 ) bit_SET(SP_T_MOT_L,6);
          if (bit_test(SP_T_MOT,7) == 1 ) bit_SET(SP_T_MOT_L,7);
          if (bit_test(SP_T_MOT,8) == 1 ) bit_SET(SP_T_MOT_H,0);
          bit_CLEAR(SP_T_MOT_H,9);
          bit_CLEAR(SP_T_MOT_H,10);
          bit_CLEAR(SP_T_MOT_H,11);
          bit_CLEAR(SP_T_MOT_H,12);
          bit_CLEAR(SP_T_MOT_H,13);
          bit_CLEAR(SP_T_MOT_H,14);
          bit_CLEAR(SP_T_MOT_H,15);
          //if (bit_test(SP_Z4,8) == 1 ) bit_SET(SP_Z4_H,1);          
          WRITE_EEPROM(10, SP_T_MOT_L);
          WRITE_EEPROM(11, SP_T_MOT_H);

}
