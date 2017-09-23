/*
 * MidiEditor
 * Copyright (C) 2010  Markus Schwenk
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FILELENGTHDIALOG_H_
#define FILELENGTHDIALOG_H_

#include <QDialog>

class MidiFile;
class QSpinBox;

class FileLengthDialog : public QDialog {
	Q_OBJECT

	public:
		FileLengthDialog(MidiFile *f, QWidget *parent=0);

	public slots:
		void accept() Q_DECL_OVERRIDE;

	private:
		MidiFile *_file;
		QSpinBox *_box;
};

#endif
