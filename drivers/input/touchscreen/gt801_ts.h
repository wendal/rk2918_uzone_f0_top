/*
 * drivers/input/touchscreen/gt801_ts.h
 *
 * Copyright (C) 2010 ROCKCHIP, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __DRIVERS_TOUCHSCREEN_GT801_TS_H
#define __DRIVERS_TOUCHSCREEN_GT801_TS_H

enum regadd {
	ptxh = 0, ptxl = 1, ptyh = 2, ptyl = 3, ptpressure = 4,
};
enum touchstate {
	TOUCH_UP = 0, TOUCH_DOWN = 1,
};	

#endif
