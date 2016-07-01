/* Copyright 2016, XXXXXX
 * All rights reserved.
 *
 * This file is part of CIAA Firmware.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

/** \brief Blinking Bare Metal example source file
 **
 ** This is a mini example of the CIAA Firmware.
 **
 **/

/** \addtogroup CIAA_Firmware CIAA Firmware
 ** @{ */

/** \addtogroup Examples CIAA Firmware Examples
 ** @{ */
/** \addtogroup Baremetal Bare Metal example source file
 ** @{ */

/*
 * Initials     Name
 * ---------------------------
 *
 */

/*
 * modification history (new versions first)
 * -----------------------------------------------------------
 * yyyymmdd v0.0.1 initials initial version
 */

/*==================[inclusions]=============================================*/
#include "Prende_Led_Tecla.h"       /* <= own header */
#include "led.h"
#include "pulsador.h"
//#include "led.h"


/*==================[macros and definitions]=================================*/

/*==================[internal data declaration]==============================*/

/*==================[internal functions declaration]=========================*/


/*==================[internal data definition]===============================*/
uint32_t TeclaPulsada;

/*==================[external data definition]===============================*/

/*==================[internal functions definition]==========================*/
void Delay(uint32_t ncuentas)
{
	volatile uint32_t iDelay, jDelay;

/*	for (iDelay = 0; iDelay < NDELAY; iDelay++ )*/
	for (iDelay = 0; iDelay < ncuentas; iDelay++ )
	{
		jDelay= jDelay +1;
	}
}


/*==================[external functions definition]==========================*/
/** \brief Main function
 *
 * This is the main entry point of the software.
 *
 * \returns 0
 *
 * \remarks This function never returns. Return value is only to avoid compiler
 *          warnings or errors.
 */



int main(void)
{
	Init_Leds();


	Enciende(AMARILLO);
	Delay(NDELAY);
	Apaga_Led(AMARILLO);
	Delay(NDELAY);
	Enciende(ROJOL);
	Delay(NDELAY);
	Apaga_Led(ROJOL);
	Delay(NDELAY);
	Enciende(VERDEL);
	Delay(NDELAY);
	Apaga_Led(VERDEL);
	Delay(NDELAY);
	Enciende(ROJO);
	Delay(NDELAY);
	Apaga_Led(ROJO);
	Delay(NDELAY);
	Enciende(VERDE);
	Delay(NDELAY);
	Apaga_Led(VERDE);
	Delay(NDELAY);
	Enciende(AZUL);
	Delay(NDELAY);
	Apaga_Led(AZUL);
	Delay(NDELAY);


	Invierte_Led(AMARILLO);
	Delay(4*NDELAY);
	Invierte_Led(AMARILLO);
	Delay(2*NDELAY);
	Invierte_Led(ROJOL);
	Delay(4*NDELAY);
	Invierte_Led(ROJOL);
	Delay(2*NDELAY);
	Invierte_Led(VERDEL);
	Delay(30*NDELAY);
	Invierte_Led(VERDEL);

	Delay(2*NDELAY);
	Invierte_Led(AZUL);
	Delay(4*NDELAY);
	Invierte_Led(AZUL);
	Delay(2*NDELAY);

	Invierte_Led(VERDE);
	Delay(4*NDELAY);
	Invierte_Led(VERDE);
	Delay(2*NDELAY);

	Invierte_Led(ROJO);
	Delay(4*NDELAY);
	Invierte_Led(ROJO);
	Delay(2*NDELAY);

	Init_Teclas();

	while(1)
	{
		Enciende(AMARILLO);
		Delay(NDELAY);
		Apaga_Led(AMARILLO);
		Delay(NDELAY);
		TeclaPulsada =1;
		TeclaPulsada = Lee_Teclas(Tecla_1);
		if (TeclaPulsada==0)
		{
			Enciende(ROJOL);
			Delay(NDELAY);
			Apaga_Led(ROJOL);
			Delay(NDELAY);
		}
		TeclaPulsada =1;
		TeclaPulsada = Lee_Teclas(Tecla_2);
		if (TeclaPulsada==0)
		{
			Invierte_Led(VERDEL);
			Delay(30*NDELAY);
			Invierte_Led(VERDEL);
			Delay(2*NDELAY);
		}
		TeclaPulsada =1;
		TeclaPulsada = Lee_Teclas(Tecla_3);
		if (TeclaPulsada==0)
		{
			Enciende(ROJOL);
			Delay(NDELAY);
			Apaga_Led(ROJOL);
			Delay(NDELAY);
		}
		TeclaPulsada =1;
		TeclaPulsada = Lee_Teclas(Tecla_4);
		if (TeclaPulsada==0)
		{
			Invierte_Led(AZUL);
			Delay(4*NDELAY);
			Invierte_Led(AZUL);
			Delay(2*NDELAY);
		}
		}
}

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/

