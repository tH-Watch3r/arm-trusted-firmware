/*
 * Copyright (c) 2017-2019, STMicroelectronics - All Rights Reserved
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef STM32MP_PMIC_H
#define STM32MP_PMIC_H

#include <stdbool.h>

#include <platform_def.h>

bool dt_check_pmic(void);
int dt_pmic_enable_boot_on_regulators(void);
void initialize_pmic_i2c(void);
void initialize_pmic(void);
int pmic_ddr_power_init(enum ddr_type ddr_type);

#endif /* STM32MP_PMIC_H */
