/*
 * TbUart.h
 *
 *  Created on: ٢٤‏/٠١‏/٢٠١٧
 *      Author: El-safi
 */

#ifndef TBUART_H_
#define TBUART_H_
#include "std_data_types_EKE.h"

extern void TbUart_init(void);
/* ******************************************
 * Function   ::-extern void TbUart_init(void);
 *
 *              -baudRATE 9600 ,2 stopbits,no parity,8bits frame,no enterrupt
 *
 * parameters :: void
 *
 * return     :: void
 *
 * ******************************************/

extern void TbUart_Send_char(U8_t letter);
/* ******************************************
 * Function   ::-extern void TbUart_Send_char(U8_t letter);
 *
 * parameters :: U8_t letter
 *
 * return     :: void
 *
 * ******************************************/

extern U8_t TbUart_get_char(void);
/* ******************************************
 * Function   ::extern U8_t TbUart_get_char(void);
 *
 * parameters :: void
 *
 * return     :: 1 byte
 *
 * ******************************************/

extern void TbUart_Send_stri(U8_t *phrase);
/* ******************************************
 * Function   ::extern void TbUart_Send_stri(U8_t *phrase);
 *
 * parameters :: pointer to string  < (U8_t*)"     " >
 *
 * return     :: void
 *
 * ******************************************/

extern U8_t* TbUart_get_stri(void);
/* ******************************************
 * Function   ::extern U8_t* TbUart_get_stri(void);
 *
 * parameters :: void
 *
 * return     :: addresse of string
 *
 * ******************************************/

U8_t string_compare_EKE(char array[],char *string_data);
/* ******************************************
 * Function   ::U8_t string_compare_EKE(char array[],char *string_data);
 *
 * parameters :: array name as its addresse,, pointer to string  < (U8_t*)"     " >
 *
 * return     :: 1 if it identical or 0 if false
 *
 * ******************************************/

void string_copy_EKE(char *st_data,char *string_copy);
/* ******************************************
 * Function   ::void string_copy_EKE(char *st_data,char *string_copy);
 *
 * parameters :: pointer to string  < (U8_t*)"     " >,,pointer to string  < (U8_t*)"     " >
 *
 * return     :: void
 *
 * ******************************************/

U8_t string_length_EKE(char *s_data);
/* ******************************************
 * Function   ::U8_t string_length_EKE(char *s_data);
 *
 * parameters ::pointer to string  < (U8_t*)"     " >
 *
 * return     :: Number of charachters
 *
 * ******************************************/


#endif /* TBUART_H_ */
