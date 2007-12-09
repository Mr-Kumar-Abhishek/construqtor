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
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget( parent ), Ui::MainWindow()
{
	setupUi( this );
	simulation = NULL;
	
	connect( view, SIGNAL(pointerPos(double,double)), SLOT(scenePointerPos(double,double)));
}

void MainWindow::on_buttonStart_clicked()
{
	simulation->start();
}

void MainWindow::on_buttonStop_clicked()
{
	simulation->stop();
}

void MainWindow::scenePointerPos( double x, double y )
{
	labelPos->setText( QString("%1, %2").arg( x ).arg( y ) );
}

// EOF