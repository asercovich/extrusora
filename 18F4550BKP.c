#include <18F4550.h>
#device adc=10
#fuses HSPLL, PLL5, USBDIV, CPUDIV1, NOWDT,NOPROTECT,NOLVP,NODEBUG,VREGEN,NOMCLR,PUT, NOBROWNOUT //
#use delay(clock=48m)

//#USE i2c (slave, SDA=PIN_B0, fast, SCL=PIN_B1,ADDRESS=0X06, FORCE_HW)

//#use standard_io(B)
//#use standard_io(c)
//#use standard_io(d)

#include<FLEX_LCD420.c> //Dedino los pines de conexión del LCS en el driver FLEX_LCD420.c
#include <stdlib.h>
#include<TECLADO2.c>
#include<Pantallas.c>
#include<Adquirir_Datos.c>

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

#define BEEP pin_B7
#define RESISTENCIA_Z1 pin_D3
#define RESISTENCIA_Z2 pin_D4
#define RESISTENCIA_Z3 pin_C7
#define RESISTENCIA_Z4 pin_D6
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




INT FLAG_RESIST=0;



/*
PUERTO A
A0    TERMOCUPLA_Z1
A1    TERMOCUPLA_Z2
A2    TERMOCUPLA_Z3
A3    REF+
A4    COOLER MOTOR
A5    TEMP AMB
A6    XTAL
A7    XTAL

PUERTO B
B0    RS LCD
B1    R/W LCD
B2    E_LCD
B3    D4 LCD
B4    D5 LCD
B5    D6 LCD
B6    D7 LCD
B7    BEEP

PUERTO C
C0    CONTACTOR_MOTOR
C1    ELECTROVALVULA_Z1
C2    CONTACTOR_PELETIZADORA
C3    USB
C4    USB
C5    USB
C6    CONTACTOR_TEMPERATURA
C7    RESISTENCIA_Z3

PUERTO D
D0    ELECTROVALVULA_Z3
D1    ELECTROVALVULA_Z2
D2    MONITOR_FASES
D3    RESISTENCIA_Z1
D4    RESISTENCIA_Z2
D5    ELECTROVALVULA_Z4
D6    RESISTENCIA_Z4
D7    SW_TEMPERATURAS

PUERTO E
E0    TEMPERATURA_MOTOR
E1    CORRIENTE_MOTOR
E2    TERMOCUPLA_Z4
E3    RPM_MOTOR
*/


///////////////////////////////////////////////////////////////////////////////////////////////
//Reincipal
///////////////////////////////////////////////////////////////////////////////////////////////

 

void main() {  
 
   set_tris_a (0b00111111);
   set_tris_b (0b00000000);
   set_tris_c (0b01111011);// EN REAL (0b00000000);
   set_tris_d (0b00000000);
   set_tris_e (0b00000111);
   
   PORTA = 0;
   PORTB = 0;
   PORTC = 0;
   PORTD = 0;
   
   //setup_adc_ports (an0);
   setup_adc_ports( AN0_TO_AN7 ); 
   setup_adc (adc_clock_internal); 
   //setup_adc(ADC_CLOCK_DIV_64);
   #asm
   BCF      CVRCON,7;      //REF DE COMPARADOR DISBLE
   BSF      CMCON,0;       //APAGO COMPARADORES
   BSF      CMCON,1;
   BSF      CMCON,2;
   BCF      ADCON1,5;      //REF- A MASA
   BSF      ADCON1,4;      //REF+ EN PA3
   
   //A/D Conversion Clock Select bits
   BCF      ADCON2,0; 
   BSF      ADCON2,1; 
   BSF      ADCON2,2; 
   //Time Select bits
   BSF      ADCON2,3;
   BSF      ADCON2,4;
   BSF      ADCON2,5;
   
   
   #endasm 
   
   OUTPUT_low(BEEP);
   
   lcd_init();
   lcd_gotoxy(1,1);
   lcd_putc("H2-Tec");
   lcd_gotoxy(1,3);
   lcd_putc("Sistema de extrusion");
   lcd_gotoxy(1,4);
   lcd_putc("Version 1.0");
   
   OUTPUT_HIGH(BEEP);
   delay_ms(50);
   OUTPUT_LOW(BEEP);
   
   //delay_ms(2000);
   delay_ms(100);
   
   OUTPUT_HIGH(BEEP);
   delay_ms(50);
   OUTPUT_LOW(BEEP);
   delay_ms(50);
   OUTPUT_HIGH(BEEP);
   delay_ms(50);
   OUTPUT_LOW(BEEP);
   delay_ms(50);
   
   
   lcd_gotoxy(1,1);
   lcd_putc("                    "); 
   lcd_gotoxy(1,2);
   lcd_putc("                    ");  
   lcd_gotoxy(1,3);
   lcd_putc("                    ");  
   lcd_gotoxy(1,4);
   lcd_putc("                    ");  
   
   
   SP_Z4_L = READ_EEPROM(0);
   SP_Z4_H = READ_EEPROM(1); 
   SP_Z4 = (SP_Z4_H << 8);
   SP_Z4 = (SP_Z4 | SP_Z4_L);
   
   //SP_Z4 = READ_EEPROM(0);
   lcd_gotoxy(18,4);
   printf(lcd_putc,"%lU" (SP_Z4));

   
  
///////////////////////////////////////////////////////////////////////////////////////////////
//Loop infinito
///////////////////////////////////////////////////////////////////////////////////////////////

   while(TRUE){

   Pantallas();
   
   Adquirir();
   
   //PRUEBA PLACA TEMP / MOTOR
   //----------------------------
   

   
         
   
   /*
   OUTPUT_HIGH(COOLER_MOTOR);
   delay_ms(1000);
   OUTPUT_LOW(COOLER_MOTOR);
   delay_ms(1000); 
   */
   
   
   
   
   
   /*
   //PRUEBA PLACA TRIAC
   OUTPUT_HIGH(RESISTENCIA_Z1);
   OUTPUT_HIGH(RESISTENCIA_Z2);
   OUTPUT_HIGH(RESISTENCIA_Z3);
   OUTPUT_HIGH(RESISTENCIA_Z4);
   OUTPUT_HIGH(CONTACTOR_MOTOR);
   OUTPUT_HIGH(CONTACTOR_TEMPERATURA);
   OUTPUT_HIGH(CONTACTOR_PELETIZADORA);
   //OUTPUT_HIGH(COOLER_MOTOR);
   delay_ms(250);
   //PORTd = 0;
   OUTPUT_LOW(RESISTENCIA_Z1);
   OUTPUT_LOW(RESISTENCIA_Z2);
   OUTPUT_LOW(RESISTENCIA_Z3);
   OUTPUT_LOW(RESISTENCIA_Z4);
   OUTPUT_LOW(CONTACTOR_MOTOR);
   OUTPUT_LOW(CONTACTOR_TEMPERATURA);
   OUTPUT_LOW(CONTACTOR_PELETIZADORA);
   //OUTPUT_LOW(COOLER_MOTOR);
   delay_ms(250);
  */ 
   
   //TECLADO
   Teclado();
   
   
   
}

