/* -*- C++ -*-
 * This file is part of the XENOMAI project.
 *
 * Copyright (C) 1997-2000 Realiant Systems.  All rights reserved.
 * Copyright (C) 2001,2002 Philippe Gerum <rpm@xenomai.org>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * The original code is FROGS - A Free Object-oriented General-purpose
 * Simulator, released November 10, 1999. The initial developer of the
 * original code is Realiant Systems (http://www.realiant.com).
 *
 * Author(s): gt
 * Contributor(s):
 *
 * Adapted to XENOMAI by Philippe Gerum.
 */

#ifndef _mvm_resource_h
#define _mvm_resource_h

#if defined(__GNUG__) && !defined(__OBSCAN__)
#pragma interface
#endif // __GNUG__ && !__OBSCAN__

#include "vm/synchro.h"

class MvmStatObj;

class MvmResource : public MvmSynchro {

protected:
  
    MvmThreadGList owners;

    int fPreempt;

    unsigned oCount;
  
    static int globalTrace;

public:

    static void setGlobalTrace(int traceLevel);

    MvmResource(const char *name =0,
		unsigned initCount =0,
		InsertMode pendMode =FIFO,
		InsertMode holdMode =FIFO,
		int fPreempt =0);

    virtual ~MvmResource();

    inline void request() {
	pend();
    }

    inline void release() {
	post();
    }

    inline unsigned getOCount() const {
	return oCount;
    }

    inline void setPreemptable(InsertMode _mode,
			       int _fPreempt) {
	owners.setMode(_mode);
	fPreempt = _fPreempt;
    }

    MvmStatObj *setStatistics(MvmStatisticType stype =STAT_MEAN);

    void print(MvmStream&);

    void post();

    virtual void pend();
};

#endif // !_mvm_resource_h
