//18F

#byte PORTA = 0xF80
#byte PORTB = 0xF81
#byte PORTC = 0xF82
#byte PORTD = 0xF83
#byte PORTE = 0xF84
#byte TRISB = 0xf93
#byte ADRESH = 0xfc4
#byte ADRESL = 0xfc3
#byte CMCON = 0xfB4
#byte CVRCON = 0xfB5
#byte ADCON1 = 0xfC1
#byte ADCON2 = 0xfC0
#byte STATUS = 0xFD8
#byte SPPCON = 0xF65

#define BEEP pin_B7
#define RESISTENCIA_Z1 pin_D5
#define RESISTENCIA_Z2 pin_D6
#define RESISTENCIA_Z3 pin_D0
#define RESISTENCIA_Z4 pin_C1

#define ELECTROVALVULA_Z3 pin_D4
#define ELECTROVALVULA_Z4 pin_C7
/*
#define ELECTROVALVULA_Z1 pin_C1
#define ELECTROVALVULA_Z2 pin_D1
#define ELECTROVALVULA_Z3 pin_D0
#define ELECTROVALVULA_Z4 pin_D5
#define CONTACTOR_MOTOR pin_C0
#define CONTACTOR_TEMPERATURA pin_C6
#define CONTACTOR_PELETIZADORA pin_C2
#define MONITOR_FASES pin_D2
#define RPM_MOTOR pin_E2
#define COOLER_MOTOR pin_A4
#define TEMPERATURA_MOTOR pin_E0
#define CORRIENTE_MOTOR pin_E1
#define TEMPERATURA_AMBIENTE pin_A5
#define TERMOCUPLA_Z1 pin_A0
#define TERMOCUPLA_Z2 pin_A1
#define TERMOCUPLA_Z3 pin_A2
#define TERMOCUPLA_Z4 pin_A3
#define SW_TEMPERATURAS pin_D7
*/
#define DIR_SPZ1     6
#define DIR_SPZ2     4
#define DIR_SPZ3     2
#define DIR_SPZ4     0
#define DIR_SP_T_MOT 10
#define DIR_SP_I_MOT 8
#define DIR_MAX_Z1   12
#define DIR_MAX_Z2   14
#define DIR_MAX_Z3   16
#define DIR_MAX_Z4   18
#define DIR_OFF_Z1   20
#define DIR_OFF_Z2   22
#define DIR_OFF_Z3   24
#define DIR_OFF_Z4   26
#define DIR_MAX_MOT  28
#define DIR_MAX_AMB  30
#define DIR_OFF_MOT  32
#define DIR_OFF_AMB  34

INT32 ADC_TERMOCUPLA_Z1 =0;
INT32 ADC_TERMOCUPLA_Z2 =0;
INT32 ADC_TERMOCUPLA_Z3 =0;
INT32 ADC_TERMOCUPLA_Z4 =0;
INT32 ADC_TEMPERATURA_AMBIENTE =0;
INT32 ADC_TEMPERATURA_MOTOR =0;


FLOAT Temp_Z1;
FLOAT Temp_Z2;
FLOAT Temp_Z3;
FLOAT Temp_Z4;
INT16 Temp_Mot;
INT16 Temp_Amb;
INT16 flag;

INT16 SP_Z1=0 ;
INT16 SP_Z2=0 ;
INT16 SP_Z3=0 ;
INT16 SP_Z4=0 ;
INT16 SP_I_MOT ;
INT16 SP_T_MOT ;

INT16 OFFSET_Z1;
INT16 OFFSET_Z2;
INT16 OFFSET_Z3;
INT16 OFFSET_Z4;
INT16 OFFSET_AMB;
INT16 OFFSET_MOT;

INT16 MAX_Z1;
INT16 MAX_Z2;
INT16 MAX_Z3;
INT16 MAX_Z4;
INT16 MAX_AMB;
INT16 MAX_MOT;
//teclado2
#byte PORT = 0xF81
#byte PORTB = 0xF81
#byte TRISB = 0xf93
#byte PORTC = 0xF82
//#define BEEP pin_B7

INT8 Pantalla_actual=0;

//INT8 PANTALLAS_1=1;
//INT8 PANTALLAS_2=1;
//INT8 PANTALLAS_3=0;

//eeprom



INT8 flag_programacion=0;
INT8 CONTADOR_SP = 1; // CONTIENE EL VALOS DEL SET POINT SELECCIONADO 
INT8 FLAG_BOTON = 0; // REGISTRO DE FLAGS DE LOS BOTONED
#bit FLAG_CENTRO_SP = FLAG_BOTON.4 //0 = FUERA DEL MODO DE PROGRAMACION DE LOS SET POINTS / 1 = MODO DE PROGRAMACION DE LOS SET POINTS
#bit FLAG_FIN_SP1 = FLAG_BOTON.3 // FLAG QUE INDICA CUANDO GUARDAR EN EEPROM
#bit FLAG_FIN_SP2 = FLAG_BOTON.2


#include<FLEX_LCD420.c> //Dedino los pines de conexi�n del LCS en el driver FLEX_LCD420.c
#include <stdlib.h>
#include<Base.c>
#include<TECLADO2.c>
#include<Pantallas.c>
#include<Modo_programacion.c>


int8 CS;
#include "MAX6675.c"
const unsigned char degree_symbol[8]= 
{
   0x00, 0x06, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00
}; 
   unsigned char unit = deg_C;
   unsigned char state = close_contact;
   //unsigned long ti = 0x0000;
   int16 ti = 0x0000;
   float tf = 0.0;
   

#include<Adquirir_Datos.c>

INT16 CONTA=0;
