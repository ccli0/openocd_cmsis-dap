/***************************************************************************
 *   Copyright (C) 2022 by Nuvoton Technology Corporation Japan            *
 *   Naotoshi Izumi <izumi.naotoshi@nuvoton.com>                           *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 ***************************************************************************/

#ifndef OPENOCD_FLASH_NOR_KM1MXXX_H
#define OPENOCD_FLASH_NOR_KM1MXXX_H

/* flash MAX banks */
#define KM1MXXX_MAX_FLASH_BANKS		6

/* flash bank structs */
struct km1mxxx_flash_bank_type {
	uint32_t base;
	uint32_t size;
};

/* part structs */
struct km1mxxx_cpu_type {
	char *partname;
	uint32_t partid;
	unsigned int flash_type;
	unsigned int n_banks;
	struct km1mxxx_flash_bank_type bank[KM1MXXX_MAX_FLASH_BANKS];
};

struct km1mxxx_flash_bank {
	int		probed;
	const struct km1mxxx_cpu_type *cpu;
};

#endif /* OPENOCD_FLASH_NOR_KM1MXXX_H */
