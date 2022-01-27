/*
 * function.c
 *
 *  Created on: Jan 22, 2022
 *      Author: jakub
 */
#include "gpio.h"
  void wyswietlacz (int cyfra, int port){
  	  // obsługa cyfr
	  switch(cyfra){
	  case (0):
  		  HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,GPIO_PIN_RESET) ;
  		  break;
	  case (1):
  		  HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,GPIO_PIN_RESET) ;
  		  break;
	  case (2):
  		  HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,GPIO_PIN_SET) ;
  		  break;
  	 case (3):
  		  HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,GPIO_PIN_SET) ;
  		  break;
  	 case (4):
  		  HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,GPIO_PIN_SET) ;
  		  break;
  	 case (5):
  		  HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,GPIO_PIN_SET) ;
  		  break;
  	 case (6):
  		  HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,GPIO_PIN_SET) ;
  		  break;
  	 case (7):
  		  HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,GPIO_PIN_RESET) ;
  		  break;
  	 case (8):
  		  HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,GPIO_PIN_SET) ;
  		  break;
  	 case (9):
  		  HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,GPIO_PIN_RESET) ;
  		  HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,GPIO_PIN_SET) ;
  		  HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,GPIO_PIN_SET) ;
  		  break;
	  }

  	 // obsługa portów
	 switch(port){
	 case (1):
  		 HAL_GPIO_WritePin(COM1_GPIO_Port,COM1_Pin,GPIO_PIN_RESET) ;
  		 HAL_GPIO_WritePin(COM2_GPIO_Port,COM2_Pin,GPIO_PIN_SET) ;
  		 HAL_GPIO_WritePin(COM3_GPIO_Port,COM3_Pin,GPIO_PIN_SET) ;
  		 HAL_GPIO_WritePin(COM4_GPIO_Port,COM4_Pin,GPIO_PIN_SET) ;
 		 break;
	 case (2):
  		 HAL_GPIO_WritePin(COM1_GPIO_Port,COM1_Pin,GPIO_PIN_SET) ;
  		 HAL_GPIO_WritePin(COM2_GPIO_Port,COM2_Pin,GPIO_PIN_RESET) ;
  		 HAL_GPIO_WritePin(COM3_GPIO_Port,COM3_Pin,GPIO_PIN_SET) ;
  		 HAL_GPIO_WritePin(COM4_GPIO_Port,COM4_Pin,GPIO_PIN_SET) ;
 		 break;
	 case (3):
  		 HAL_GPIO_WritePin(COM1_GPIO_Port,COM1_Pin,GPIO_PIN_SET) ;
  		 HAL_GPIO_WritePin(COM2_GPIO_Port,COM2_Pin,GPIO_PIN_SET) ;
  		 HAL_GPIO_WritePin(COM3_GPIO_Port,COM3_Pin,GPIO_PIN_RESET) ;
  		 HAL_GPIO_WritePin(COM4_GPIO_Port,COM4_Pin,GPIO_PIN_SET) ;
 		 break;
	 case (4):
  		 HAL_GPIO_WritePin(COM1_GPIO_Port,COM1_Pin,GPIO_PIN_SET) ;
  		 HAL_GPIO_WritePin(COM2_GPIO_Port,COM2_Pin,GPIO_PIN_SET) ;
  		 HAL_GPIO_WritePin(COM3_GPIO_Port,COM3_Pin,GPIO_PIN_SET) ;
  		 HAL_GPIO_WritePin(COM4_GPIO_Port,COM4_Pin,GPIO_PIN_RESET) ;
 		 break;
	 }



   }

