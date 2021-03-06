/*
 * 
 * Copyright  1990-2008 Sun Microsystems, Inc. All Rights Reserved. 
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER 
 *  
 * This program is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public License version 
 * 2 only, as published by the Free Software Foundation.  
 *  
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License version 2 for more details (a copy is 
 * included at /legal/license.txt).  
 *  
 * You should have received a copy of the GNU General Public License 
 * version 2 along with this work; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 
 * 02110-1301 USA  
 *  
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa 
 * Clara, CA 95054 or visit www.sun.com if you need additional 
 * information or have any questions. 
 */


#ifndef MIDP_PISCES_UTILS_H
#define MIDP_PISCES_UTILS_H
                                  
#define PISCES_GET_DATA_POINTER(array) array
#include <imgapi_image.h>
#include <gxapi_graphics.h>
#include <gx_image.h>

// Image data structure, this is filled by get_pixmap() function
typedef struct _imdata {
  int w; // width
  int h; // height
  int d; // bit depth 
  void * data; // data - QPixmap::scanLine(0)
}imdata;

// Fills idata with QPixmap (ref. by ImageData) data buffer, image type and size 
extern void get_pixmap(int imagedata, imdata * idata );
// Gets mutable midp image QPixmap data buffer, ...
extern void get_pixmap_from_midp_image(jobject * image, imdata * idata);

#endif //MIDP_PISCES_UTILS_H
