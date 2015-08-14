/**
 * @file NexSlider.h
 *
 * The definition of class NexSlider. 
 *
 * @author Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date 2015/8/13
 *
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef __NEXSLIDER_H__
#define __NEXSLIDER_H__

#include "NexTouch.h"
#include "NexHardware.h"

/**
 * NexSlider,subclass of NexTouch,provides simple methods to control slider component. 
 *
 */
class NexSlider: public NexTouch
{
public: /* methods */
    NexSlider(uint8_t pid, uint8_t cid, const char *name);

    bool getValue(uint32_t *number);
    bool setValue(uint32_t number);
};


#endif /* #ifndef __NEXSLIDER_H__ */