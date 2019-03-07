/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2019 Intel Corp.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

scope(\_SB)
{
	Device(LPID) {
	Name(_ADR, 0x00000000)
	Name(_CID, EISAID("PNP0D80"))
	Name(UUID,
		ToUUID("c4eb40a0-6cd2-11e2-bcfd-0800200c9a66"))
		Method(_DSM, 4) {
			If(Arg0 == ^UUID) {
			/*
			 * Enum functions
			 */
			If(Arg2 == Zero) {
				Return(Buffer(One) {
				       0x60}
				)
			}
			/*
			 * Function 1.
			 */
			If(Arg2 == 1) {
				Return(Package(5) {
				       0, Ones, Ones, Ones, Ones}
				)
			}
			/*
			 * Function 2.
			 */
			If(Arg2 == 2) {
				Return(Buffer(One) {
				       0x0}
				)
			}
			/*
			 * Function 3.
			 */
			If(Arg2 == 3) {
			}
			/*
			 * Function 4.
			 */
			If(Arg2 == 4) {
			}
			/*
			 * Function 5.
			 */
			If(Arg2 == 5) {
				\_SB.PCI0.LPCB.EC0.S0IX(1)
			}
			/*
			 * Function 6.
			 */
			If(Arg2 == 6) {
				\_SB.PCI0.LPCB.EC0.S0IX(0)
			}
		}
		Return(Buffer(One) {0x00})
		}		// Method(_DSM)
	}			// device (LPID)
}				// End Scope(\_SB)
