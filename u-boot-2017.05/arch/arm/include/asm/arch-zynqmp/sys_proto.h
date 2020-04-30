/*
 * (C) Copyright 2014 - 2015 Xilinx, Inc.
 * Michal Simek <michal.simek@xilinx.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef _ASM_ARCH_SYS_PROTO_H
#define _ASM_ARCH_SYS_PROTO_H

int zynq_slcr_get_mio_pin_status(const char *periph);

unsigned int zynqmp_get_silicon_version(void);

void psu_init(void);

void handoff_setup(void);

#endif /* _ASM_ARCH_SYS_PROTO_H */
