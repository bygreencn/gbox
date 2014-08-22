/*!The Graphic Box Library
 * 
 * GBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * GBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with GBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2014 - 2015, ruki All rights reserved.
 *
 * @author      ruki
 * @file        device.h
 * @ingroup     core
 *
 */
#ifndef GB_CORE_DEVICE_H
#define GB_CORE_DEVICE_H

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"
#include "window.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * types
 */

/// the device type enum
typedef enum __gb_device_type_e
{
    GB_DEVICE_TYPE_NONE     = 0
,   GB_DEVICE_TYPE_GL       = 1
,   GB_DEVICE_TYPE_BITMAP   = 2
,   GB_DEVICE_TYPE_SKIA     = 3

}gb_device_type_e;

/* //////////////////////////////////////////////////////////////////////////////////////
 * interfaces
 */
__tb_extern_c_enter__

/*! init device from window
 *
 * @param window    the window
 *
 * @return          the device
 */
gb_device_ref_t     gb_device_init(gb_window_ref_t window);

#ifdef GB_CONFIG_THIRD_HAVE_SKIA
/*! init skia device
 *
 * @param bitmap    the bitmap
 *
 * @return          the device
 */
gb_device_ref_t     gb_device_init_skia(gb_bitmap_ref_t bitmap);
#endif

/*! init bitmap device
 *
 * @param bitmap    the bitmap
 *
 * @return          the device
 */
gb_device_ref_t     gb_device_init_bitmap(gb_bitmap_ref_t bitmap);

/*! exit device 
 *
 * @param device    the device
 */
tb_void_t           gb_device_exit(gb_device_ref_t device);

/*! the type 
 *
 * @param device    the device
 *
 * @return          the type
 */
tb_size_t           gb_device_type(gb_device_ref_t device);

/*! the pixfmt 
 *
 * @param device    the device
 *
 * @return          the pixfmt
 */
tb_size_t           gb_device_pixfmt(gb_device_ref_t device);

/*! the device width
 *
 * @param device    the device
 *
 * @return          the width
 */
tb_size_t           gb_device_width(gb_device_ref_t device);

/*! the device height
 *
 * @param device    the device
 *
 * @return          the height
 */
tb_size_t           gb_device_height(gb_device_ref_t device);

/*! clear draw and fill the given color
 *
 * @param device    the device
 * @param color     the color
 */
tb_void_t           gb_device_draw_clear(gb_device_ref_t device, gb_color_t color);

__tb_extern_c_leave__
#endif