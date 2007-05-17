
/*
    Based on the lis driver Copyright (C) 2006, Bernhard Walle
    Copyright (c) 2007, Daryl Fonseca-Holt <wyatt@prairieturtle.ca>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 */
#ifndef LIS_H
#define LIS_H

#include "lcd.h"

#ifndef bool
# define bool short
# define true 1
# define false 0
#endif

MODULE_EXPORT int  lis_init(Driver *drvthis);
MODULE_EXPORT void lis_close (Driver *drvthis);
MODULE_EXPORT int  lis_width (Driver *drvthis);
MODULE_EXPORT int  lis_height (Driver *drvthis);
MODULE_EXPORT void lis_clear (Driver * drvthis);
MODULE_EXPORT void lis_string (Driver * drvthis, int x, int y, char string[]);
MODULE_EXPORT void lis_chr (Driver * drvthis, int x, int y, char c);
MODULE_EXPORT void lis_set_char (Driver * drvthis, int n, char *dat);
MODULE_EXPORT void lis_flush (Driver * drvthis);
MODULE_EXPORT void lis_vbar (Driver * drvthis, int x, int y, int len, int promille, int options);
MODULE_EXPORT void lis_hbar (Driver * drvthis, int x, int y, int len, int promille, int options);
MODULE_EXPORT void lis_num (Driver * drvthis, int x, int num);
MODULE_EXPORT int  lis_icon(Driver * drvthis, int x, int y, int icon);

#endif /* LIS_H */