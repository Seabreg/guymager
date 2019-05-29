// ****************************************************************************
//  Project:        GUYMAGER
// ****************************************************************************
//  Programmer:     Guy Voncken
//                  Police Grand-Ducale
//                  Service de Police Judiciaire
//                  Section Nouvelles Technologies
// ****************************************************************************
//  Module:         Wait dialog
// ****************************************************************************

// Copyright 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018
// Guy Voncken
//
// This file is part of Guymager.
//
// Guymager is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Guymager is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Guymager. If not, see <http://www.gnu.org/licenses/>.

#ifndef __DLGWAIT_H__
#define __DLGWAIT_H__

#ifndef __COMMON_H__
   #include "common.h"
#endif

#if (QT_VERSION >= 0x050000)
   #include <QtWidgets> //lint !e537 Repeated include
#else
   #include <QtGui>     //lint !e537 Repeated include
#endif

class t_DlgWaitLocal;

class t_DlgWait: public QDialog
{
   Q_OBJECT

   public:
      t_DlgWait ();
      t_DlgWait (const QString &Title, const QString &Message, QWidget *pParent=NULL, Qt::WindowFlags Flags=0);
     ~t_DlgWait ();

      static APIRET Show (const QString &Title, const QString &Message);
      APIRET setLabelText (const QString &Text);

   private:
      t_DlgWaitLocal *pOwn;
};

enum
{
   ERROR_DLGWAIT_CONSTRUCTOR_NOT_SUPPORTED = ERROR_BASE_DLGWAIT + 1,
};

#endif

