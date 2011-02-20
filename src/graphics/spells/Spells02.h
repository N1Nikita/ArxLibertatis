/*
===========================================================================
ARX FATALIS GPL Source Code
Copyright (C) 1999-2010 Arkane Studios SA, a ZeniMax Media company.

This file is part of the Arx Fatalis GPL Source Code ('Arx Fatalis Source Code'). 

Arx Fatalis Source Code is free software: you can redistribute it and/or modify it under the terms of the GNU General Public 
License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

Arx Fatalis Source Code is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied 
warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with Arx Fatalis Source Code.  If not, see 
<http://www.gnu.org/licenses/>.

In addition, the Arx Fatalis Source Code is also subject to certain additional terms. You should have received a copy of these 
additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Arx 
Fatalis Source Code. If not, please request a copy in writing from Arkane Studios at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing Arkane Studios, c/o 
ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.
===========================================================================
*/
//////////////////////////////////////////////////////////////////////////////////////
//   @@        @@@        @@@                @@                           @@@@@     //
//   @@@       @@@@@@     @@@     @@        @@@@                         @@@  @@@   //
//   @@@       @@@@@@@    @@@    @@@@       @@@@      @@                @@@@        //
//   @@@       @@  @@@@   @@@  @@@@@       @@@@@@     @@@               @@@         //
//  @@@@@      @@  @@@@   @@@ @@@@@        @@@@@@@    @@@            @  @@@         //
//  @@@@@      @@  @@@@  @@@@@@@@         @@@@ @@@    @@@@@         @@ @@@@@@@      //
//  @@ @@@     @@  @@@@  @@@@@@@          @@@  @@@    @@@@@@        @@ @@@@         //
// @@@ @@@    @@@ @@@@   @@@@@            @@@@@@@@@   @@@@@@@      @@@ @@@@         //
// @@@ @@@@   @@@@@@@    @@@@@@           @@@  @@@@   @@@ @@@      @@@ @@@@         //
// @@@@@@@@   @@@@@      @@@@@@@@@@      @@@    @@@   @@@  @@@    @@@  @@@@@        //
// @@@  @@@@  @@@@       @@@  @@@@@@@    @@@    @@@   @@@@  @@@  @@@@  @@@@@        //
//@@@   @@@@  @@@@@      @@@      @@@@@@ @@     @@@   @@@@   @@@@@@@    @@@@@ @@@@@ //
//@@@   @@@@@ @@@@@     @@@@        @@@  @@      @@   @@@@   @@@@@@@    @@@@@@@@@   //
//@@@    @@@@ @@@@@@@   @@@@             @@      @@   @@@@    @@@@@      @@@@@      //
//@@@    @@@@ @@@@@@@   @@@@             @@      @@   @@@@    @@@@@       @@        //
//@@@    @@@  @@@ @@@@@                          @@            @@@                  //
//            @@@ @@@                           @@             @@        STUDIOS    //
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
// CSpellFx_Lvl02.h
//////////////////////////////////////////////////////////////////////////////////////
//
// Description:
// ARX Spells FX Level 02
//
// Updates: (date) (person) (update)
//////////////////////////////////////////////////////////////////////////////////////
// Refer to CSpellFx.h for details
//
// Copyright (c) 1999-2001 ARKANE Studios SA. All rights reserved
//////////////////////////////////////////////////////////////////////////////////////

#ifndef ARX_CSPELLFX_LVL02_H
#define ARX_CSPELLFX_LVL02_H

#include "graphics/effects/SpellEffects.h"

class CParticleSystem;

//-----------------------------------------------------------------------------
// Done By : did
// Status  :
//-----------------------------------------------------------------------------
class CHeal: public CSpellFx
{
	public:
		EERIE_3D eSrc;
		float	fSize;
		CParticleSystem * pPS;
		TextureContainer * tex_sol;
		TextureContainer * tex_heal;

	public:
		CHeal();
		~CHeal();

	public:
		void	Create();
		void	Update(unsigned long);
		float	Render(LPDIRECT3DDEVICE7);
 
};

//-----------------------------------------------------------------------------
// Done By : seb
// Status  :
//-----------------------------------------------------------------------------
class CHarm: public CSpellFx
{
	private:
		short		key;
		EERIE_3D	pos;
		float		rayon;
		float		fColor[3];
		TextureContainer * tp;

 
	public:
		float	Render(LPDIRECT3DDEVICE7);
 
};
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Done By :
// Status  :
//-----------------------------------------------------------------------------
class CLowerArmor: public CSpellFx
{
	public:
		int		iNpc;

	public:
		CLowerArmor();
		~CLowerArmor();

		// surcharge
	public:
		void	Create(long, int);
		void	Kill();
		void	Update(unsigned long);
		float	Render(LPDIRECT3DDEVICE7);
};
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Done By :
// Status  :
//-----------------------------------------------------------------------------
class CArmor: public CSpellFx
{
	private:
		int			iNpc;

	public:
		CArmor();
		~CArmor();

		// surcharge
		void	Create(long, int);
		void	Update(unsigned long);
		float	Render(LPDIRECT3DDEVICE7);
 
};

#endif
