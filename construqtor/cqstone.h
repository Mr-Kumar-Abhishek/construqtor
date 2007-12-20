/***************************************************************************
 *   Copyright (C) 2007 by Maciek Gajewski   *
 *   maciej.gajewski0@gmail.com   *
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
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef CQSTONE_H
#define CQSTONE_H

#include "cqpolygonalbody.h"

/**
	Stone is a non-editable heavy object with random iregular shape.
	@author Maciek Gajewski <maciej.gajewski0@gmail.com>
*/
class CqStone : public CqPolygonalBody
{
public:
	// construction / destruction
	CqStone(QGraphicsItem* parent, CqWorld* world = NULL);
	CqStone(CqWorld* world = NULL);
	virtual ~CqStone();

	/// Utility: creates random stone
	static CqStone* createRandomStone( double diameter );
	
private:

	void init();
};

#endif // CQSTONE_H

// EOF
