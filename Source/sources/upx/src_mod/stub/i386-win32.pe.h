/* i386-win32.pe.h
   created from i386-win32.pe.bin, 32851 (0x8053) bytes

   This file is part of the UPX executable compressor.

   Copyright (C) 1996-2010 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1996-2010 Laszlo Molnar
   Copyright (C) 2000-2010 John F. Reiser
   All Rights Reserved.

   UPX and the UCL library are free software; you can redistribute them
   and/or modify them under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of
   the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING.
   If not, write to the Free Software Foundation, Inc.,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

   Markus F.X.J. Oberhumer              Laszlo Molnar
   <markus@oberhumer.com>               <ml1050@users.sourceforge.net>

   John F. Reiser
   <jreiser@users.sourceforge.net>
 */


//#define STUB_I386_WIN32_PE_SIZE    32851
#define STUB_I386_WIN32_PE_SIZE    (sizeof(stub_i386_win32_pe2) - 1)
#define STUB_I386_WIN32_PE_ADLER32 0xce14e90a
#define STUB_I386_WIN32_PE_CRC32   0xd3f22752

unsigned char stub_i386_win32_pe2[] =
{
    "\x7F\x45\x4C\x46\x01\x01\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x01\x00\x03\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x90\x20\x00\x00\x00\x00\x00\x00\x34\x00\x00\x00\x00\x00\x28\x00"
    "\xC2\x00\xBF\x00\x80\x7C\x24\x08\x01\x0F\x85\xFC\xFF\xFF\xFF\x60"
    "\xBE\x00\x00\x00\x00\x8D\xBE\x00\x00\x00\x00\x66\xFF\x87\x00\x00"
    "\x00\x00\x66\x81\x87\x00\x00\x00\x00\x00\x00\xC7\x87\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x57\x83\xCD\xFF\xEB\x03\xA4\xEB\x03\x8A\x06"
    "\x46\x88\x07\x47\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB\x72"
    "\x01\x31\xC0\x40\x72\xFF\xB8\x01\x00\x00\x00\x01\xDB\x75\x07\x8B"
    "\x1E\x83\xEE\xFC\x11\xDB\x11\xC0\x01\xDB\x75\x07\x8B\x1E\x83\xEE"
    "\xFC\x11\xDB\x73\xFF\x01\xDB\x73\xFF\x75\x09\x8B\x1E\x83\xEE\xFC"
    "\x11\xDB\x73\xFF\x31\xC9\x83\xE8\x03\x72\x0D\xC1\xE0\x08\x8A\x06"
    "\x46\x83\xF0\xFF\x74\xFF\x89\xC5\x01\xDB\x75\x07\x8B\x1E\x83\xEE"
    "\xFC\x11\xDB\x11\xC9\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB"
    "\x11\xC9\x75\xFF\x41\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB"
    "\x11\xC9\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB\x73\x30\x01"
    "\xDB\x73\x30\x75\x09\x8B\x1E\x83\xEE\xFC\x11\xDB\x73\x30\x41\x41"
    "\x83\xC1\x02\x81\xFD\x00\xF3\xFF\xFF\x83\xD1\x01\x89\xF2\x8D\x34"
    "\x2F\xF3\xA4\x89\xD6\xE9\xFC\xFF\xFF\xFF\x8D\x14\x2F\x83\xFD\xFC"
    "\x76\xFF\x8A\x02\x42\x88\x07\x47\x49\x75\xF7\xE9\xFC\xFF\xFF\xFF"
    "\x8B\x02\x83\xC2\x04\x89\x07\x83\xC7\x04\x83\xE9\x04\x77\xF1\x01"
    "\xCF\xE9\xFC\xFF\xFF\xFF\xEB\x03\xA4\xEB\x03\x8A\x06\x46\x88\x07"
    "\x47\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB\x72\x01\x31\xC0"
    "\x40\x72\xFF\xB8\x01\x00\x00\x00\x01\xDB\x75\x07\x8B\x1E\x83\xEE"
    "\xFC\x11\xDB\x11\xC0\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB"
    "\x72\x0F\x01\xDB\x73\x0B\x75\x0F\x8B\x1E\x83\xEE\xFC\x11\xDB\x72"
    "\x0F\x48\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB\x11\xC0\xEB"
    "\xFF\x31\xC9\x83\xE8\x03\x72\x11\xC1\xE0\x08\x8A\x06\x46\x83\xF0"
    "\xFF\x74\xFF\xD1\xF8\x89\xC5\xEB\x0B\x01\xDB\x75\x07\x8B\x1E\x83"
    "\xEE\xFC\x11\xDB\x11\xC9\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11"
    "\xDB\x11\xC9\x75\xFF\x41\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11"
    "\xDB\x11\xC9\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB\x73\x44"
    "\x01\xDB\x73\x44\x75\x09\x8B\x1E\x83\xEE\xFC\x11\xDB\x73\x44\x41"
    "\x41\x83\xC1\x02\x81\xFD\x00\xFB\xFF\xFF\x83\xD1\x01\x89\xF2\x8D"
    "\x34\x2F\xF3\xA4\x89\xD6\xE9\xFC\xFF\xFF\xFF\x8D\x14\x2F\x83\xFD"
    "\xFC\x76\xFF\x8A\x02\x42\x88\x07\x47\x49\x75\xF7\xE9\xFC\xFF\xFF"
    "\xFF\x8B\x02\x83\xC2\x04\x89\x07\x83\xC7\x04\x83\xE9\x04\x77\xF1"
    "\x01\xCF\xE9\xFC\xFF\xFF\xFF\xEB\x03\xA4\xEB\x03\x8A\x06\x46\x88"
    "\x07\x47\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB\x72\x01\x31"
    "\xC0\x40\x72\xFF\xB8\x01\x00\x00\x00\x01\xDB\x75\x07\x8B\x1E\x83"
    "\xEE\xFC\x11\xDB\x11\xC0\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11"
    "\xDB\x72\x1E\x01\xDB\x73\x0B\x75\x1E\x8B\x1E\x83\xEE\xFC\x11\xDB"
    "\x72\x1E\x48\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB\x11\xC0"
    "\xEB\xFF\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB\x11\xC9\xEB"
    "\xFF\x31\xC9\x83\xE8\x03\x72\x11\xC1\xE0\x08\x8A\x06\x46\x83\xF0"
    "\xFF\x74\xFF\xD1\xF8\x89\xC5\xEB\x0B\x01\xDB\x75\x07\x8B\x1E\x83"
    "\xEE\xFC\x11\xDB\x72\xCC\x41\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC"
    "\x11\xDB\x72\xBE\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB\x11"
    "\xC9\x01\xDB\x75\x07\x8B\x1E\x83\xEE\xFC\x11\xDB\x73\x51\x01\xDB"
    "\x73\x51\x75\x09\x8B\x1E\x83\xEE\xFC\x11\xDB\x73\x51\x41\x41\x83"
    "\xC1\x02\x81\xFD\x00\xFB\xFF\xFF\x83\xD1\x02\x89\xF2\x8D\x34\x2F"
    "\xF3\xA4\x89\xD6\xE9\xFC\xFF\xFF\xFF\x8D\x14\x2F\x83\xFD\xFC\x76"
    "\xFF\x8A\x02\x42\x88\x07\x47\x49\x75\xF7\xE9\xFC\xFF\xFF\xFF\x8B"
    "\x02\x83\xC2\x04\x89\x07\x83\xC7\x04\x83\xE9\x04\x77\xF1\x01\xCF"
    "\xE9\xFC\xFF\xFF\xFF\x89\xE5\x8D\x9C\x24\x00\x00\x00\x00\x31\xC0"
    "\x50\x39\xDC\x75\xFB\x46\x46\x53\x68\x00\x00\x00\x00\x57\x83\xC3"
    "\x04\x53\x68\x00\x00\x00\x00\x56\x83\xC3\x04\x53\x50\xC7\x03\x00"
    "\x00\x00\x00\x89\xE5\x8B\x55\x00\xAC\x4A\x88\xC1\x24\x07\xC0\xE9"
    "\x03\xBB\x00\xFD\xFF\xFF\xD3\xE3\x8D\xA4\x5C\x90\xF1\xFF\xFF\x83"
    "\xE4\xE0\x6A\x00\x6A\x00\x89\xE3\x53\x83\xC3\x04\x8B\x4D\x00\xFF"
    "\x31\x57\x53\x83\xC3\x04\x88\x43\x02\xAC\x4A\x88\xC1\x24\x0F\x88"
    "\x03\xC0\xE9\x04\x88\x4B\x01\x52\x56\x53\x50\x55\x57\x56\x53\x83"
    "\xEC\x7C\x8B\x94\x24\x90\x00\x00\x00\xC7\x44\x24\x74\x00\x00\x00"
    "\x00\xC6\x44\x24\x73\x00\x8B\xAC\x24\x9C\x00\x00\x00\x8D\x42\x04"
    "\x89\x44\x24\x78\xB8\x01\x00\x00\x00\x0F\xB6\x4A\x02\x89\xC3\xD3"
    "\xE3\x89\xD9\x49\x89\x4C\x24\x6C\x0F\xB6\x4A\x01\xD3\xE0\x48\x89"
    "\x44\x24\x68\x8B\x84\x24\xA8\x00\x00\x00\x0F\xB6\x32\xC7\x45\x00"
    "\x00\x00\x00\x00\xC7\x44\x24\x60\x00\x00\x00\x00\xC7\x00\x00\x00"
    "\x00\x00\xB8\x00\x03\x00\x00\x89\x74\x24\x64\xC7\x44\x24\x5C\x01"
    "\x00\x00\x00\xC7\x44\x24\x58\x01\x00\x00\x00\xC7\x44\x24\x54\x01"
    "\x00\x00\x00\xC7\x44\x24\x50\x01\x00\x00\x00\x0F\xB6\x4A\x01\x01"
    "\xF1\xD3\xE0\x8D\x88\x36\x07\x00\x00\x39\x4C\x24\x74\x73\x0E\x8B"
    "\x44\x24\x78\x66\xC7\x00\x00\x04\x83\xC0\x02\xE2\xF6\x8B\x9C\x24"
    "\x94\x00\x00\x00\x31\xFF\xC7\x44\x24\x48\xFF\xFF\xFF\xFF\x89\xDA"
    "\x03\x94\x24\x98\x00\x00\x00\x89\x54\x24\x4C\x31\xD2\x3B\x5C\x24"
    "\x4C\x0F\x84\x7C\x09\x00\x00\x0F\xB6\x03\xC1\xE7\x08\x42\x43\x09"
    "\xC7\x83\xFA\x04\x7E\xE7\x8B\x8C\x24\xA4\x00\x00\x00\x39\x4C\x24"
    "\x74\x0F\x83\x64\x09\x00\x00\x8B\x74\x24\x74\x23\x74\x24\x6C\x8B"
    "\x44\x24\x60\x8B\x54\x24\x78\xC1\xE0\x04\x89\x74\x24\x44\x01\xF0"
    "\x81\x7C\x24\x48\xFF\xFF\xFF\x00\x8D\x2C\x42\x77\x18\x3B\x5C\x24"
    "\x4C\x0F\x84\x2C\x09\x00\x00\xC1\x64\x24\x48\x08\x0F\xB6\x03\xC1"
    "\xE7\x08\x43\x09\xC7\x8B\x44\x24\x48\x66\x8B\x55\x00\xC1\xE8\x0B"
    "\x0F\xB7\xCA\x0F\xAF\xC1\x39\xC7\x0F\x83\xDD\x01\x00\x00\x89\x44"
    "\x24\x48\xB8\x00\x08\x00\x00\x29\xC8\x8A\x4C\x24\x64\xC1\xF8\x05"
    "\xBE\x01\x00\x00\x00\x8D\x04\x02\x0F\xB6\x54\x24\x73\x66\x89\x45"
    "\x00\x8B\x44\x24\x74\x23\x44\x24\x68\x8B\x6C\x24\x78\xD3\xE0\xB9"
    "\x08\x00\x00\x00\x2B\x4C\x24\x64\xD3\xFA\x01\xD0\x69\xC0\x00\x06"
    "\x00\x00\x83\x7C\x24\x60\x06\x8D\x84\x05\x6C\x0E\x00\x00\x89\x44"
    "\x24\x14\x0F\x8E\xCA\x00\x00\x00\x8B\x44\x24\x74\x2B\x44\x24\x5C"
    "\x8B\x94\x24\xA0\x00\x00\x00\x0F\xB6\x04\x02\x89\x44\x24\x40\xD1"
    "\x64\x24\x40\x8B\x4C\x24\x40\x8D\x14\x36\x8B\x6C\x24\x14\x81\xE1"
    "\x00\x01\x00\x00\x81\x7C\x24\x48\xFF\xFF\xFF\x00\x8D\x44\x4D\x00"
    "\x89\x4C\x24\x3C\x8D\x2C\x10\x77\x18\x3B\x5C\x24\x4C\x0F\x84\x60"
    "\x08\x00\x00\xC1\x64\x24\x48\x08\x0F\xB6\x03\xC1\xE7\x08\x43\x09"
    "\xC7\x8B\x44\x24\x48\x66\x8B\x8D\x00\x02\x00\x00\xC1\xE8\x0B\x0F"
    "\xB7\xF1\x0F\xAF\xC6\x39\xC7\x73\x23\x89\x44\x24\x48\xB8\x00\x08"
    "\x00\x00\x29\xF0\x89\xD6\xC1\xF8\x05\x83\x7C\x24\x3C\x00\x8D\x04"
    "\x01\x66\x89\x85\x00\x02\x00\x00\x74\x22\xEB\x2E\x29\x44\x24\x48"
    "\x29\xC7\x89\xC8\x8D\x72\x01\x66\xC1\xE8\x05\x66\x29\xC1\x83\x7C"
    "\x24\x3C\x00\x66\x89\x8D\x00\x02\x00\x00\x74\x0E\x81\xFE\xFF\x00"
    "\x00\x00\x0F\x8E\x57\xFF\xFF\xFF\xEB\x79\x81\xFE\xFF\x00\x00\x00"
    "\x7F\x71\x8D\x14\x36\x8B\x6C\x24\x14\x01\xD5\x81\x7C\x24\x48\xFF"
    "\xFF\xFF\x00\x77\x18\x3B\x5C\x24\x4C\x0F\x84\xC4\x07\x00\x00\xC1"
    "\x64\x24\x48\x08\x0F\xB6\x03\xC1\xE7\x08\x43\x09\xC7\x8B\x44\x24"
    "\x48\x66\x8B\x4D\x00\xC1\xE8\x0B\x0F\xB7\xF1\x0F\xAF\xC6\x39\xC7"
    "\x73\x19\x89\x44\x24\x48\xB8\x00\x08\x00\x00\x29\xF0\x89\xD6\xC1"
    "\xF8\x05\x8D\x04\x01\x66\x89\x45\x00\xEB\x9F\x29\x44\x24\x48\x29"
    "\xC7\x89\xC8\x8D\x72\x01\x66\xC1\xE8\x05\x66\x29\xC1\x66\x89\x4D"
    "\x00\xEB\x87\x8B\x54\x24\x74\x89\xF0\x8B\x8C\x24\xA0\x00\x00\x00"
    "\x88\x44\x24\x73\x88\x04\x0A\x42\x83\x7C\x24\x60\x03\x89\x54\x24"
    "\x74\x7F\x0D\xC7\x44\x24\x60\x00\x00\x00\x00\xE9\x1B\x07\x00\x00"
    "\x83\x7C\x24\x60\x09\x7F\x0A\x83\x6C\x24\x60\x03\xE9\x0A\x07\x00"
    "\x00\x83\x6C\x24\x60\x06\xE9\x00\x07\x00\x00\x8B\x4C\x24\x48\x29"
    "\xC7\x8B\x74\x24\x60\x29\xC1\x89\xD0\x66\xC1\xE8\x05\x66\x29\xC2"
    "\x81\xF9\xFF\xFF\xFF\x00\x66\x89\x55\x00\x8B\x6C\x24\x78\x8D\x74"
    "\x75\x00\x89\x74\x24\x38\x77\x16\x3B\x5C\x24\x4C\x0F\x84\xF1\x06"
    "\x00\x00\x0F\xB6\x03\xC1\xE7\x08\xC1\xE1\x08\x43\x09\xC7\x8B\x6C"
    "\x24\x38\x89\xC8\xC1\xE8\x0B\x66\x8B\x95\x80\x01\x00\x00\x0F\xB7"
    "\xEA\x0F\xAF\xC5\x39\xC7\x73\x52\x89\xC6\xB8\x00\x08\x00\x00\x29"
    "\xE8\x8B\x6C\x24\x58\xC1\xF8\x05\x8B\x4C\x24\x54\x8D\x04\x02\x8B"
    "\x54\x24\x38\x89\x4C\x24\x50\x8B\x4C\x24\x78\x66\x89\x82\x80\x01"
    "\x00\x00\x8B\x44\x24\x5C\x89\x6C\x24\x54\x89\x44\x24\x58\x31\xC0"
    "\x83\x7C\x24\x60\x06\x0F\x9F\xC0\x81\xC1\x64\x06\x00\x00\x8D\x04"
    "\x40\x89\x44\x24\x60\xE9\x74\x02\x00\x00\x89\xCE\x29\xC7\x29\xC6"
    "\x89\xD0\x66\xC1\xE8\x05\x8B\x4C\x24\x38\x66\x29\xC2\x81\xFE\xFF"
    "\xFF\xFF\x00\x66\x89\x91\x80\x01\x00\x00\x77\x16\x3B\x5C\x24\x4C"
    "\x0F\x84\x4D\x06\x00\x00\x0F\xB6\x03\xC1\xE7\x08\xC1\xE6\x08\x43"
    "\x09\xC7\x8B\x6C\x24\x38\x89\xF2\xC1\xEA\x0B\x66\x8B\x8D\x98\x01"
    "\x00\x00\x0F\xB7\xC1\x0F\xAF\xD0\x39\xD7\x0F\x83\xE3\x00\x00\x00"
    "\xBD\x00\x08\x00\x00\x89\xD6\x29\xC5\xC7\x44\x24\x34\x00\x08\x00"
    "\x00\x89\xE8\xC1\xF8\x05\x8D\x04\x01\x8B\x4C\x24\x38\x66\x89\x81"
    "\x98\x01\x00\x00\x8B\x44\x24\x60\x8B\x4C\x24\x44\xC1\xE0\x05\x03"
    "\x44\x24\x78\x81\xFA\xFF\xFF\xFF\x00\x8D\x2C\x48\x77\x16\x3B\x5C"
    "\x24\x4C\x0F\x84\xDB\x05\x00\x00\x0F\xB6\x03\xC1\xE7\x08\xC1\xE6"
    "\x08\x43\x09\xC7\x66\x8B\x95\xE0\x01\x00\x00\x89\xF0\xC1\xE8\x0B"
    "\x0F\xB7\xCA\x0F\xAF\xC1\x39\xC7\x73\x60\x29\x4C\x24\x34\xC1\x7C"
    "\x24\x34\x05\x8B\x74\x24\x34\x89\x44\x24\x48\x83\x7C\x24\x74\x00"
    "\x8D\x04\x32\x66\x89\x85\xE0\x01\x00\x00\x0F\x84\x93\x05\x00\x00"
    "\x31\xC0\x83\x7C\x24\x60\x06\x8B\xAC\x24\xA0\x00\x00\x00\x8B\x54"
    "\x24\x74\x0F\x9F\xC0\x8D\x44\x00\x09\x89\x44\x24\x60\x8B\x44\x24"
    "\x74\x2B\x44\x24\x5C\x8A\x44\x05\x00\x88\x44\x24\x73\x88\x04\x2A"
    "\x42\x89\x54\x24\x74\xE9\x31\x05\x00\x00\x29\xC6\x29\xC7\x89\xD0"
    "\x66\xC1\xE8\x05\x66\x29\xC2\x66\x89\x95\xE0\x01\x00\x00\xE9\x1F"
    "\x01\x00\x00\x89\xC8\x29\xD6\x66\xC1\xE8\x05\x8B\x6C\x24\x38\x66"
    "\x29\xC1\x29\xD7\x81\xFE\xFF\xFF\xFF\x00\x66\x89\x8D\x98\x01\x00"
    "\x00\x77\x16\x3B\x5C\x24\x4C\x0F\x84\x16\x05\x00\x00\x0F\xB6\x03"
    "\xC1\xE7\x08\xC1\xE6\x08\x43\x09\xC7\x8B\x4C\x24\x38\x89\xF0\xC1"
    "\xE8\x0B\x66\x8B\x91\xB0\x01\x00\x00\x0F\xB7\xCA\x0F\xAF\xC1\x39"
    "\xC7\x73\x23\x89\xC6\xB8\x00\x08\x00\x00\x29\xC8\x8B\x6C\x24\x38"
    "\xC1\xF8\x05\x8D\x04\x02\x66\x89\x85\xB0\x01\x00\x00\x8B\x44\x24"
    "\x58\xE9\xA0\x00\x00\x00\x89\xF1\x29\xC7\x29\xC1\x89\xD0\x66\xC1"
    "\xE8\x05\x66\x29\xC2\x8B\x44\x24\x38\x81\xF9\xFF\xFF\xFF\x00\x66"
    "\x89\x90\xB0\x01\x00\x00\x77\x16\x3B\x5C\x24\x4C\x0F\x84\xA1\x04"
    "\x00\x00\x0F\xB6\x03\xC1\xE7\x08\xC1\xE1\x08\x43\x09\xC7\x8B\x74"
    "\x24\x38\x89\xC8\xC1\xE8\x0B\x66\x8B\x96\xC8\x01\x00\x00\x0F\xB7"
    "\xEA\x0F\xAF\xC5\x39\xC7\x73\x20\x89\xC6\xB8\x00\x08\x00\x00\x29"
    "\xE8\x8B\x6C\x24\x38\xC1\xF8\x05\x8D\x04\x02\x66\x89\x85\xC8\x01"
    "\x00\x00\x8B\x44\x24\x54\xEB\x26\x89\xCE\x29\xC7\x29\xC6\x89\xD0"
    "\x66\xC1\xE8\x05\x66\x29\xC2\x8B\x44\x24\x38\x66\x89\x90\xC8\x01"
    "\x00\x00\x8B\x54\x24\x54\x8B\x44\x24\x50\x89\x54\x24\x50\x8B\x4C"
    "\x24\x58\x89\x4C\x24\x54\x8B\x6C\x24\x5C\x89\x44\x24\x5C\x89\x6C"
    "\x24\x58\x31\xC0\x83\x7C\x24\x60\x06\x8B\x4C\x24\x78\x0F\x9F\xC0"
    "\x81\xC1\x68\x0A\x00\x00\x8D\x44\x40\x08\x89\x44\x24\x60\x81\xFE"
    "\xFF\xFF\xFF\x00\x77\x16\x3B\x5C\x24\x4C\x0F\x84\xF3\x03\x00\x00"
    "\x0F\xB6\x03\xC1\xE7\x08\xC1\xE6\x08\x43\x09\xC7\x66\x8B\x11\x89"
    "\xF0\xC1\xE8\x0B\x0F\xB7\xEA\x0F\xAF\xC5\x39\xC7\x73\x2F\x89\x44"
    "\x24\x48\xB8\x00\x08\x00\x00\x29\xE8\xC1\x64\x24\x44\x04\xC1\xF8"
    "\x05\xC7\x44\x24\x2C\x00\x00\x00\x00\x8D\x04\x02\x66\x89\x01\x8B"
    "\x44\x24\x44\x8D\x4C\x01\x04\x89\x4C\x24\x10\xEB\x72\x29\xC6\x29"
    "\xC7\x89\xD0\x66\xC1\xE8\x05\x66\x29\xC2\x81\xFE\xFF\xFF\xFF\x00"
    "\x66\x89\x11\x77\x16\x3B\x5C\x24\x4C\x0F\x84\x84\x03\x00\x00\x0F"
    "\xB6\x03\xC1\xE7\x08\xC1\xE6\x08\x43\x09\xC7\x66\x8B\x51\x02\x89"
    "\xF0\xC1\xE8\x0B\x0F\xB7\xEA\x0F\xAF\xC5\x39\xC7\x73\x3B\x89\x44"
    "\x24\x48\xB8\x00\x08\x00\x00\x29\xE8\xC1\x64\x24\x44\x04\xC1\xF8"
    "\x05\xC7\x44\x24\x2C\x08\x00\x00\x00\x8D\x04\x02\x8B\x54\x24\x44"
    "\x66\x89\x41\x02\x8D\x8C\x11\x04\x01\x00\x00\x89\x4C\x24\x10\xC7"
    "\x44\x24\x30\x03\x00\x00\x00\xEB\x2F\x29\xC6\x29\xC7\x89\xD0\x89"
    "\x74\x24\x48\x66\xC1\xE8\x05\xC7\x44\x24\x2C\x10\x00\x00\x00\x66"
    "\x29\xC2\xC7\x44\x24\x30\x08\x00\x00\x00\x66\x89\x51\x02\x81\xC1"
    "\x04\x02\x00\x00\x89\x4C\x24\x10\x8B\x4C\x24\x30\xBA\x01\x00\x00"
    "\x00\x89\x4C\x24\x28\x8D\x2C\x12\x8B\x74\x24\x10\x01\xEE\x81\x7C"
    "\x24\x48\xFF\xFF\xFF\x00\x77\x18\x3B\x5C\x24\x4C\x0F\x84\xD1\x02"
    "\x00\x00\xC1\x64\x24\x48\x08\x0F\xB6\x03\xC1\xE7\x08\x43\x09\xC7"
    "\x8B\x44\x24\x48\x66\x8B\x16\xC1\xE8\x0B\x0F\xB7\xCA\x0F\xAF\xC1"
    "\x39\xC7\x73\x18\x89\x44\x24\x48\xB8\x00\x08\x00\x00\x29\xC8\xC1"
    "\xF8\x05\x8D\x04\x02\x89\xEA\x66\x89\x06\xEB\x15\x29\x44\x24\x48"
    "\x29\xC7\x89\xD0\x66\xC1\xE8\x05\x66\x29\xC2\x66\x89\x16\x8D\x55"
    "\x01\x8B\x74\x24\x28\x4E\x89\x74\x24\x28\x75\x89\x8A\x4C\x24\x30"
    "\xB8\x01\x00\x00\x00\xD3\xE0\x29\xC2\x03\x54\x24\x2C\x83\x7C\x24"
    "\x60\x03\x89\x54\x24\x0C\x0F\x8F\xE7\x01\x00\x00\x83\x44\x24\x60"
    "\x07\x83\xFA\x03\x89\xD0\x7E\x05\xB8\x03\x00\x00\x00\x8B\x74\x24"
    "\x78\xC1\xE0\x07\xC7\x44\x24\x24\x06\x00\x00\x00\x8D\x84\x06\x60"
    "\x03\x00\x00\x89\x44\x24\x08\xB8\x01\x00\x00\x00\x8D\x2C\x00\x8B"
    "\x74\x24\x08\x01\xEE\x81\x7C\x24\x48\xFF\xFF\xFF\x00\x77\x18\x3B"
    "\x5C\x24\x4C\x0F\x84\x0A\x02\x00\x00\xC1\x64\x24\x48\x08\x0F\xB6"
    "\x03\xC1\xE7\x08\x43\x09\xC7\x8B\x44\x24\x48\x66\x8B\x16\xC1\xE8"
    "\x0B\x0F\xB7\xCA\x0F\xAF\xC1\x39\xC7\x73\x18\x89\x44\x24\x48\xB8"
    "\x00\x08\x00\x00\x29\xC8\xC1\xF8\x05\x8D\x04\x02\x66\x89\x06\x89"
    "\xE8\xEB\x15\x29\x44\x24\x48\x29\xC7\x89\xD0\x66\xC1\xE8\x05\x66"
    "\x29\xC2\x8D\x45\x01\x66\x89\x16\x8B\x6C\x24\x24\x4D\x89\x6C\x24"
    "\x24\x75\x89\x8D\x50\xC0\x83\xFA\x03\x89\x14\x24\x0F\x8E\x27\x01"
    "\x00\x00\x89\xD0\x89\xD6\xD1\xF8\x83\xE6\x01\x8D\x48\xFF\x83\xCE"
    "\x02\x83\xFA\x0D\x89\x4C\x24\x20\x7F\x1C\x8B\x6C\x24\x78\xD3\xE6"
    "\x01\xD2\x89\x34\x24\x8D\x44\x75\x00\x29\xD0\x05\x5E\x05\x00\x00"
    "\x89\x44\x24\x04\xEB\x56\x8D\x50\xFB\x81\x7C\x24\x48\xFF\xFF\xFF"
    "\x00\x77\x18\x3B\x5C\x24\x4C\x0F\x84\x56\x01\x00\x00\xC1\x64\x24"
    "\x48\x08\x0F\xB6\x03\xC1\xE7\x08\x43\x09\xC7\xD1\x6C\x24\x48\x01"
    "\xF6\x3B\x7C\x24\x48\x72\x07\x2B\x7C\x24\x48\x83\xCE\x01\x4A\x75"
    "\xC8\x8B\x44\x24\x78\xC1\xE6\x04\x89\x34\x24\x05\x44\x06\x00\x00"
    "\xC7\x44\x24\x20\x04\x00\x00\x00\x89\x44\x24\x04\xC7\x44\x24\x1C"
    "\x01\x00\x00\x00\xB8\x01\x00\x00\x00\x8B\x6C\x24\x04\x01\xC0\x89"
    "\x44\x24\x18\x01\xC5\x81\x7C\x24\x48\xFF\xFF\xFF\x00\x77\x18\x3B"
    "\x5C\x24\x4C\x0F\x84\xEA\x00\x00\x00\xC1\x64\x24\x48\x08\x0F\xB6"
    "\x03\xC1\xE7\x08\x43\x09\xC7\x8B\x44\x24\x48\x66\x8B\x55\x00\xC1"
    "\xE8\x0B\x0F\xB7\xF2\x0F\xAF\xC6\x39\xC7\x73\x1B\x89\x44\x24\x48"
    "\xB8\x00\x08\x00\x00\x29\xF0\xC1\xF8\x05\x8D\x04\x02\x66\x89\x45"
    "\x00\x8B\x44\x24\x18\xEB\x1F\x29\x44\x24\x48\x29\xC7\x89\xD0\x66"
    "\xC1\xE8\x05\x66\x29\xC2\x8B\x44\x24\x18\x66\x89\x55\x00\x8B\x54"
    "\x24\x1C\x40\x09\x14\x24\x8B\x4C\x24\x20\xD1\x64\x24\x1C\x49\x89"
    "\x4C\x24\x20\x0F\x85\x70\xFF\xFF\xFF\x8B\x34\x24\x46\x89\x74\x24"
    "\x5C\x74\x59\x8B\x4C\x24\x0C\x8B\x6C\x24\x74\x83\xC1\x02\x39\x6C"
    "\x24\x5C\x77\x5F\x8B\x84\x24\xA0\x00\x00\x00\x89\xEA\x2B\x44\x24"
    "\x5C\x03\x94\x24\xA0\x00\x00\x00\x8D\x34\x28\x8A\x06\x46\x88\x44"
    "\x24\x73\x88\x02\x42\xFF\x44\x24\x74\x49\x74\x0F\x8B\xAC\x24\xA4"
    "\x00\x00\x00\x39\x6C\x24\x74\x72\xE2\xEB\x11\x8B\x84\x24\xA4\x00"
    "\x00\x00\x39\x44\x24\x74\x0F\x82\xBB\xF6\xFF\xFF\x81\x7C\x24\x48"
    "\xFF\xFF\xFF\x00\x77\x15\x3B\x5C\x24\x4C\xB8\x01\x00\x00\x00\x74"
    "\x29\xEB\x07\xB8\x01\x00\x00\x00\xEB\x20\x43\x2B\x9C\x24\x94\x00"
    "\x00\x00\x31\xC0\x8B\x94\x24\x9C\x00\x00\x00\x8B\x4C\x24\x74\x89"
    "\x1A\x8B\x9C\x24\xA8\x00\x00\x00\x89\x0B\x83\xC4\x7C\x5B\x5E\x5F"
    "\x5D\x55\x57\x56\x53\x83\xEC\x7C\x8B\x94\x24\x90\x00\x00\x00\xC7"
    "\x44\x24\x74\x00\x00\x00\x00\xC6\x44\x24\x73\x00\x8B\xAC\x24\x9C"
    "\x00\x00\x00\x8D\x42\x04\x89\x44\x24\x78\xB8\x01\x00\x00\x00\x0F"
    "\xB6\x4A\x02\x89\xC3\xD3\xE3\x89\xD9\x49\x89\x4C\x24\x6C\x0F\xB6"
    "\x4A\x01\xD3\xE0\x48\x89\x44\x24\x68\x8B\x84\x24\xA8\x00\x00\x00"
    "\x0F\xB6\x32\xC7\x45\x00\x00\x00\x00\x00\xC7\x44\x24\x60\x00\x00"
    "\x00\x00\xC7\x00\x00\x00\x00\x00\xB8\x00\x03\x00\x00\x89\x74\x24"
    "\x64\xC7\x44\x24\x5C\x01\x00\x00\x00\xC7\x44\x24\x58\x01\x00\x00"
    "\x00\xC7\x44\x24\x54\x01\x00\x00\x00\xC7\x44\x24\x50\x01\x00\x00"
    "\x00\x0F\xB6\x4A\x01\x01\xF1\xD3\xE0\x8D\x88\x36\x07\x00\x00\x39"
    "\x4C\x24\x74\x73\x0E\x8B\x44\x24\x78\x66\xC7\x00\x00\x04\x83\xC0"
    "\x02\xE2\xF6\x8B\x9C\x24\x94\x00\x00\x00\x31\xFF\xC7\x44\x24\x48"
    "\xFF\xFF\xFF\xFF\x89\xDA\x03\x94\x24\x98\x00\x00\x00\x89\x54\x24"
    "\x4C\x31\xD2\x3B\x5C\x24\x4C\x0F\x84\x7C\x09\x00\x00\x0F\xB6\x03"
    "\xC1\xE7\x08\x42\x43\x09\xC7\x83\xFA\x04\x7E\xE7\x8B\x8C\x24\xA4"
    "\x00\x00\x00\x39\x4C\x24\x74\x0F\x83\x64\x09\x00\x00\x8B\x74\x24"
    "\x74\x23\x74\x24\x6C\x8B\x44\x24\x60\x8B\x54\x24\x78\xC1\xE0\x04"
    "\x89\x74\x24\x44\x01\xF0\x81\x7C\x24\x48\xFF\xFF\xFF\x00\x8D\x2C"
    "\x42\x77\x18\x3B\x5C\x24\x4C\x0F\x84\x2C\x09\x00\x00\xC1\x64\x24"
    "\x48\x08\x0F\xB6\x03\xC1\xE7\x08\x43\x09\xC7\x8B\x44\x24\x48\x66"
    "\x8B\x55\x00\xC1\xE8\x0B\x0F\xB7\xCA\x0F\xAF\xC1\x39\xC7\x0F\x83"
    "\xDD\x01\x00\x00\x89\x44\x24\x48\xB8\x00\x08\x00\x00\x29\xC8\x8A"
    "\x4C\x24\x64\xC1\xF8\x05\xBE\x01\x00\x00\x00\x8D\x04\x02\x0F\xB6"
    "\x54\x24\x73\x66\x89\x45\x00\x8B\x44\x24\x74\x23\x44\x24\x68\x8B"
    "\x6C\x24\x78\xD3\xE0\xB9\x08\x00\x00\x00\x2B\x4C\x24\x64\xD3\xFA"
    "\x01\xD0\x69\xC0\x00\x06\x00\x00\x83\x7C\x24\x60\x06\x8D\x84\x05"
    "\x6C\x0E\x00\x00\x89\x44\x24\x14\x0F\x8E\xCA\x00\x00\x00\x8B\x44"
    "\x24\x74\x2B\x44\x24\x5C\x8B\x94\x24\xA0\x00\x00\x00\x0F\xB6\x04"
    "\x02\x89\x44\x24\x40\xD1\x64\x24\x40\x8B\x4C\x24\x40\x8D\x14\x36"
    "\x8B\x6C\x24\x14\x81\xE1\x00\x01\x00\x00\x81\x7C\x24\x48\xFF\xFF"
    "\xFF\x00\x8D\x44\x4D\x00\x89\x4C\x24\x3C\x8D\x2C\x10\x77\x18\x3B"
    "\x5C\x24\x4C\x0F\x84\x60\x08\x00\x00\xC1\x64\x24\x48\x08\x0F\xB6"
    "\x03\xC1\xE7\x08\x43\x09\xC7\x8B\x44\x24\x48\x66\x8B\x8D\x00\x02"
    "\x00\x00\xC1\xE8\x0B\x0F\xB7\xF1\x0F\xAF\xC6\x39\xC7\x73\x23\x89"
    "\x44\x24\x48\xB8\x00\x08\x00\x00\x29\xF0\x89\xD6\xC1\xF8\x05\x83"
    "\x7C\x24\x3C\x00\x8D\x04\x01\x66\x89\x85\x00\x02\x00\x00\x74\x22"
    "\xEB\x2E\x29\x44\x24\x48\x29\xC7\x89\xC8\x8D\x72\x01\x66\xC1\xE8"
    "\x05\x66\x29\xC1\x83\x7C\x24\x3C\x00\x66\x89\x8D\x00\x02\x00\x00"
    "\x74\x0E\x81\xFE\xFF\x00\x00\x00\x0F\x8E\x57\xFF\xFF\xFF\xEB\x79"
    "\x81\xFE\xFF\x00\x00\x00\x7F\x71\x8D\x14\x36\x8B\x6C\x24\x14\x01"
    "\xD5\x81\x7C\x24\x48\xFF\xFF\xFF\x00\x77\x18\x3B\x5C\x24\x4C\x0F"
    "\x84\xC4\x07\x00\x00\xC1\x64\x24\x48\x08\x0F\xB6\x03\xC1\xE7\x08"
    "\x43\x09\xC7\x8B\x44\x24\x48\x66\x8B\x4D\x00\xC1\xE8\x0B\x0F\xB7"
    "\xF1\x0F\xAF\xC6\x39\xC7\x73\x19\x89\x44\x24\x48\xB8\x00\x08\x00"
    "\x00\x29\xF0\x89\xD6\xC1\xF8\x05\x8D\x04\x01\x66\x89\x45\x00\xEB"
    "\x9F\x29\x44\x24\x48\x29\xC7\x89\xC8\x8D\x72\x01\x66\xC1\xE8\x05"
    "\x66\x29\xC1\x66\x89\x4D\x00\xEB\x87\x8B\x54\x24\x74\x89\xF0\x8B"
    "\x8C\x24\xA0\x00\x00\x00\x88\x44\x24\x73\x88\x04\x0A\x42\x83\x7C"
    "\x24\x60\x03\x89\x54\x24\x74\x7F\x0D\xC7\x44\x24\x60\x00\x00\x00"
    "\x00\xE9\x1B\x07\x00\x00\x83\x7C\x24\x60\x09\x7F\x0A\x83\x6C\x24"
    "\x60\x03\xE9\x0A\x07\x00\x00\x83\x6C\x24\x60\x06\xE9\x00\x07\x00"
    "\x00\x8B\x4C\x24\x48\x29\xC7\x8B\x74\x24\x60\x29\xC1\x89\xD0\x66"
    "\xC1\xE8\x05\x66\x29\xC2\x81\xF9\xFF\xFF\xFF\x00\x66\x89\x55\x00"
    "\x8B\x6C\x24\x78\x8D\x74\x75\x00\x89\x74\x24\x38\x77\x16\x3B\x5C"
    "\x24\x4C\x0F\x84\xF1\x06\x00\x00\x0F\xB6\x03\xC1\xE7\x08\xC1\xE1"
    "\x08\x43\x09\xC7\x8B\x6C\x24\x38\x89\xC8\xC1\xE8\x0B\x66\x8B\x95"
    "\x80\x01\x00\x00\x0F\xB7\xEA\x0F\xAF\xC5\x39\xC7\x73\x52\x89\xC6"
    "\xB8\x00\x08\x00\x00\x29\xE8\x8B\x6C\x24\x58\xC1\xF8\x05\x8B\x4C"
    "\x24\x54\x8D\x04\x02\x8B\x54\x24\x38\x89\x4C\x24\x50\x8B\x4C\x24"
    "\x78\x66\x89\x82\x80\x01\x00\x00\x8B\x44\x24\x5C\x89\x6C\x24\x54"
    "\x89\x44\x24\x58\x31\xC0\x83\x7C\x24\x60\x06\x0F\x9F\xC0\x81\xC1"
    "\x64\x06\x00\x00\x8D\x04\x40\x89\x44\x24\x60\xE9\x74\x02\x00\x00"
    "\x89\xCE\x29\xC7\x29\xC6\x89\xD0\x66\xC1\xE8\x05\x8B\x4C\x24\x38"
    "\x66\x29\xC2\x81\xFE\xFF\xFF\xFF\x00\x66\x89\x91\x80\x01\x00\x00"
    "\x77\x16\x3B\x5C\x24\x4C\x0F\x84\x4D\x06\x00\x00\x0F\xB6\x03\xC1"
    "\xE7\x08\xC1\xE6\x08\x43\x09\xC7\x8B\x6C\x24\x38\x89\xF2\xC1\xEA"
    "\x0B\x66\x8B\x8D\x98\x01\x00\x00\x0F\xB7\xC1\x0F\xAF\xD0\x39\xD7"
    "\x0F\x83\xE3\x00\x00\x00\xBD\x00\x08\x00\x00\x89\xD6\x29\xC5\xC7"
    "\x44\x24\x34\x00\x08\x00\x00\x89\xE8\xC1\xF8\x05\x8D\x04\x01\x8B"
    "\x4C\x24\x38\x66\x89\x81\x98\x01\x00\x00\x8B\x44\x24\x60\x8B\x4C"
    "\x24\x44\xC1\xE0\x05\x03\x44\x24\x78\x81\xFA\xFF\xFF\xFF\x00\x8D"
    "\x2C\x48\x77\x16\x3B\x5C\x24\x4C\x0F\x84\xDB\x05\x00\x00\x0F\xB6"
    "\x03\xC1\xE7\x08\xC1\xE6\x08\x43\x09\xC7\x66\x8B\x95\xE0\x01\x00"
    "\x00\x89\xF0\xC1\xE8\x0B\x0F\xB7\xCA\x0F\xAF\xC1\x39\xC7\x73\x60"
    "\x29\x4C\x24\x34\xC1\x7C\x24\x34\x05\x8B\x74\x24\x34\x89\x44\x24"
    "\x48\x83\x7C\x24\x74\x00\x8D\x04\x32\x66\x89\x85\xE0\x01\x00\x00"
    "\x0F\x84\x93\x05\x00\x00\x31\xC0\x83\x7C\x24\x60\x06\x8B\xAC\x24"
    "\xA0\x00\x00\x00\x8B\x54\x24\x74\x0F\x9F\xC0\x8D\x44\x00\x09\x89"
    "\x44\x24\x60\x8B\x44\x24\x74\x2B\x44\x24\x5C\x8A\x44\x05\x00\x88"
    "\x44\x24\x73\x88\x04\x2A\x42\x89\x54\x24\x74\xE9\x31\x05\x00\x00"
    "\x29\xC6\x29\xC7\x89\xD0\x66\xC1\xE8\x05\x66\x29\xC2\x66\x89\x95"
    "\xE0\x01\x00\x00\xE9\x1F\x01\x00\x00\x89\xC8\x29\xD6\x66\xC1\xE8"
    "\x05\x8B\x6C\x24\x38\x66\x29\xC1\x29\xD7\x81\xFE\xFF\xFF\xFF\x00"
    "\x66\x89\x8D\x98\x01\x00\x00\x77\x16\x3B\x5C\x24\x4C\x0F\x84\x16"
    "\x05\x00\x00\x0F\xB6\x03\xC1\xE7\x08\xC1\xE6\x08\x43\x09\xC7\x8B"
    "\x4C\x24\x38\x89\xF0\xC1\xE8\x0B\x66\x8B\x91\xB0\x01\x00\x00\x0F"
    "\xB7\xCA\x0F\xAF\xC1\x39\xC7\x73\x23\x89\xC6\xB8\x00\x08\x00\x00"
    "\x29\xC8\x8B\x6C\x24\x38\xC1\xF8\x05\x8D\x04\x02\x66\x89\x85\xB0"
    "\x01\x00\x00\x8B\x44\x24\x58\xE9\xA0\x00\x00\x00\x89\xF1\x29\xC7"
    "\x29\xC1\x89\xD0\x66\xC1\xE8\x05\x66\x29\xC2\x8B\x44\x24\x38\x81"
    "\xF9\xFF\xFF\xFF\x00\x66\x89\x90\xB0\x01\x00\x00\x77\x16\x3B\x5C"
    "\x24\x4C\x0F\x84\xA1\x04\x00\x00\x0F\xB6\x03\xC1\xE7\x08\xC1\xE1"
    "\x08\x43\x09\xC7\x8B\x74\x24\x38\x89\xC8\xC1\xE8\x0B\x66\x8B\x96"
    "\xC8\x01\x00\x00\x0F\xB7\xEA\x0F\xAF\xC5\x39\xC7\x73\x20\x89\xC6"
    "\xB8\x00\x08\x00\x00\x29\xE8\x8B\x6C\x24\x38\xC1\xF8\x05\x8D\x04"
    "\x02\x66\x89\x85\xC8\x01\x00\x00\x8B\x44\x24\x54\xEB\x26\x89\xCE"
    "\x29\xC7\x29\xC6\x89\xD0\x66\xC1\xE8\x05\x66\x29\xC2\x8B\x44\x24"
    "\x38\x66\x89\x90\xC8\x01\x00\x00\x8B\x54\x24\x54\x8B\x44\x24\x50"
    "\x89\x54\x24\x50\x8B\x4C\x24\x58\x89\x4C\x24\x54\x8B\x6C\x24\x5C"
    "\x89\x44\x24\x5C\x89\x6C\x24\x58\x31\xC0\x83\x7C\x24\x60\x06\x8B"
    "\x4C\x24\x78\x0F\x9F\xC0\x81\xC1\x68\x0A\x00\x00\x8D\x44\x40\x08"
    "\x89\x44\x24\x60\x81\xFE\xFF\xFF\xFF\x00\x77\x16\x3B\x5C\x24\x4C"
    "\x0F\x84\xF3\x03\x00\x00\x0F\xB6\x03\xC1\xE7\x08\xC1\xE6\x08\x43"
    "\x09\xC7\x66\x8B\x11\x89\xF0\xC1\xE8\x0B\x0F\xB7\xEA\x0F\xAF\xC5"
    "\x39\xC7\x73\x2F\x89\x44\x24\x48\xB8\x00\x08\x00\x00\x29\xE8\xC1"
    "\x64\x24\x44\x04\xC1\xF8\x05\xC7\x44\x24\x2C\x00\x00\x00\x00\x8D"
    "\x04\x02\x66\x89\x01\x8B\x44\x24\x44\x8D\x4C\x01\x04\x89\x4C\x24"
    "\x10\xEB\x72\x29\xC6\x29\xC7\x89\xD0\x66\xC1\xE8\x05\x66\x29\xC2"
    "\x81\xFE\xFF\xFF\xFF\x00\x66\x89\x11\x77\x16\x3B\x5C\x24\x4C\x0F"
    "\x84\x84\x03\x00\x00\x0F\xB6\x03\xC1\xE7\x08\xC1\xE6\x08\x43\x09"
    "\xC7\x66\x8B\x51\x02\x89\xF0\xC1\xE8\x0B\x0F\xB7\xEA\x0F\xAF\xC5"
    "\x39\xC7\x73\x3B\x89\x44\x24\x48\xB8\x00\x08\x00\x00\x29\xE8\xC1"
    "\x64\x24\x44\x04\xC1\xF8\x05\xC7\x44\x24\x2C\x08\x00\x00\x00\x8D"
    "\x04\x02\x8B\x54\x24\x44\x66\x89\x41\x02\x8D\x8C\x11\x04\x01\x00"
    "\x00\x89\x4C\x24\x10\xC7\x44\x24\x30\x03\x00\x00\x00\xEB\x2F\x29"
    "\xC6\x29\xC7\x89\xD0\x89\x74\x24\x48\x66\xC1\xE8\x05\xC7\x44\x24"
    "\x2C\x10\x00\x00\x00\x66\x29\xC2\xC7\x44\x24\x30\x08\x00\x00\x00"
    "\x66\x89\x51\x02\x81\xC1\x04\x02\x00\x00\x89\x4C\x24\x10\x8B\x4C"
    "\x24\x30\xBA\x01\x00\x00\x00\x89\x4C\x24\x28\x8D\x2C\x12\x8B\x74"
    "\x24\x10\x01\xEE\x81\x7C\x24\x48\xFF\xFF\xFF\x00\x77\x18\x3B\x5C"
    "\x24\x4C\x0F\x84\xD1\x02\x00\x00\xC1\x64\x24\x48\x08\x0F\xB6\x03"
    "\xC1\xE7\x08\x43\x09\xC7\x8B\x44\x24\x48\x66\x8B\x16\xC1\xE8\x0B"
    "\x0F\xB7\xCA\x0F\xAF\xC1\x39\xC7\x73\x18\x89\x44\x24\x48\xB8\x00"
    "\x08\x00\x00\x29\xC8\xC1\xF8\x05\x8D\x04\x02\x89\xEA\x66\x89\x06"
    "\xEB\x15\x29\x44\x24\x48\x29\xC7\x89\xD0\x66\xC1\xE8\x05\x66\x29"
    "\xC2\x66\x89\x16\x8D\x55\x01\x8B\x74\x24\x28\x4E\x89\x74\x24\x28"
    "\x75\x89\x8A\x4C\x24\x30\xB8\x01\x00\x00\x00\xD3\xE0\x29\xC2\x03"
    "\x54\x24\x2C\x83\x7C\x24\x60\x03\x89\x54\x24\x0C\x0F\x8F\xE7\x01"
    "\x00\x00\x83\x44\x24\x60\x07\x83\xFA\x03\x89\xD0\x7E\x05\xB8\x03"
    "\x00\x00\x00\x8B\x74\x24\x78\xC1\xE0\x07\xC7\x44\x24\x24\x06\x00"
    "\x00\x00\x8D\x84\x06\x60\x03\x00\x00\x89\x44\x24\x08\xB8\x01\x00"
    "\x00\x00\x8D\x2C\x00\x8B\x74\x24\x08\x01\xEE\x81\x7C\x24\x48\xFF"
    "\xFF\xFF\x00\x77\x18\x3B\x5C\x24\x4C\x0F\x84\x0A\x02\x00\x00\xC1"
    "\x64\x24\x48\x08\x0F\xB6\x03\xC1\xE7\x08\x43\x09\xC7\x8B\x44\x24"
    "\x48\x66\x8B\x16\xC1\xE8\x0B\x0F\xB7\xCA\x0F\xAF\xC1\x39\xC7\x73"
    "\x18\x89\x44\x24\x48\xB8\x00\x08\x00\x00\x29\xC8\xC1\xF8\x05\x8D"
    "\x04\x02\x66\x89\x06\x89\xE8\xEB\x15\x29\x44\x24\x48\x29\xC7\x89"
    "\xD0\x66\xC1\xE8\x05\x66\x29\xC2\x8D\x45\x01\x66\x89\x16\x8B\x6C"
    "\x24\x24\x4D\x89\x6C\x24\x24\x75\x89\x8D\x50\xC0\x83\xFA\x03\x89"
    "\x14\x24\x0F\x8E\x27\x01\x00\x00\x89\xD0\x89\xD6\xD1\xF8\x83\xE6"
    "\x01\x8D\x48\xFF\x83\xCE\x02\x83\xFA\x0D\x89\x4C\x24\x20\x7F\x1C"
    "\x8B\x6C\x24\x78\xD3\xE6\x01\xD2\x89\x34\x24\x8D\x44\x75\x00\x29"
    "\xD0\x05\x5E\x05\x00\x00\x89\x44\x24\x04\xEB\x56\x8D\x50\xFB\x81"
    "\x7C\x24\x48\xFF\xFF\xFF\x00\x77\x18\x3B\x5C\x24\x4C\x0F\x84\x56"
    "\x01\x00\x00\xC1\x64\x24\x48\x08\x0F\xB6\x03\xC1\xE7\x08\x43\x09"
    "\xC7\xD1\x6C\x24\x48\x01\xF6\x3B\x7C\x24\x48\x72\x07\x2B\x7C\x24"
    "\x48\x83\xCE\x01\x4A\x75\xC8\x8B\x44\x24\x78\xC1\xE6\x04\x89\x34"
    "\x24\x05\x44\x06\x00\x00\xC7\x44\x24\x20\x04\x00\x00\x00\x89\x44"
    "\x24\x04\xC7\x44\x24\x1C\x01\x00\x00\x00\xB8\x01\x00\x00\x00\x8B"
    "\x6C\x24\x04\x01\xC0\x89\x44\x24\x18\x01\xC5\x81\x7C\x24\x48\xFF"
    "\xFF\xFF\x00\x77\x18\x3B\x5C\x24\x4C\x0F\x84\xEA\x00\x00\x00\xC1"
    "\x64\x24\x48\x08\x0F\xB6\x03\xC1\xE7\x08\x43\x09\xC7\x8B\x44\x24"
    "\x48\x66\x8B\x55\x00\xC1\xE8\x0B\x0F\xB7\xF2\x0F\xAF\xC6\x39\xC7"
    "\x73\x1B\x89\x44\x24\x48\xB8\x00\x08\x00\x00\x29\xF0\xC1\xF8\x05"
    "\x8D\x04\x02\x66\x89\x45\x00\x8B\x44\x24\x18\xEB\x1F\x29\x44\x24"
    "\x48\x29\xC7\x89\xD0\x66\xC1\xE8\x05\x66\x29\xC2\x8B\x44\x24\x18"
    "\x66\x89\x55\x00\x8B\x54\x24\x1C\x40\x09\x14\x24\x8B\x4C\x24\x20"
    "\xD1\x64\x24\x1C\x49\x89\x4C\x24\x20\x0F\x85\x70\xFF\xFF\xFF\x8B"
    "\x34\x24\x46\x89\x74\x24\x5C\x74\x59\x8B\x4C\x24\x0C\x8B\x6C\x24"
    "\x74\x83\xC1\x02\x39\x6C\x24\x5C\x77\x5F\x8B\x84\x24\xA0\x00\x00"
    "\x00\x89\xEA\x2B\x44\x24\x5C\x03\x94\x24\xA0\x00\x00\x00\x8D\x34"
    "\x28\x8A\x06\x46\x88\x44\x24\x73\x88\x02\x42\xFF\x44\x24\x74\x49"
    "\x74\x0F\x8B\xAC\x24\xA4\x00\x00\x00\x39\x6C\x24\x74\x72\xE2\xEB"
    "\x11\x8B\x84\x24\xA4\x00\x00\x00\x39\x44\x24\x74\x0F\x82\xBB\xF6"
    "\xFF\xFF\x81\x7C\x24\x48\xFF\xFF\xFF\x00\x77\x15\x3B\x5C\x24\x4C"
    "\xB8\x01\x00\x00\x00\x74\x29\xEB\x07\xB8\x01\x00\x00\x00\xEB\x20"
    "\x43\x2B\x9C\x24\x94\x00\x00\x00\x31\xC0\x8B\x94\x24\x9C\x00\x00"
    "\x00\x8B\x4C\x24\x74\x89\x1A\x8B\x9C\x24\xA8\x00\x00\x00\x89\x0B"
    "\x83\xC4\x7C\x5B\x5E\x5F\x5D\x03\x73\xFC\x03\x7B\xF8\x31\xC0\x8D"
    "\x8C\x24\x00\xFF\xFF\xFF\x89\xEC\x50\x39\xCC\x75\xFB\x89\xEC\x31"
    "\xC9\x5E\x8D\xBE\x00\x00\x00\x00\x89\xF7\xB9\x00\x00\x00\x00\x8A"
    "\x07\x47\x2C\xE8\x3C\x01\x77\xF7\x80\x3F\x00\x75\x04\x8B\x07\x8A"
    "\x5F\x04\x66\xC1\xE8\x08\x86\xC4\xC1\xC0\x10\x86\xC4\x29\xF8\x80"
    "\xEB\xE8\x01\xF0\x89\x07\x83\xC7\x05\x88\xD8\xE2\x09\xB9\x00\x00"
    "\x00\x00\xB0\xE8\xB0\xE9\xF2\xAE\x75\x06\x80\x3F\x00\x75\xFF\x8B"
    "\x07\x66\xC1\xE8\x08\x86\xC4\xC1\xC0\x10\x86\xC4\x29\xF8\x01\xF0"
    "\xAB\xEB\x04\xB9\x00\x00\x00\x00\xEB\x1E\x8A\x07\x83\xC7\x01\x3C"
    "\x80\x72\x0A\x3C\x8F\x77\x06\x80\x7F\xFE\x0F\x74\x05\x2C\xE8\x3C"
    "\x01\x77\xFF\x80\x3F\x00\x75\xFF\x8B\x07\x66\xC1\xE8\x08\xC1\xC0"
    "\x10\x86\xC4\x29\xF8\x01\xF0\x89\x07\x83\xC7\x04\x83\xE9\x04\x8A"
    "\x07\x83\xC7\x01\xE2\x0D\x83\xE9\x01\x7F\x06\x8D\xBE\x00\x00\x00"
    "\x00\x8B\x07\x09\xC0\x74\xFF\x8B\x5F\x04\x8D\x84\x30\x00\x00\x00"
    "\x00\x01\xF3\x50\x83\xC7\x08\xFF\x96\x00\x00\x00\x00\x95\x8A\x07"
    "\x47\x08\xC0\x74\xDC\x89\xF9\x79\x06\x7A\x0E\x8B\x07\x83\xC7\x04"
    "\x8B\x84\x30\x00\x00\x00\x00\xEB\x0E\x0F\xB7\x07\x47\x50\x47\xB9"
    "\x57\x48\xF2\xAE\x55\xFF\x96\x00\x00\x00\x00\x09\xC0\x74\x07\x89"
    "\x03\x83\xC3\x04\xEB\x22\x61\x31\xC0\xC2\x0C\x00\xFF\x96\x00\x00"
    "\x00\x00\x8D\xBE\x00\x00\x00\x00\x83\xC7\x04\x8D\x5E\xFC\x31\xC0"
    "\x8A\x07\x47\x09\xC0\x74\x01\x3C\xEF\x77\x11\x01\xC3\x8B\x03\x86"
    "\xC4\xC1\xC0\x10\x86\xC4\x01\xF0\x89\x03\xEB\xE2\x24\x0F\xC1\xE0"
    "\x10\x66\x8B\x07\x83\xC7\x02\x09\xC0\x75\x0C\x8B\x07\x83\xC7\x04"
    "\xEB\x0C\x87\xF7\x8D\x8F\x00\x00\x00\x00\xA9\x66\x01\x0C\x07\xAD"
    "\x09\xC0\x75\xF7\xC1\xE9\x10\xA9\x66\x01\x0C\x07\xAD\x09\xC0\x75"
    "\xF7\x8B\xAE\x00\x00\x00\x00\x8D\xBE\x00\x00\x00\x00\xBB\x00\x00"
    "\x00\x00\x50\x54\x6A\x04\x53\x57\xFF\xD5\x8D\x87\x00\x00\x00\x00"
    "\x80\x20\x7F\x80\x60\x28\x7F\x58\x50\x54\x50\x53\x57\xFF\xD5\x58"
    "\x8D\x9E\x00\x00\x00\x00\x8D\xBB\x01\x00\x00\x00\x57\x31\xC0\xAA"
    "\x59\x49\x50\x6A\x01\x53\xFF\xD1\x61\x8D\x44\x24\x80\x6A\x00\x39"
    "\xC4\x75\xFA\x83\xEC\x80\x31\xC0\x40\xC2\x0C\x00\xE9\xFC\xFF\xFF"
    "\xFF\xEB\x1A\x56\xBE\x00\x00\x00\x00\xFC\xAD\x85\xC0\x74\x0D\x6A"
    "\x03\x59\xFF\x74\x24\x10\xE2\xFA\xFF\xD0\xEB\xEE\x5E\xC2\x0C\x00"
    "\x55\x50\x58\x21\xA1\xD8\xD0\xD5\x00\x00\x00\x00\x00\x00\x00\x00"
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x2D"

#if defined(MOD)
    // MYPEMAIN01
    "\x53\x55\x56\x57\xBE\x00\x00\x00\x00\x8D\xBE\x00\x00\x00\x00"

    // MYPEMAIN20
    "\x5F\x5E\x5D\x5B"

    // MYPEIEREXE
    "\xE8\x0C\x00\x00\x00\x45\x78\x69\x74\x50\x72\x6F\x63\x65\x73\x73"
    "\x00\xFF\x74\x24\x08\xFF\x96\x00\x00\x00\x00\x6A\x00\xFF\xD0"

    // MYPEDEPHAK
    "\x8D\xBE\x00\x00\x00\x00\xE8\x0F\x00\x00\x00\x56\x69\x72\x74\x75"
    "\x61\x6C\x50\x72\x6F\x74\x65\x63\x74\x00\xFF\x74\x24\x08\xFF\x96"
    "\x00\x00\x00\x00\x95\xBB\x00\x00\x00\x00\x33\xC0\x50\x54\x6A\x04"
    "\x53\x57\xFF\xD5\x8D\x87\x00\x00\x00\x00\x80\x20\x7F\x80\x60\x28"
    "\x7F\x58\x50\x54\x50\x53\x57\xFF\xD5\x83\xC4\x0C"

    // MYPEIMPORT

    "\x8D\xBE\x00\x00\x00\x00\x8D\x46\x34\x8D\x80\x00\x00\x00\x00\x50"
    "\x54\x50\x6A\x00\xFF\x96\x00\x00\x00\x00\x58\x50\xE8\x0D\x00\x00"
    "\x00\x4C\x6F\x61\x64\x4C\x69\x62\x72\x61\x72\x79\x41\x00\x50\xFF"
    "\x96\x00\x00\x00\x00\x50\x8B\x07\x09\xC0\x0F\x84\xFC\xFF\xFF\xFF"
    "\x8B\x5F\x04\x03\xDE\x83\xC7\x08\x57\xFF\x54\x24\x04\x50\x54\x57"
    "\x6A\x01\xFF\x96\x00\x00\x00\x00\x5D\x33\xC0\x8B\xCF\xF2\xAE"

    // MYPEIMPORT_2
    "\x8A\x07\x47\x08\xC0\x74\xD0\x8B\xCF"

    // MYPEIMPOR2
    "\x57\x48\xF2\xAE\x55\xFF\x96\x00\x00\x00\x00\x09\xC0\x74\x07\x89"
    "\x03\x83\xC3\x04\xEB\xFF"

    // MYCLEARSTACK
    "\x6A\x20\x59\x33\xC0\x50\xE2\xFD\x83\xEC\x80"

    // MYPEIERDLL
    "\x83\xC4\x08\x61\x31\xC0\xC2\x0C\x00"

#endif

    "file format elf32-i386\n"
    "\n"
    "Sections:\n"
    "Idx Name          Size      VMA       LMA       File off  Algn  Flags\n"
    "  0 PEISDLL1      0000000b  00000000  00000000  00000034  2**0  CONTENTS, RELOC, READONLY\n"
    "  1 PEMAIN01      0000000c  00000000  00000000  0000003f  2**0  CONTENTS, RELOC, READONLY\n"
    "  2 PEICONS1      00000007  00000000  00000000  0000004b  2**0  CONTENTS, RELOC, READONLY\n"
    "  3 PEICONS2      00000009  00000000  00000000  00000052  2**0  CONTENTS, RELOC, READONLY\n"
    "  4 PETLSHAK      0000000a  00000000  00000000  0000005b  2**0  CONTENTS, RELOC, READONLY\n"
    "  5 PEMAIN02      00000001  00000000  00000000  00000065  2**0  CONTENTS, READONLY\n"
    "  6 PEMAIN03      00000003  00000000  00000000  00000066  2**0  CONTENTS, READONLY\n"
    "  7 N2BSMA10      00000003  00000000  00000000  00000069  2**0  CONTENTS, RELOC, READONLY\n"
    "  8 N2BFAS10      00000002  00000000  00000000  0000006c  2**0  CONTENTS, RELOC, READONLY\n"
    "  9 N2BFAS11      00000006  00000000  00000000  0000006e  2**0  CONTENTS, READONLY\n"
    " 10 N2BDEC10      0000000b  00000000  00000000  00000074  2**0  CONTENTS, READONLY\n"
    " 11 N2BSMA20      00000005  00000000  00000000  0000007f  2**0  CONTENTS, RELOC, READONLY\n"
    " 12 N2BFAS20      00000007  00000000  00000000  00000084  2**0  CONTENTS, RELOC, READONLY\n"
    " 13 N2BDEC20      0000000d  00000000  00000000  0000008b  2**0  CONTENTS, READONLY\n"
    " 14 N2BSMA30      0000000d  00000000  00000000  00000098  2**0  CONTENTS, RELOC, READONLY\n"
    " 15 N2BFAS30      0000000f  00000000  00000000  000000a5  2**0  CONTENTS, RELOC, READONLY\n"
    " 16 N2BDEC30      0000003e  00000000  00000000  000000b4  2**0  CONTENTS, RELOC, READONLY\n"
    " 17 N2BSMA40      0000000d  00000000  00000000  000000f2  2**0  CONTENTS, RELOC, READONLY\n"
    " 18 N2BFAS40      0000000f  00000000  00000000  000000ff  2**0  CONTENTS, RELOC, READONLY\n"
    " 19 N2BSMA50      00000002  00000000  00000000  0000010e  2**0  CONTENTS, READONLY\n"
    " 20 N2BFAS50      00000003  00000000  00000000  00000110  2**0  CONTENTS, READONLY\n"
    " 21 N2BDEC50      00000009  00000000  00000000  00000113  2**0  CONTENTS, READONLY\n"
    " 22 N2BSMA60      0000000e  00000000  00000000  0000011c  2**0  CONTENTS, RELOC, READONLY\n"
    " 23 N2BFAS60      00000016  00000000  00000000  0000012a  2**0  CONTENTS, RELOC, READONLY\n"
    " 24 N2BFAS61      00000016  00000000  00000000  00000140  2**0  CONTENTS, RELOC, READONLY\n"
    " 25 N2BDEC60      00000000  00000000  00000000  00000156  2**0  CONTENTS, READONLY\n"
    " 26 N2DSMA10      00000003  00000000  00000000  00000156  2**0  CONTENTS, RELOC, READONLY\n"
    " 27 N2DFAS10      00000002  00000000  00000000  00000159  2**0  CONTENTS, RELOC, READONLY\n"
    " 28 N2DFAS11      00000006  00000000  00000000  0000015b  2**0  CONTENTS, READONLY\n"
    " 29 N2DDEC10      0000000b  00000000  00000000  00000161  2**0  CONTENTS, READONLY\n"
    " 30 N2DSMA20      00000005  00000000  00000000  0000016c  2**0  CONTENTS, RELOC, READONLY\n"
    " 31 N2DFAS20      00000007  00000000  00000000  00000171  2**0  CONTENTS, RELOC, READONLY\n"
    " 32 N2DDEC20      0000000d  00000000  00000000  00000178  2**0  CONTENTS, READONLY\n"
    " 33 N2DSMA30      0000000d  00000000  00000000  00000185  2**0  CONTENTS, RELOC, READONLY\n"
    " 34 N2DFAS30      0000000f  00000000  00000000  00000192  2**0  CONTENTS, RELOC, READONLY\n"
    " 35 N2DDEC30      00000052  00000000  00000000  000001a1  2**0  CONTENTS, RELOC, READONLY\n"
    " 36 N2DSMA40      0000000d  00000000  00000000  000001f3  2**0  CONTENTS, RELOC, READONLY\n"
    " 37 N2DFAS40      0000000f  00000000  00000000  00000200  2**0  CONTENTS, RELOC, READONLY\n"
    " 38 N2DSMA50      00000002  00000000  00000000  0000020f  2**0  CONTENTS, READONLY\n"
    " 39 N2DFAS50      00000003  00000000  00000000  00000211  2**0  CONTENTS, READONLY\n"
    " 40 N2DDEC50      00000009  00000000  00000000  00000214  2**0  CONTENTS, READONLY\n"
    " 41 N2DSMA60      0000000e  00000000  00000000  0000021d  2**0  CONTENTS, RELOC, READONLY\n"
    " 42 N2DFAS60      00000016  00000000  00000000  0000022b  2**0  CONTENTS, RELOC, READONLY\n"
    " 43 N2DFAS61      00000016  00000000  00000000  00000241  2**0  CONTENTS, RELOC, READONLY\n"
    " 44 N2DDEC60      00000000  00000000  00000000  00000257  2**0  CONTENTS, READONLY\n"
    " 45 N2ESMA10      00000003  00000000  00000000  00000257  2**0  CONTENTS, RELOC, READONLY\n"
    " 46 N2EFAS10      00000002  00000000  00000000  0000025a  2**0  CONTENTS, RELOC, READONLY\n"
    " 47 N2EFAS11      00000006  00000000  00000000  0000025c  2**0  CONTENTS, READONLY\n"
    " 48 N2EDEC10      0000000b  00000000  00000000  00000262  2**0  CONTENTS, READONLY\n"
    " 49 N2ESMA20      00000005  00000000  00000000  0000026d  2**0  CONTENTS, RELOC, READONLY\n"
    " 50 N2EFAS20      00000007  00000000  00000000  00000272  2**0  CONTENTS, RELOC, READONLY\n"
    " 51 N2EDEC20      0000000d  00000000  00000000  00000279  2**0  CONTENTS, READONLY\n"
    " 52 N2ESMA30      0000000d  00000000  00000000  00000286  2**0  CONTENTS, RELOC, READONLY\n"
    " 53 N2EFAS30      0000000f  00000000  00000000  00000293  2**0  CONTENTS, RELOC, READONLY\n"
    " 54 N2EDEC30      0000005f  00000000  00000000  000002a2  2**0  CONTENTS, RELOC, READONLY\n"
    " 55 N2ESMA40      0000000d  00000000  00000000  00000301  2**0  CONTENTS, RELOC, READONLY\n"
    " 56 N2EFAS40      0000000f  00000000  00000000  0000030e  2**0  CONTENTS, RELOC, READONLY\n"
    " 57 N2ESMA50      00000002  00000000  00000000  0000031d  2**0  CONTENTS, READONLY\n"
    " 58 N2EFAS50      00000003  00000000  00000000  0000031f  2**0  CONTENTS, READONLY\n"
    " 59 N2EDEC50      00000009  00000000  00000000  00000322  2**0  CONTENTS, READONLY\n"
    " 60 N2ESMA60      0000000e  00000000  00000000  0000032b  2**0  CONTENTS, RELOC, READONLY\n"
    " 61 N2EFAS60      00000016  00000000  00000000  00000339  2**0  CONTENTS, RELOC, READONLY\n"
    " 62 N2EFAS61      00000016  00000000  00000000  0000034f  2**0  CONTENTS, RELOC, READONLY\n"
    " 63 N2EDEC60      00000000  00000000  00000000  00000365  2**0  CONTENTS, READONLY\n"
    " 64 LZMA_DEC00    0000002e  00000000  00000000  00000365  2**0  CONTENTS, RELOC, READONLY\n"
    " 65 LZMA_ELF00    00000048  00000000  00000000  00000393  2**0  CONTENTS, READONLY\n"
    " 66 LZMA_DEC10    00000a86  00000000  00000000  000003db  2**0  CONTENTS, READONLY\n"
    " 67 LZMA_DEC20    00000a86  00000000  00000000  00000e61  2**0  CONTENTS, READONLY\n"
    " 68 LZMA_DEC30    0000001a  00000000  00000000  000018e7  2**0  CONTENTS, READONLY\n"
    " 69 PEMAIN10      00000001  00000000  00000000  00001901  2**0  CONTENTS, READONLY\n"
    " 70 PECTTPOS      00000006  00000000  00000000  00001902  2**0  CONTENTS, RELOC, READONLY\n"
    " 71 PECTTNUL      00000002  00000000  00000000  00001908  2**0  CONTENTS, READONLY\n"
    " 72 CALLTR00      0000000e  00000000  00000000  0000190a  2**0  CONTENTS, RELOC, READONLY\n"
    " 73 CTCLEVE1      00000005  00000000  00000000  00001918  2**0  CONTENTS, RELOC, READONLY\n"
    " 74 CALLTR01      00000005  00000000  00000000  0000191d  2**0  CONTENTS, READONLY\n"
    " 75 CTBSHR01      00000004  00000000  00000000  00001922  2**0  CONTENTS, READONLY\n"
    " 76 CTBROR01      00000002  00000000  00000000  00001926  2**0  CONTENTS, READONLY\n"
    " 77 CTBSWA01      00000005  00000000  00000000  00001928  2**0  CONTENTS, READONLY\n"
    " 78 CALLTR02      00000010  00000000  00000000  0000192d  2**0  CONTENTS, RELOC, READONLY\n"
    " 79 CALLTR10      00000005  00000000  00000000  0000193d  2**0  CONTENTS, RELOC, READONLY\n"
    " 80 CALLTRE8      00000002  00000000  00000000  00001942  2**0  CONTENTS, READONLY\n"
    " 81 CALLTRE9      00000002  00000000  00000000  00001944  2**0  CONTENTS, READONLY\n"
    " 82 CALLTR11      00000004  00000000  00000000  00001946  2**0  CONTENTS, RELOC, READONLY\n"
    " 83 CTCLEVE2      00000005  00000000  00000000  0000194a  2**0  CONTENTS, RELOC, READONLY\n"
    " 84 CALLTR12      00000002  00000000  00000000  0000194f  2**0  CONTENTS, READONLY\n"
    " 85 CTBSHR11      00000004  00000000  00000000  00001951  2**0  CONTENTS, READONLY\n"
    " 86 CTBROR11      00000002  00000000  00000000  00001955  2**0  CONTENTS, READONLY\n"
    " 87 CTBSWA11      00000005  00000000  00000000  00001957  2**0  CONTENTS, READONLY\n"
    " 88 CALLTR13      00000007  00000000  00000000  0000195c  2**0  CONTENTS, RELOC, READONLY\n"
    " 89 ctok32.00     0000000c  00000000  00000000  00001963  2**0  CONTENTS, RELOC, READONLY\n"
    " 90 ctok32.10     0000000e  00000000  00000000  0000196f  2**0  CONTENTS, RELOC, READONLY\n"
    " 91 ctok32.20     00000022  00000000  00000000  0000197d  2**0  CONTENTS, RELOC, READONLY\n"
    " 92 ctok32.30     00000007  00000000  00000000  0000199f  2**0  CONTENTS, RELOC, READONLY\n"
    " 93 ctok32.40     00000005  00000000  00000000  000019a6  2**0  CONTENTS, RELOC, READONLY\n"
    " 94 PEIMPORT      0000002c  00000000  00000000  000019ab  2**0  CONTENTS, RELOC, READONLY\n"
    " 95 PEIBYORD      00000002  00000000  00000000  000019d7  2**0  CONTENTS, RELOC, READONLY\n"
    " 96 PEK32ORD      00000010  00000000  00000000  000019d9  2**0  CONTENTS, RELOC, READONLY\n"
    " 97 PEIMORD1      00000007  00000000  00000000  000019e9  2**0  CONTENTS, READONLY\n"
    " 98 PEIMPOR2      00000016  00000000  00000000  000019f0  2**0  CONTENTS, RELOC, READONLY\n"
    " 99 PEIERDLL      00000006  00000000  00000000  00001a06  2**0  CONTENTS, READONLY\n"
    "100 PEIEREXE      00000006  00000000  00000000  00001a0c  2**0  CONTENTS, RELOC, READONLY\n"
    "101 PEIMDONE      00000000  00000000  00000000  00001a12  2**0  CONTENTS, READONLY\n"
    "102 PERELOC1      00000006  00000000  00000000  00001a12  2**0  CONTENTS, RELOC, READONLY\n"
    "103 PERELOC2      00000003  00000000  00000000  00001a18  2**0  CONTENTS, READONLY\n"
    "104 PERELOC3      00000003  00000000  00000000  00001a1b  2**0  CONTENTS, READONLY\n"
    "105 RELOC320      00000029  00000000  00000000  00001a1e  2**0  CONTENTS, RELOC, READONLY\n"
    "106 REL32BIG      00000009  00000000  00000000  00001a47  2**0  CONTENTS, RELOC, READONLY\n"
    "107 RELOC32J      00000002  00000000  00000000  00001a50  2**0  CONTENTS, RELOC, READONLY\n"
    "108 REL32END      00000000  00000000  00000000  00001a52  2**0  CONTENTS, READONLY\n"
    "109 PERLOHI0      00000008  00000000  00000000  00001a52  2**0  CONTENTS, RELOC, READONLY\n"
    "110 PERELLO0      0000000a  00000000  00000000  00001a5a  2**0  CONTENTS, READONLY\n"
    "111 PERELHI0      0000000d  00000000  00000000  00001a64  2**0  CONTENTS, READONLY\n"
    "112 PEDEPHAK      0000002f  00000000  00000000  00001a71  2**0  CONTENTS, RELOC, READONLY\n"
    "113 PETLSC        00000018  00000000  00000000  00001aa0  2**0  CONTENTS, RELOC, READONLY\n"
    "114 PEMAIN20      00000001  00000000  00000000  00001ab8  2**0  CONTENTS, READONLY\n"
    "115 CLEARSTACK    0000000d  00000000  00000000  00001ab9  2**0  CONTENTS, READONLY\n"
    "116 PEMAIN21      00000000  00000000  00000000  00001ac6  2**0  CONTENTS, READONLY\n"
    "117 PERETURN      00000006  00000000  00000000  00001ac6  2**0  CONTENTS, READONLY\n"
    "118 PEDOJUMP      00000005  00000000  00000000  00001acc  2**0  CONTENTS, RELOC, READONLY\n"
    "119 PETLSC2       0000001f  00000000  00000000  00001ad1  2**0  CONTENTS, RELOC, READONLY\n"
    "120 UPX1HEAD      00000020  00000000  00000000  00001af0  2**0  CONTENTS, READONLY\n"
#if defined(MOD)
    "129 MYPEK32ORD    00000010  00000000  00000000  000019d9  2**0  CONTENTS, RELOC, READONLY\n"

    "200 MYPEMAIN01    0000000f  00000000  00000000  00001b10  2**0  CONTENTS, RELOC, READONLY\n"
    "201 MYPEMAIN20    00000004  00000000  00000000  00001b1f  2**0  CONTENTS, READONLY\n"
    "202 MYPEIEREXE    0000001f  00000000  00000000  00001b23  2**0  CONTENTS, RELOC, READONLY\n"
    "203 MYPEDEPHAK    0000004c  00000000  00000000  00001b42  2**0  CONTENTS, RELOC, READONLY\n"
    "204 MYPEIMPORT    0000005f  00000000  00000000  00001b8e  2**0  CONTENTS, RELOC, READONLY\n"
    "205 MYPEIMPORT_2  00000009  00000000  00000000  00001bed  2**0  CONTENTS, RELOC, READONLY\n"
    "206 MYPEIMPOR2    00000016  00000000  00000000  00001bf6  2**0  CONTENTS, RELOC, READONLY\n"
    "207 MYCLEARSTACK  0000000b  00000000  00000000  00001c0c  2**0  CONTENTS, READONLY\n"
    "208 MYPEIERDLL    00000009  00000000  00000000  00001c17  2**0  CONTENTS, READONLY\n"
#endif
    "SYMBOL TABLE:\n"
    "00000000 l    d  N2BSMA10	00000000 N2BSMA10\n"
    "00000000 l    d  N2BFAS11	00000000 N2BFAS11\n"
    "00000000 l    d  N2BDEC10	00000000 N2BDEC10\n"
    "00000000 l    d  N2BDEC20	00000000 N2BDEC20\n"
    "00000000 l    d  N2BDEC30	00000000 N2BDEC30\n"
    "00000000 l    d  N2BDEC50	00000000 N2BDEC50\n"
    "00000000 l    d  N2BFAS61	00000000 N2BFAS61\n"
    "00000000 l    d  N2BDEC60	00000000 N2BDEC60\n"
    "00000000 l    d  N2DSMA10	00000000 N2DSMA10\n"
    "00000000 l    d  N2DFAS11	00000000 N2DFAS11\n"
    "00000000 l    d  N2DDEC10	00000000 N2DDEC10\n"
    "00000000 l    d  N2DDEC20	00000000 N2DDEC20\n"
    "00000000 l    d  N2DDEC30	00000000 N2DDEC30\n"
    "00000000 l    d  N2DDEC50	00000000 N2DDEC50\n"
    "00000000 l    d  N2DFAS61	00000000 N2DFAS61\n"
    "00000000 l    d  N2DDEC60	00000000 N2DDEC60\n"
    "00000000 l    d  N2ESMA10	00000000 N2ESMA10\n"
    "00000000 l    d  N2EFAS11	00000000 N2EFAS11\n"
    "00000000 l    d  N2EDEC10	00000000 N2EDEC10\n"
    "00000000 l    d  N2EDEC20	00000000 N2EDEC20\n"
    "00000000 l    d  N2EDEC30	00000000 N2EDEC30\n"
    "00000000 l    d  N2EDEC50	00000000 N2EDEC50\n"
    "00000000 l    d  N2EFAS61	00000000 N2EFAS61\n"
    "00000000 l    d  N2EDEC60	00000000 N2EDEC60\n"
    "00000000 l    d  CALLTR00	00000000 CALLTR00\n"
    "00000000 l    d  CALLTR10	00000000 CALLTR10\n"
    "00000000 l    d  CALLTR11	00000000 CALLTR11\n"
    "00000000 l    d  CALLTR13	00000000 CALLTR13\n"
    "00000000 l    d  ctok32.00	00000000 ctok32.00\n"
    "00000000 l    d  ctok32.10	00000000 ctok32.10\n"
    "00000000 l    d  ctok32.20	00000000 ctok32.20\n"
    "00000000 l    d  ctok32.40	00000000 ctok32.40\n"
    "00000000 l    d  PEIMPORT	00000000 PEIMPORT\n"
    "00000000 l    d  PEIMORD1	00000000 PEIMORD1\n"
    "00000000 l    d  PEIMPOR2	00000000 PEIMPOR2\n"
    "00000000 l    d  PEIMDONE	00000000 PEIMDONE\n"
    "00000000 l    d  RELOC320	00000000 RELOC320\n"
    "00000000 l    d  RELOC32J	00000000 RELOC32J\n"
    "00000000 l    d  PEMAIN21	00000000 PEMAIN21\n"
    "00000000 l    d  PETLSC2	00000000 PETLSC2\n"
    "00000000 l    d  PEISDLL1	00000000 PEISDLL1\n"
    "00000000 l    d  PEMAIN01	00000000 PEMAIN01\n"
    "00000000 l    d  PEICONS1	00000000 PEICONS1\n"
    "00000000 l    d  PEICONS2	00000000 PEICONS2\n"
    "00000000 l    d  PETLSHAK	00000000 PETLSHAK\n"
    "00000000 l    d  PEMAIN02	00000000 PEMAIN02\n"
    "00000000 l    d  PEMAIN03	00000000 PEMAIN03\n"
    "00000000 l    d  N2BFAS10	00000000 N2BFAS10\n"
    "00000000 l    d  N2BSMA20	00000000 N2BSMA20\n"
    "00000000 l    d  N2BFAS20	00000000 N2BFAS20\n"
    "00000000 l    d  N2BSMA30	00000000 N2BSMA30\n"
    "00000000 l    d  N2BFAS30	00000000 N2BFAS30\n"
    "00000000 l    d  N2BSMA40	00000000 N2BSMA40\n"
    "00000000 l    d  N2BFAS40	00000000 N2BFAS40\n"
    "00000000 l    d  N2BSMA50	00000000 N2BSMA50\n"
    "00000000 l    d  N2BFAS50	00000000 N2BFAS50\n"
    "00000000 l    d  N2BSMA60	00000000 N2BSMA60\n"
    "00000000 l    d  N2BFAS60	00000000 N2BFAS60\n"
    "00000000 l    d  N2DFAS10	00000000 N2DFAS10\n"
    "00000000 l    d  N2DSMA20	00000000 N2DSMA20\n"
    "00000000 l    d  N2DFAS20	00000000 N2DFAS20\n"
    "00000000 l    d  N2DSMA30	00000000 N2DSMA30\n"
    "00000000 l    d  N2DFAS30	00000000 N2DFAS30\n"
    "00000000 l    d  N2DSMA40	00000000 N2DSMA40\n"
    "00000000 l    d  N2DFAS40	00000000 N2DFAS40\n"
    "00000000 l    d  N2DSMA50	00000000 N2DSMA50\n"
    "00000000 l    d  N2DFAS50	00000000 N2DFAS50\n"
    "00000000 l    d  N2DSMA60	00000000 N2DSMA60\n"
    "00000000 l    d  N2DFAS60	00000000 N2DFAS60\n"
    "00000000 l    d  N2EFAS10	00000000 N2EFAS10\n"
    "00000000 l    d  N2ESMA20	00000000 N2ESMA20\n"
    "00000000 l    d  N2EFAS20	00000000 N2EFAS20\n"
    "00000000 l    d  N2ESMA30	00000000 N2ESMA30\n"
    "00000000 l    d  N2EFAS30	00000000 N2EFAS30\n"
    "00000000 l    d  N2ESMA40	00000000 N2ESMA40\n"
    "00000000 l    d  N2EFAS40	00000000 N2EFAS40\n"
    "00000000 l    d  N2ESMA50	00000000 N2ESMA50\n"
    "00000000 l    d  N2EFAS50	00000000 N2EFAS50\n"
    "00000000 l    d  N2ESMA60	00000000 N2ESMA60\n"
    "00000000 l    d  N2EFAS60	00000000 N2EFAS60\n"
    "00000000 l    d  LZMA_DEC00	00000000 LZMA_DEC00\n"
    "00000000 l    d  LZMA_ELF00	00000000 LZMA_ELF00\n"
    "00000000 l    d  LZMA_DEC10	00000000 LZMA_DEC10\n"
    "00000000 l    d  LZMA_DEC20	00000000 LZMA_DEC20\n"
    "00000000 l    d  LZMA_DEC30	00000000 LZMA_DEC30\n"
    "00000000 l    d  PEMAIN10	00000000 PEMAIN10\n"
    "00000000 l    d  PECTTPOS	00000000 PECTTPOS\n"
    "00000000 l    d  PECTTNUL	00000000 PECTTNUL\n"
    "00000000 l    d  CTCLEVE1	00000000 CTCLEVE1\n"
    "00000000 l    d  CALLTR01	00000000 CALLTR01\n"
    "00000000 l    d  CTBSHR01	00000000 CTBSHR01\n"
    "00000000 l    d  CTBROR01	00000000 CTBROR01\n"
    "00000000 l    d  CTBSWA01	00000000 CTBSWA01\n"
    "00000000 l    d  CALLTR02	00000000 CALLTR02\n"
    "00000000 l    d  CALLTRE8	00000000 CALLTRE8\n"
    "00000000 l    d  CALLTRE9	00000000 CALLTRE9\n"
    "00000000 l    d  CTCLEVE2	00000000 CTCLEVE2\n"
    "00000000 l    d  CALLTR12	00000000 CALLTR12\n"
    "00000000 l    d  CTBSHR11	00000000 CTBSHR11\n"
    "00000000 l    d  CTBROR11	00000000 CTBROR11\n"
    "00000000 l    d  CTBSWA11	00000000 CTBSWA11\n"
    "00000000 l    d  ctok32.30	00000000 ctok32.30\n"
    "00000000 l    d  PEIBYORD	00000000 PEIBYORD\n"
    "00000000 l    d  PEK32ORD	00000000 PEK32ORD\n"
    "00000000 l    d  PEIERDLL	00000000 PEIERDLL\n"
    "00000000 l    d  PEIEREXE	00000000 PEIEREXE\n"
    "00000000 l    d  PERELOC1	00000000 PERELOC1\n"
    "00000000 l    d  PERELOC2	00000000 PERELOC2\n"
    "00000000 l    d  PERELOC3	00000000 PERELOC3\n"
    "00000000 l    d  REL32BIG	00000000 REL32BIG\n"
    "00000000 l    d  REL32END	00000000 REL32END\n"
    "00000000 l    d  PERLOHI0	00000000 PERLOHI0\n"
    "00000000 l    d  PERELLO0	00000000 PERELLO0\n"
    "00000000 l    d  PERELHI0	00000000 PERELHI0\n"
    "00000000 l    d  PEDEPHAK	00000000 PEDEPHAK\n"
    "00000000 l    d  PETLSC	00000000 PETLSC\n"
    "00000000 l    d  PEMAIN20	00000000 PEMAIN20\n"
    "00000000 l    d  CLEARSTACK	00000000 CLEARSTACK\n"
    "00000000 l    d  PERETURN	00000000 PERETURN\n"
    "00000000 l    d  PEDOJUMP	00000000 PEDOJUMP\n"
    "00000000 l    d  UPX1HEAD	00000000 UPX1HEAD\n"
#if defined(MOD)
    "00000000 l    d  MYPEMAIN01	00000000 MYPEMAIN01\n"
    "00000000 l    d  MYPEMAIN20	00000000 MYPEMAIN20\n"
    "00000000 l    d  MYPEIMPORT	00000000 MYPEIMPORT\n"
    "00000000 l    d  MYPEIMPORT_2	00000000 MYPEIMPORT_2\n"
    "00000000 l    d  MYPEIMPOR2	00000000 MYPEIMPOR2\n"
    "00000000 l    d  MYPEDEPHAK	00000000 MYPEDEPHAK\n"
    "00000000 l    d  MYPEIEREXE	00000000 MYPEIEREXE\n"
    "00000000 l    d  MYPEIERDLL	00000000 MYPEIERDLL\n"
    "00000000 l    d  MYPEK32ORD	00000000 MYPEK32ORD\n"
    "00000000 l    d  MYCLEARSTACK	00000000 MYCLEARSTACK\n"
#endif
    "00000000         *UND*	00000000 start_of_compressed\n"
    "00000000         *UND*	00000000 start_of_uncompressed\n"
    "00000000         *UND*	00000000 icon_offset\n"
    "00000000         *UND*	00000000 icon_delta\n"
    "00000000         *UND*	00000000 tls_address\n"
    "00000000         *UND*	00000000 tls_value\n"
    "00000000         *UND*	00000000 lzma_stack_adjust\n"
    "00000000         *UND*	00000000 lzma_u_len\n"
    "00000000         *UND*	00000000 lzma_c_len\n"
    "00000000         *UND*	00000000 lzma_properties\n"
    "00000000         *UND*	00000000 filter_buffer_start\n"
    "00000000         *UND*	00000000 filter_length\n"
    "00000000         *UND*	00000000 filter_cto\n"
    "00000000         *UND*	00000000 compressed_imports\n"
    "00000000         *UND*	00000000 start_of_imports\n"
    "00000000         *UND*	00000000 GetModuleHandleExA\n"
    "00000000         *UND*	00000000 kernel32_ordinals\n"
    "00000000         *UND*	00000000 GetProcAddress\n"
    "00000000         *UND*	00000000 ExitProcess\n"
    "00000000         *UND*	00000000 start_of_relocs\n"
    "00000000         *UND*	00000000 reloc_delt\n"
    "00000000         *UND*	00000000 VirtualProtect\n"
    "00000000         *UND*	00000000 vp_base\n"
    "00000000         *UND*	00000000 vp_size\n"
    "00000000         *UND*	00000000 swri\n"
    "00000000         *UND*	00000000 tls_module_base\n"
    "00000000         *UND*	00000000 original_entry\n"
    "00000000         *UND*	00000000 tls_callbacks_ptr\n"
    "\n"
    "RELOCATION RECORDS FOR [PEISDLL1]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000007 R_386_PC32        PEMAIN21\n"
    "\n"
    "RELOCATION RECORDS FOR [PEMAIN01]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_32          start_of_compressed\n"
    "00000008 R_386_32          start_of_uncompressed\n"
    "\n"
    "RELOCATION RECORDS FOR [PEICONS1]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000003 R_386_32          icon_offset\n"
    "\n"
    "RELOCATION RECORDS FOR [PEICONS2]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000003 R_386_32          icon_offset\n"
    "00000007 R_386_16          icon_delta\n"
    "\n"
    "RELOCATION RECORDS FOR [PETLSHAK]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_32          tls_address\n"
    "00000006 R_386_32          tls_value\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BSMA10]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2BDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BFAS10]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2BDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BSMA20]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2BSMA10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BFAS20]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2BFAS11\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BSMA30]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000c R_386_PC8         N2BDEC20\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BFAS30]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000003 R_386_PC8         N2BDEC20\n"
    "0000000e R_386_PC8         N2BDEC20\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BDEC30]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000011 R_386_PC8         N2BDEC60\n"
    "0000002f R_386_PC8         N2BDEC50\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BSMA40]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000c R_386_PC8         N2BDEC30\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BFAS40]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000003 R_386_PC8         N2BDEC30\n"
    "0000000e R_386_PC8         N2BDEC30\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BSMA60]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000a R_386_PC32        N2BDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BFAS60]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000007 R_386_PC8         N2BFAS61\n"
    "00000012 R_386_PC32        N2BDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2BFAS61]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000012 R_386_PC32        N2BDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DSMA10]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2DDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DFAS10]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2DDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DSMA20]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2DSMA10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DFAS20]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2DFAS11\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DSMA30]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000c R_386_PC8         N2DDEC30\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DFAS30]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000005 R_386_PC8         N2DDEC30\n"
    "0000000e R_386_PC8         N2DDEC30\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DDEC30]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000f R_386_PC8         N2DDEC20\n"
    "00000021 R_386_PC8         N2DDEC60\n"
    "00000043 R_386_PC8         N2DDEC50\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DSMA40]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000c R_386_PC8         N2DDEC30\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DFAS40]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000003 R_386_PC8         N2DDEC30\n"
    "0000000e R_386_PC8         N2DDEC30\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DSMA60]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000a R_386_PC32        N2DDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DFAS60]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000007 R_386_PC8         N2DFAS61\n"
    "00000012 R_386_PC32        N2DDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2DFAS61]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000012 R_386_PC32        N2DDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2ESMA10]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2EDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2EFAS10]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2EDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2ESMA20]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2ESMA10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2EFAS20]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         N2EFAS11\n"
    "\n"
    "RELOCATION RECORDS FOR [N2ESMA30]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000c R_386_PC8         N2EDEC30\n"
    "\n"
    "RELOCATION RECORDS FOR [N2EFAS30]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000005 R_386_PC8         N2EDEC30\n"
    "0000000e R_386_PC8         N2EDEC30\n"
    "\n"
    "RELOCATION RECORDS FOR [N2EDEC30]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000f R_386_PC8         N2EDEC20\n"
    "0000001e R_386_PC8         N2EDEC50\n"
    "00000030 R_386_PC8         N2EDEC60\n"
    "\n"
    "RELOCATION RECORDS FOR [N2ESMA40]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000c R_386_PC8         N2EDEC30\n"
    "\n"
    "RELOCATION RECORDS FOR [N2EFAS40]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000003 R_386_PC8         N2EDEC30\n"
    "0000000e R_386_PC8         N2EDEC30\n"
    "\n"
    "RELOCATION RECORDS FOR [N2ESMA60]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000a R_386_PC32        N2EDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2EFAS60]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000007 R_386_PC8         N2EFAS61\n"
    "00000012 R_386_PC32        N2EDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [N2EFAS61]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000012 R_386_PC32        N2EDEC10\n"
    "\n"
    "RELOCATION RECORDS FOR [LZMA_DEC00]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000005 R_386_32          lzma_stack_adjust\n"
    "00000014 R_386_32          lzma_u_len\n"
    "0000001e R_386_32          lzma_c_len\n"
    "0000002a R_386_32          lzma_properties\n"
    "\n"
    "RELOCATION RECORDS FOR [PECTTPOS]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_32          filter_buffer_start\n"
    "\n"
    "RELOCATION RECORDS FOR [CALLTR00]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_32          filter_length\n"
    "\n"
    "RELOCATION RECORDS FOR [CTCLEVE1]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_8           filter_cto\n"
    "00000004 R_386_PC8         CALLTR00\n"
    "\n"
    "RELOCATION RECORDS FOR [CALLTR02]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000f R_386_PC8         CALLTR00\n"
    "\n"
    "RELOCATION RECORDS FOR [CALLTR10]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_32          filter_length\n"
    "\n"
    "RELOCATION RECORDS FOR [CALLTR11]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000003 R_386_PC8         CALLTR13\n"
    "\n"
    "RELOCATION RECORDS FOR [CTCLEVE2]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_8           filter_cto\n"
    "00000004 R_386_PC8         CALLTR11\n"
    "\n"
    "RELOCATION RECORDS FOR [CALLTR13]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000006 R_386_PC8         CALLTR10\n"
    "\n"
    "RELOCATION RECORDS FOR [ctok32.00]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_32          filter_length\n"
    "00000006 R_386_PC8         ctok32.20\n"
    "\n"
    "RELOCATION RECORDS FOR [ctok32.10]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000d R_386_PC8         ctok32.20\n"
    "\n"
    "RELOCATION RECORDS FOR [ctok32.20]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000005 R_386_PC8         ctok32.40\n"
    "00000008 R_386_8           filter_cto\n"
    "0000000a R_386_PC8         ctok32.40\n"
    "\n"
    "RELOCATION RECORDS FOR [ctok32.30]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000006 R_386_PC8         ctok32.10\n"
    "\n"
    "RELOCATION RECORDS FOR [ctok32.40]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000004 R_386_PC8         ctok32.00\n"
    "\n"
    "RELOCATION RECORDS FOR [PEIMPORT]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_32          compressed_imports\n"
    "0000000b R_386_PC8         PEIMDONE\n"
    "00000012 R_386_32          start_of_imports\n"
    "0000001e R_386_32          GetModuleHandleExA\n"
    "\n"
    "RELOCATION RECORDS FOR [PEIBYORD]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         PEIMORD1\n"
    "\n"
    "RELOCATION RECORDS FOR [PEK32ORD]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000a R_386_32          kernel32_ordinals\n"
    "0000000f R_386_PC8         PEIMPOR2\n"
    "\n"
    "RELOCATION RECORDS FOR [PEIMPOR2]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000007 R_386_32          GetProcAddress\n"
    "00000015 R_386_PC8         PEIMPORT\n"
    "\n"
    "RELOCATION RECORDS FOR [PEIEREXE]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_32          ExitProcess\n"
    "\n"
    "RELOCATION RECORDS FOR [PERELOC1]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_32          start_of_relocs\n"
    "\n"
    "RELOCATION RECORDS FOR [RELOC320]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000008 R_386_PC8         RELOC32J\n"
    "\n"
    "RELOCATION RECORDS FOR [REL32BIG]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000003 R_386_PC8         RELOC320\n"
    "\n"
    "RELOCATION RECORDS FOR [RELOC32J]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC8         RELOC320\n"
    "\n"
    "RELOCATION RECORDS FOR [PERLOHI0]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000004 R_386_32          reloc_delt\n"
    "\n"
    "RELOCATION RECORDS FOR [PEDEPHAK]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_32          VirtualProtect\n"
    "00000008 R_386_32          vp_base\n"
    "0000000d R_386_32          vp_size\n"
    "0000001b R_386_32          swri\n"
    "\n"
    "RELOCATION RECORDS FOR [PETLSC]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_32          tls_module_base\n"
    "00000008 R_386_32          PETLSC2\n"
    "\n"
    "RELOCATION RECORDS FOR [PEDOJUMP]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000001 R_386_PC32        original_entry\n"
    "\n"
    "RELOCATION RECORDS FOR [PETLSC2]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000004 R_386_32          tls_callbacks_ptr\n"
#if defined(MOD)
    "\n"
    "RELOCATION RECORDS FOR [MYPEMAIN01]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000005 R_386_32          start_of_compressed\n"
    "0000000b R_386_32          start_of_uncompressed\n"
    "\n"
    "RELOCATION RECORDS FOR [MYPEIMPORT]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_32          compressed_imports\n"
    "0000000b R_386_32          start_of_imports\n"
    "00000016 R_386_32          GetModuleHandleExA\n"
    "00000031 R_386_32          GetProcAddress\n"
    "0000003c R_386_PC32        PEIMDONE\n"
    "00000054 R_386_32          GetModuleHandleExA\n"
    "\n"
    "RELOCATION RECORDS FOR [MYPEK32ORD]:\n"
    "OFFSET   TYPE              VALUE\n"
    "0000000a R_386_32          kernel32_ordinals\n"
    "0000000f R_386_PC8         MYPEIMPOR2\n"
    "\n"
    "RELOCATION RECORDS FOR [MYPEIMPOR2]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000007 R_386_32          GetProcAddress\n"
    "00000015 R_386_PC8         MYPEIMPORT_2\n"
    "\n"
    "RELOCATION RECORDS FOR [MYPEDEPHAK]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000002 R_386_32          vp_base\n"
    "00000020 R_386_32          GetProcAddress\n"
    "00000026 R_386_32          vp_size\n"
    "00000036 R_386_32          swri\n"
    "\n"
    "RELOCATION RECORDS FOR [MYPEIEREXE]:\n"
    "OFFSET   TYPE              VALUE\n"
    "00000017 R_386_32          GetProcAddress\n"
#endif
    "\n"
};

unsigned char stub_i386_win32_pe[32851] = {
/* 0x0000 */ 127, 69, 76, 70,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
/* 0x0010 */   1,  0,  3,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
/* 0x0020 */ 144, 32,  0,  0,  0,  0,  0,  0, 52,  0,  0,  0,  0,  0, 40,  0,
/* 0x0030 */ 194,  0,191,  0,128,124, 36,  8,  1, 15,133,252,255,255,255, 96,
/* 0x0040 */ 190,  0,  0,  0,  0,141,190,  0,  0,  0,  0,102,255,135,  0,  0,
/* 0x0050 */   0,  0,102,129,135,  0,  0,  0,  0,  0,  0,199,135,  0,  0,  0,
/* 0x0060 */   0,  0,  0,  0,  0, 87,131,205,255,235,  3,164,235,  3,138,  6,
/* 0x0070 */  70,136,  7, 71,  1,219,117,  7,139, 30,131,238,252, 17,219,114,
/* 0x0080 */   1, 49,192, 64,114,255,184,  1,  0,  0,  0,  1,219,117,  7,139,
/* 0x0090 */  30,131,238,252, 17,219, 17,192,  1,219,117,  7,139, 30,131,238,
/* 0x00a0 */ 252, 17,219,115,255,  1,219,115,255,117,  9,139, 30,131,238,252,
/* 0x00b0 */  17,219,115,255, 49,201,131,232,  3,114, 13,193,224,  8,138,  6,
/* 0x00c0 */  70,131,240,255,116,255,137,197,  1,219,117,  7,139, 30,131,238,
/* 0x00d0 */ 252, 17,219, 17,201,  1,219,117,  7,139, 30,131,238,252, 17,219,
/* 0x00e0 */  17,201,117,255, 65,  1,219,117,  7,139, 30,131,238,252, 17,219,
/* 0x00f0 */  17,201,  1,219,117,  7,139, 30,131,238,252, 17,219,115, 48,  1,
/* 0x0100 */ 219,115, 48,117,  9,139, 30,131,238,252, 17,219,115, 48, 65, 65,
/* 0x0110 */ 131,193,  2,129,253,  0,243,255,255,131,209,  1,137,242,141, 52,
/* 0x0120 */  47,243,164,137,214,233,252,255,255,255,141, 20, 47,131,253,252,
/* 0x0130 */ 118,255,138,  2, 66,136,  7, 71, 73,117,247,233,252,255,255,255,
/* 0x0140 */ 139,  2,131,194,  4,137,  7,131,199,  4,131,233,  4,119,241,  1,
/* 0x0150 */ 207,233,252,255,255,255,235,  3,164,235,  3,138,  6, 70,136,  7,
/* 0x0160 */  71,  1,219,117,  7,139, 30,131,238,252, 17,219,114,  1, 49,192,
/* 0x0170 */  64,114,255,184,  1,  0,  0,  0,  1,219,117,  7,139, 30,131,238,
/* 0x0180 */ 252, 17,219, 17,192,  1,219,117,  7,139, 30,131,238,252, 17,219,
/* 0x0190 */ 114, 15,  1,219,115, 11,117, 15,139, 30,131,238,252, 17,219,114,
/* 0x01a0 */  15, 72,  1,219,117,  7,139, 30,131,238,252, 17,219, 17,192,235,
/* 0x01b0 */ 255, 49,201,131,232,  3,114, 17,193,224,  8,138,  6, 70,131,240,
/* 0x01c0 */ 255,116,255,209,248,137,197,235, 11,  1,219,117,  7,139, 30,131,
/* 0x01d0 */ 238,252, 17,219, 17,201,  1,219,117,  7,139, 30,131,238,252, 17,
/* 0x01e0 */ 219, 17,201,117,255, 65,  1,219,117,  7,139, 30,131,238,252, 17,
/* 0x01f0 */ 219, 17,201,  1,219,117,  7,139, 30,131,238,252, 17,219,115, 68,
/* 0x0200 */   1,219,115, 68,117,  9,139, 30,131,238,252, 17,219,115, 68, 65,
/* 0x0210 */  65,131,193,  2,129,253,  0,251,255,255,131,209,  1,137,242,141,
/* 0x0220 */  52, 47,243,164,137,214,233,252,255,255,255,141, 20, 47,131,253,
/* 0x0230 */ 252,118,255,138,  2, 66,136,  7, 71, 73,117,247,233,252,255,255,
/* 0x0240 */ 255,139,  2,131,194,  4,137,  7,131,199,  4,131,233,  4,119,241,
/* 0x0250 */   1,207,233,252,255,255,255,235,  3,164,235,  3,138,  6, 70,136,
/* 0x0260 */   7, 71,  1,219,117,  7,139, 30,131,238,252, 17,219,114,  1, 49,
/* 0x0270 */ 192, 64,114,255,184,  1,  0,  0,  0,  1,219,117,  7,139, 30,131,
/* 0x0280 */ 238,252, 17,219, 17,192,  1,219,117,  7,139, 30,131,238,252, 17,
/* 0x0290 */ 219,114, 30,  1,219,115, 11,117, 30,139, 30,131,238,252, 17,219,
/* 0x02a0 */ 114, 30, 72,  1,219,117,  7,139, 30,131,238,252, 17,219, 17,192,
/* 0x02b0 */ 235,255,  1,219,117,  7,139, 30,131,238,252, 17,219, 17,201,235,
/* 0x02c0 */ 255, 49,201,131,232,  3,114, 17,193,224,  8,138,  6, 70,131,240,
/* 0x02d0 */ 255,116,255,209,248,137,197,235, 11,  1,219,117,  7,139, 30,131,
/* 0x02e0 */ 238,252, 17,219,114,204, 65,  1,219,117,  7,139, 30,131,238,252,
/* 0x02f0 */  17,219,114,190,  1,219,117,  7,139, 30,131,238,252, 17,219, 17,
/* 0x0300 */ 201,  1,219,117,  7,139, 30,131,238,252, 17,219,115, 81,  1,219,
/* 0x0310 */ 115, 81,117,  9,139, 30,131,238,252, 17,219,115, 81, 65, 65,131,
/* 0x0320 */ 193,  2,129,253,  0,251,255,255,131,209,  2,137,242,141, 52, 47,
/* 0x0330 */ 243,164,137,214,233,252,255,255,255,141, 20, 47,131,253,252,118,
/* 0x0340 */ 255,138,  2, 66,136,  7, 71, 73,117,247,233,252,255,255,255,139,
/* 0x0350 */   2,131,194,  4,137,  7,131,199,  4,131,233,  4,119,241,  1,207,
/* 0x0360 */ 233,252,255,255,255,137,229,141,156, 36,  0,  0,  0,  0, 49,192,
/* 0x0370 */  80, 57,220,117,251, 70, 70, 83,104,  0,  0,  0,  0, 87,131,195,
/* 0x0380 */   4, 83,104,  0,  0,  0,  0, 86,131,195,  4, 83, 80,199,  3,  0,
/* 0x0390 */   0,  0,  0,137,229,139, 85,  0,172, 74,136,193, 36,  7,192,233,
/* 0x03a0 */   3,187,  0,253,255,255,211,227,141,164, 92,144,241,255,255,131,
/* 0x03b0 */ 228,224,106,  0,106,  0,137,227, 83,131,195,  4,139, 77,  0,255,
/* 0x03c0 */  49, 87, 83,131,195,  4,136, 67,  2,172, 74,136,193, 36, 15,136,
/* 0x03d0 */   3,192,233,  4,136, 75,  1, 82, 86, 83, 80, 85, 87, 86, 83,131,
/* 0x03e0 */ 236,124,139,148, 36,144,  0,  0,  0,199, 68, 36,116,  0,  0,  0,
/* 0x03f0 */   0,198, 68, 36,115,  0,139,172, 36,156,  0,  0,  0,141, 66,  4,
/* 0x0400 */ 137, 68, 36,120,184,  1,  0,  0,  0, 15,182, 74,  2,137,195,211,
/* 0x0410 */ 227,137,217, 73,137, 76, 36,108, 15,182, 74,  1,211,224, 72,137,
/* 0x0420 */  68, 36,104,139,132, 36,168,  0,  0,  0, 15,182, 50,199, 69,  0,
/* 0x0430 */   0,  0,  0,  0,199, 68, 36, 96,  0,  0,  0,  0,199,  0,  0,  0,
/* 0x0440 */   0,  0,184,  0,  3,  0,  0,137,116, 36,100,199, 68, 36, 92,  1,
/* 0x0450 */   0,  0,  0,199, 68, 36, 88,  1,  0,  0,  0,199, 68, 36, 84,  1,
/* 0x0460 */   0,  0,  0,199, 68, 36, 80,  1,  0,  0,  0, 15,182, 74,  1,  1,
/* 0x0470 */ 241,211,224,141,136, 54,  7,  0,  0, 57, 76, 36,116,115, 14,139,
/* 0x0480 */  68, 36,120,102,199,  0,  0,  4,131,192,  2,226,246,139,156, 36,
/* 0x0490 */ 148,  0,  0,  0, 49,255,199, 68, 36, 72,255,255,255,255,137,218,
/* 0x04a0 */   3,148, 36,152,  0,  0,  0,137, 84, 36, 76, 49,210, 59, 92, 36,
/* 0x04b0 */  76, 15,132,124,  9,  0,  0, 15,182,  3,193,231,  8, 66, 67,  9,
/* 0x04c0 */ 199,131,250,  4,126,231,139,140, 36,164,  0,  0,  0, 57, 76, 36,
/* 0x04d0 */ 116, 15,131,100,  9,  0,  0,139,116, 36,116, 35,116, 36,108,139,
/* 0x04e0 */  68, 36, 96,139, 84, 36,120,193,224,  4,137,116, 36, 68,  1,240,
/* 0x04f0 */ 129,124, 36, 72,255,255,255,  0,141, 44, 66,119, 24, 59, 92, 36,
/* 0x0500 */  76, 15,132, 44,  9,  0,  0,193,100, 36, 72,  8, 15,182,  3,193,
/* 0x0510 */ 231,  8, 67,  9,199,139, 68, 36, 72,102,139, 85,  0,193,232, 11,
/* 0x0520 */  15,183,202, 15,175,193, 57,199, 15,131,221,  1,  0,  0,137, 68,
/* 0x0530 */  36, 72,184,  0,  8,  0,  0, 41,200,138, 76, 36,100,193,248,  5,
/* 0x0540 */ 190,  1,  0,  0,  0,141,  4,  2, 15,182, 84, 36,115,102,137, 69,
/* 0x0550 */   0,139, 68, 36,116, 35, 68, 36,104,139,108, 36,120,211,224,185,
/* 0x0560 */   8,  0,  0,  0, 43, 76, 36,100,211,250,  1,208,105,192,  0,  6,
/* 0x0570 */   0,  0,131,124, 36, 96,  6,141,132,  5,108, 14,  0,  0,137, 68,
/* 0x0580 */  36, 20, 15,142,202,  0,  0,  0,139, 68, 36,116, 43, 68, 36, 92,
/* 0x0590 */ 139,148, 36,160,  0,  0,  0, 15,182,  4,  2,137, 68, 36, 64,209,
/* 0x05a0 */ 100, 36, 64,139, 76, 36, 64,141, 20, 54,139,108, 36, 20,129,225,
/* 0x05b0 */   0,  1,  0,  0,129,124, 36, 72,255,255,255,  0,141, 68, 77,  0,
/* 0x05c0 */ 137, 76, 36, 60,141, 44, 16,119, 24, 59, 92, 36, 76, 15,132, 96,
/* 0x05d0 */   8,  0,  0,193,100, 36, 72,  8, 15,182,  3,193,231,  8, 67,  9,
/* 0x05e0 */ 199,139, 68, 36, 72,102,139,141,  0,  2,  0,  0,193,232, 11, 15,
/* 0x05f0 */ 183,241, 15,175,198, 57,199,115, 35,137, 68, 36, 72,184,  0,  8,
/* 0x0600 */   0,  0, 41,240,137,214,193,248,  5,131,124, 36, 60,  0,141,  4,
/* 0x0610 */   1,102,137,133,  0,  2,  0,  0,116, 34,235, 46, 41, 68, 36, 72,
/* 0x0620 */  41,199,137,200,141,114,  1,102,193,232,  5,102, 41,193,131,124,
/* 0x0630 */  36, 60,  0,102,137,141,  0,  2,  0,  0,116, 14,129,254,255,  0,
/* 0x0640 */   0,  0, 15,142, 87,255,255,255,235,121,129,254,255,  0,  0,  0,
/* 0x0650 */ 127,113,141, 20, 54,139,108, 36, 20,  1,213,129,124, 36, 72,255,
/* 0x0660 */ 255,255,  0,119, 24, 59, 92, 36, 76, 15,132,196,  7,  0,  0,193,
/* 0x0670 */ 100, 36, 72,  8, 15,182,  3,193,231,  8, 67,  9,199,139, 68, 36,
/* 0x0680 */  72,102,139, 77,  0,193,232, 11, 15,183,241, 15,175,198, 57,199,
/* 0x0690 */ 115, 25,137, 68, 36, 72,184,  0,  8,  0,  0, 41,240,137,214,193,
/* 0x06a0 */ 248,  5,141,  4,  1,102,137, 69,  0,235,159, 41, 68, 36, 72, 41,
/* 0x06b0 */ 199,137,200,141,114,  1,102,193,232,  5,102, 41,193,102,137, 77,
/* 0x06c0 */   0,235,135,139, 84, 36,116,137,240,139,140, 36,160,  0,  0,  0,
/* 0x06d0 */ 136, 68, 36,115,136,  4, 10, 66,131,124, 36, 96,  3,137, 84, 36,
/* 0x06e0 */ 116,127, 13,199, 68, 36, 96,  0,  0,  0,  0,233, 27,  7,  0,  0,
/* 0x06f0 */ 131,124, 36, 96,  9,127, 10,131,108, 36, 96,  3,233, 10,  7,  0,
/* 0x0700 */   0,131,108, 36, 96,  6,233,  0,  7,  0,  0,139, 76, 36, 72, 41,
/* 0x0710 */ 199,139,116, 36, 96, 41,193,137,208,102,193,232,  5,102, 41,194,
/* 0x0720 */ 129,249,255,255,255,  0,102,137, 85,  0,139,108, 36,120,141,116,
/* 0x0730 */ 117,  0,137,116, 36, 56,119, 22, 59, 92, 36, 76, 15,132,241,  6,
/* 0x0740 */   0,  0, 15,182,  3,193,231,  8,193,225,  8, 67,  9,199,139,108,
/* 0x0750 */  36, 56,137,200,193,232, 11,102,139,149,128,  1,  0,  0, 15,183,
/* 0x0760 */ 234, 15,175,197, 57,199,115, 82,137,198,184,  0,  8,  0,  0, 41,
/* 0x0770 */ 232,139,108, 36, 88,193,248,  5,139, 76, 36, 84,141,  4,  2,139,
/* 0x0780 */  84, 36, 56,137, 76, 36, 80,139, 76, 36,120,102,137,130,128,  1,
/* 0x0790 */   0,  0,139, 68, 36, 92,137,108, 36, 84,137, 68, 36, 88, 49,192,
/* 0x07a0 */ 131,124, 36, 96,  6, 15,159,192,129,193,100,  6,  0,  0,141,  4,
/* 0x07b0 */  64,137, 68, 36, 96,233,116,  2,  0,  0,137,206, 41,199, 41,198,
/* 0x07c0 */ 137,208,102,193,232,  5,139, 76, 36, 56,102, 41,194,129,254,255,
/* 0x07d0 */ 255,255,  0,102,137,145,128,  1,  0,  0,119, 22, 59, 92, 36, 76,
/* 0x07e0 */  15,132, 77,  6,  0,  0, 15,182,  3,193,231,  8,193,230,  8, 67,
/* 0x07f0 */   9,199,139,108, 36, 56,137,242,193,234, 11,102,139,141,152,  1,
/* 0x0800 */   0,  0, 15,183,193, 15,175,208, 57,215, 15,131,227,  0,  0,  0,
/* 0x0810 */ 189,  0,  8,  0,  0,137,214, 41,197,199, 68, 36, 52,  0,  8,  0,
/* 0x0820 */   0,137,232,193,248,  5,141,  4,  1,139, 76, 36, 56,102,137,129,
/* 0x0830 */ 152,  1,  0,  0,139, 68, 36, 96,139, 76, 36, 68,193,224,  5,  3,
/* 0x0840 */  68, 36,120,129,250,255,255,255,  0,141, 44, 72,119, 22, 59, 92,
/* 0x0850 */  36, 76, 15,132,219,  5,  0,  0, 15,182,  3,193,231,  8,193,230,
/* 0x0860 */   8, 67,  9,199,102,139,149,224,  1,  0,  0,137,240,193,232, 11,
/* 0x0870 */  15,183,202, 15,175,193, 57,199,115, 96, 41, 76, 36, 52,193,124,
/* 0x0880 */  36, 52,  5,139,116, 36, 52,137, 68, 36, 72,131,124, 36,116,  0,
/* 0x0890 */ 141,  4, 50,102,137,133,224,  1,  0,  0, 15,132,147,  5,  0,  0,
/* 0x08a0 */  49,192,131,124, 36, 96,  6,139,172, 36,160,  0,  0,  0,139, 84,
/* 0x08b0 */  36,116, 15,159,192,141, 68,  0,  9,137, 68, 36, 96,139, 68, 36,
/* 0x08c0 */ 116, 43, 68, 36, 92,138, 68,  5,  0,136, 68, 36,115,136,  4, 42,
/* 0x08d0 */  66,137, 84, 36,116,233, 49,  5,  0,  0, 41,198, 41,199,137,208,
/* 0x08e0 */ 102,193,232,  5,102, 41,194,102,137,149,224,  1,  0,  0,233, 31,
/* 0x08f0 */   1,  0,  0,137,200, 41,214,102,193,232,  5,139,108, 36, 56,102,
/* 0x0900 */  41,193, 41,215,129,254,255,255,255,  0,102,137,141,152,  1,  0,
/* 0x0910 */   0,119, 22, 59, 92, 36, 76, 15,132, 22,  5,  0,  0, 15,182,  3,
/* 0x0920 */ 193,231,  8,193,230,  8, 67,  9,199,139, 76, 36, 56,137,240,193,
/* 0x0930 */ 232, 11,102,139,145,176,  1,  0,  0, 15,183,202, 15,175,193, 57,
/* 0x0940 */ 199,115, 35,137,198,184,  0,  8,  0,  0, 41,200,139,108, 36, 56,
/* 0x0950 */ 193,248,  5,141,  4,  2,102,137,133,176,  1,  0,  0,139, 68, 36,
/* 0x0960 */  88,233,160,  0,  0,  0,137,241, 41,199, 41,193,137,208,102,193,
/* 0x0970 */ 232,  5,102, 41,194,139, 68, 36, 56,129,249,255,255,255,  0,102,
/* 0x0980 */ 137,144,176,  1,  0,  0,119, 22, 59, 92, 36, 76, 15,132,161,  4,
/* 0x0990 */   0,  0, 15,182,  3,193,231,  8,193,225,  8, 67,  9,199,139,116,
/* 0x09a0 */  36, 56,137,200,193,232, 11,102,139,150,200,  1,  0,  0, 15,183,
/* 0x09b0 */ 234, 15,175,197, 57,199,115, 32,137,198,184,  0,  8,  0,  0, 41,
/* 0x09c0 */ 232,139,108, 36, 56,193,248,  5,141,  4,  2,102,137,133,200,  1,
/* 0x09d0 */   0,  0,139, 68, 36, 84,235, 38,137,206, 41,199, 41,198,137,208,
/* 0x09e0 */ 102,193,232,  5,102, 41,194,139, 68, 36, 56,102,137,144,200,  1,
/* 0x09f0 */   0,  0,139, 84, 36, 84,139, 68, 36, 80,137, 84, 36, 80,139, 76,
/* 0x0a00 */  36, 88,137, 76, 36, 84,139,108, 36, 92,137, 68, 36, 92,137,108,
/* 0x0a10 */  36, 88, 49,192,131,124, 36, 96,  6,139, 76, 36,120, 15,159,192,
/* 0x0a20 */ 129,193,104, 10,  0,  0,141, 68, 64,  8,137, 68, 36, 96,129,254,
/* 0x0a30 */ 255,255,255,  0,119, 22, 59, 92, 36, 76, 15,132,243,  3,  0,  0,
/* 0x0a40 */  15,182,  3,193,231,  8,193,230,  8, 67,  9,199,102,139, 17,137,
/* 0x0a50 */ 240,193,232, 11, 15,183,234, 15,175,197, 57,199,115, 47,137, 68,
/* 0x0a60 */  36, 72,184,  0,  8,  0,  0, 41,232,193,100, 36, 68,  4,193,248,
/* 0x0a70 */   5,199, 68, 36, 44,  0,  0,  0,  0,141,  4,  2,102,137,  1,139,
/* 0x0a80 */  68, 36, 68,141, 76,  1,  4,137, 76, 36, 16,235,114, 41,198, 41,
/* 0x0a90 */ 199,137,208,102,193,232,  5,102, 41,194,129,254,255,255,255,  0,
/* 0x0aa0 */ 102,137, 17,119, 22, 59, 92, 36, 76, 15,132,132,  3,  0,  0, 15,
/* 0x0ab0 */ 182,  3,193,231,  8,193,230,  8, 67,  9,199,102,139, 81,  2,137,
/* 0x0ac0 */ 240,193,232, 11, 15,183,234, 15,175,197, 57,199,115, 59,137, 68,
/* 0x0ad0 */  36, 72,184,  0,  8,  0,  0, 41,232,193,100, 36, 68,  4,193,248,
/* 0x0ae0 */   5,199, 68, 36, 44,  8,  0,  0,  0,141,  4,  2,139, 84, 36, 68,
/* 0x0af0 */ 102,137, 65,  2,141,140, 17,  4,  1,  0,  0,137, 76, 36, 16,199,
/* 0x0b00 */  68, 36, 48,  3,  0,  0,  0,235, 47, 41,198, 41,199,137,208,137,
/* 0x0b10 */ 116, 36, 72,102,193,232,  5,199, 68, 36, 44, 16,  0,  0,  0,102,
/* 0x0b20 */  41,194,199, 68, 36, 48,  8,  0,  0,  0,102,137, 81,  2,129,193,
/* 0x0b30 */   4,  2,  0,  0,137, 76, 36, 16,139, 76, 36, 48,186,  1,  0,  0,
/* 0x0b40 */   0,137, 76, 36, 40,141, 44, 18,139,116, 36, 16,  1,238,129,124,
/* 0x0b50 */  36, 72,255,255,255,  0,119, 24, 59, 92, 36, 76, 15,132,209,  2,
/* 0x0b60 */   0,  0,193,100, 36, 72,  8, 15,182,  3,193,231,  8, 67,  9,199,
/* 0x0b70 */ 139, 68, 36, 72,102,139, 22,193,232, 11, 15,183,202, 15,175,193,
/* 0x0b80 */  57,199,115, 24,137, 68, 36, 72,184,  0,  8,  0,  0, 41,200,193,
/* 0x0b90 */ 248,  5,141,  4,  2,137,234,102,137,  6,235, 21, 41, 68, 36, 72,
/* 0x0ba0 */  41,199,137,208,102,193,232,  5,102, 41,194,102,137, 22,141, 85,
/* 0x0bb0 */   1,139,116, 36, 40, 78,137,116, 36, 40,117,137,138, 76, 36, 48,
/* 0x0bc0 */ 184,  1,  0,  0,  0,211,224, 41,194,  3, 84, 36, 44,131,124, 36,
/* 0x0bd0 */  96,  3,137, 84, 36, 12, 15,143,231,  1,  0,  0,131, 68, 36, 96,
/* 0x0be0 */   7,131,250,  3,137,208,126,  5,184,  3,  0,  0,  0,139,116, 36,
/* 0x0bf0 */ 120,193,224,  7,199, 68, 36, 36,  6,  0,  0,  0,141,132,  6, 96,
/* 0x0c00 */   3,  0,  0,137, 68, 36,  8,184,  1,  0,  0,  0,141, 44,  0,139,
/* 0x0c10 */ 116, 36,  8,  1,238,129,124, 36, 72,255,255,255,  0,119, 24, 59,
/* 0x0c20 */  92, 36, 76, 15,132, 10,  2,  0,  0,193,100, 36, 72,  8, 15,182,
/* 0x0c30 */   3,193,231,  8, 67,  9,199,139, 68, 36, 72,102,139, 22,193,232,
/* 0x0c40 */  11, 15,183,202, 15,175,193, 57,199,115, 24,137, 68, 36, 72,184,
/* 0x0c50 */   0,  8,  0,  0, 41,200,193,248,  5,141,  4,  2,102,137,  6,137,
/* 0x0c60 */ 232,235, 21, 41, 68, 36, 72, 41,199,137,208,102,193,232,  5,102,
/* 0x0c70 */  41,194,141, 69,  1,102,137, 22,139,108, 36, 36, 77,137,108, 36,
/* 0x0c80 */  36,117,137,141, 80,192,131,250,  3,137, 20, 36, 15,142, 39,  1,
/* 0x0c90 */   0,  0,137,208,137,214,209,248,131,230,  1,141, 72,255,131,206,
/* 0x0ca0 */   2,131,250, 13,137, 76, 36, 32,127, 28,139,108, 36,120,211,230,
/* 0x0cb0 */   1,210,137, 52, 36,141, 68,117,  0, 41,208,  5, 94,  5,  0,  0,
/* 0x0cc0 */ 137, 68, 36,  4,235, 86,141, 80,251,129,124, 36, 72,255,255,255,
/* 0x0cd0 */   0,119, 24, 59, 92, 36, 76, 15,132, 86,  1,  0,  0,193,100, 36,
/* 0x0ce0 */  72,  8, 15,182,  3,193,231,  8, 67,  9,199,209,108, 36, 72,  1,
/* 0x0cf0 */ 246, 59,124, 36, 72,114,  7, 43,124, 36, 72,131,206,  1, 74,117,
/* 0x0d00 */ 200,139, 68, 36,120,193,230,  4,137, 52, 36,  5, 68,  6,  0,  0,
/* 0x0d10 */ 199, 68, 36, 32,  4,  0,  0,  0,137, 68, 36,  4,199, 68, 36, 28,
/* 0x0d20 */   1,  0,  0,  0,184,  1,  0,  0,  0,139,108, 36,  4,  1,192,137,
/* 0x0d30 */  68, 36, 24,  1,197,129,124, 36, 72,255,255,255,  0,119, 24, 59,
/* 0x0d40 */  92, 36, 76, 15,132,234,  0,  0,  0,193,100, 36, 72,  8, 15,182,
/* 0x0d50 */   3,193,231,  8, 67,  9,199,139, 68, 36, 72,102,139, 85,  0,193,
/* 0x0d60 */ 232, 11, 15,183,242, 15,175,198, 57,199,115, 27,137, 68, 36, 72,
/* 0x0d70 */ 184,  0,  8,  0,  0, 41,240,193,248,  5,141,  4,  2,102,137, 69,
/* 0x0d80 */   0,139, 68, 36, 24,235, 31, 41, 68, 36, 72, 41,199,137,208,102,
/* 0x0d90 */ 193,232,  5,102, 41,194,139, 68, 36, 24,102,137, 85,  0,139, 84,
/* 0x0da0 */  36, 28, 64,  9, 20, 36,139, 76, 36, 32,209,100, 36, 28, 73,137,
/* 0x0db0 */  76, 36, 32, 15,133,112,255,255,255,139, 52, 36, 70,137,116, 36,
/* 0x0dc0 */  92,116, 89,139, 76, 36, 12,139,108, 36,116,131,193,  2, 57,108,
/* 0x0dd0 */  36, 92,119, 95,139,132, 36,160,  0,  0,  0,137,234, 43, 68, 36,
/* 0x0de0 */  92,  3,148, 36,160,  0,  0,  0,141, 52, 40,138,  6, 70,136, 68,
/* 0x0df0 */  36,115,136,  2, 66,255, 68, 36,116, 73,116, 15,139,172, 36,164,
/* 0x0e00 */   0,  0,  0, 57,108, 36,116,114,226,235, 17,139,132, 36,164,  0,
/* 0x0e10 */   0,  0, 57, 68, 36,116, 15,130,187,246,255,255,129,124, 36, 72,
/* 0x0e20 */ 255,255,255,  0,119, 21, 59, 92, 36, 76,184,  1,  0,  0,  0,116,
/* 0x0e30 */  41,235,  7,184,  1,  0,  0,  0,235, 32, 67, 43,156, 36,148,  0,
/* 0x0e40 */   0,  0, 49,192,139,148, 36,156,  0,  0,  0,139, 76, 36,116,137,
/* 0x0e50 */  26,139,156, 36,168,  0,  0,  0,137, 11,131,196,124, 91, 94, 95,
/* 0x0e60 */  93, 85, 87, 86, 83,131,236,124,139,148, 36,144,  0,  0,  0,199,
/* 0x0e70 */  68, 36,116,  0,  0,  0,  0,198, 68, 36,115,  0,139,172, 36,156,
/* 0x0e80 */   0,  0,  0,141, 66,  4,137, 68, 36,120,184,  1,  0,  0,  0, 15,
/* 0x0e90 */ 182, 74,  2,137,195,211,227,137,217, 73,137, 76, 36,108, 15,182,
/* 0x0ea0 */  74,  1,211,224, 72,137, 68, 36,104,139,132, 36,168,  0,  0,  0,
/* 0x0eb0 */  15,182, 50,199, 69,  0,  0,  0,  0,  0,199, 68, 36, 96,  0,  0,
/* 0x0ec0 */   0,  0,199,  0,  0,  0,  0,  0,184,  0,  3,  0,  0,137,116, 36,
/* 0x0ed0 */ 100,199, 68, 36, 92,  1,  0,  0,  0,199, 68, 36, 88,  1,  0,  0,
/* 0x0ee0 */   0,199, 68, 36, 84,  1,  0,  0,  0,199, 68, 36, 80,  1,  0,  0,
/* 0x0ef0 */   0, 15,182, 74,  1,  1,241,211,224,141,136, 54,  7,  0,  0, 57,
/* 0x0f00 */  76, 36,116,115, 14,139, 68, 36,120,102,199,  0,  0,  4,131,192,
/* 0x0f10 */   2,226,246,139,156, 36,148,  0,  0,  0, 49,255,199, 68, 36, 72,
/* 0x0f20 */ 255,255,255,255,137,218,  3,148, 36,152,  0,  0,  0,137, 84, 36,
/* 0x0f30 */  76, 49,210, 59, 92, 36, 76, 15,132,124,  9,  0,  0, 15,182,  3,
/* 0x0f40 */ 193,231,  8, 66, 67,  9,199,131,250,  4,126,231,139,140, 36,164,
/* 0x0f50 */   0,  0,  0, 57, 76, 36,116, 15,131,100,  9,  0,  0,139,116, 36,
/* 0x0f60 */ 116, 35,116, 36,108,139, 68, 36, 96,139, 84, 36,120,193,224,  4,
/* 0x0f70 */ 137,116, 36, 68,  1,240,129,124, 36, 72,255,255,255,  0,141, 44,
/* 0x0f80 */  66,119, 24, 59, 92, 36, 76, 15,132, 44,  9,  0,  0,193,100, 36,
/* 0x0f90 */  72,  8, 15,182,  3,193,231,  8, 67,  9,199,139, 68, 36, 72,102,
/* 0x0fa0 */ 139, 85,  0,193,232, 11, 15,183,202, 15,175,193, 57,199, 15,131,
/* 0x0fb0 */ 221,  1,  0,  0,137, 68, 36, 72,184,  0,  8,  0,  0, 41,200,138,
/* 0x0fc0 */  76, 36,100,193,248,  5,190,  1,  0,  0,  0,141,  4,  2, 15,182,
/* 0x0fd0 */  84, 36,115,102,137, 69,  0,139, 68, 36,116, 35, 68, 36,104,139,
/* 0x0fe0 */ 108, 36,120,211,224,185,  8,  0,  0,  0, 43, 76, 36,100,211,250,
/* 0x0ff0 */   1,208,105,192,  0,  6,  0,  0,131,124, 36, 96,  6,141,132,  5,
/* 0x1000 */ 108, 14,  0,  0,137, 68, 36, 20, 15,142,202,  0,  0,  0,139, 68,
/* 0x1010 */  36,116, 43, 68, 36, 92,139,148, 36,160,  0,  0,  0, 15,182,  4,
/* 0x1020 */   2,137, 68, 36, 64,209,100, 36, 64,139, 76, 36, 64,141, 20, 54,
/* 0x1030 */ 139,108, 36, 20,129,225,  0,  1,  0,  0,129,124, 36, 72,255,255,
/* 0x1040 */ 255,  0,141, 68, 77,  0,137, 76, 36, 60,141, 44, 16,119, 24, 59,
/* 0x1050 */  92, 36, 76, 15,132, 96,  8,  0,  0,193,100, 36, 72,  8, 15,182,
/* 0x1060 */   3,193,231,  8, 67,  9,199,139, 68, 36, 72,102,139,141,  0,  2,
/* 0x1070 */   0,  0,193,232, 11, 15,183,241, 15,175,198, 57,199,115, 35,137,
/* 0x1080 */  68, 36, 72,184,  0,  8,  0,  0, 41,240,137,214,193,248,  5,131,
/* 0x1090 */ 124, 36, 60,  0,141,  4,  1,102,137,133,  0,  2,  0,  0,116, 34,
/* 0x10a0 */ 235, 46, 41, 68, 36, 72, 41,199,137,200,141,114,  1,102,193,232,
/* 0x10b0 */   5,102, 41,193,131,124, 36, 60,  0,102,137,141,  0,  2,  0,  0,
/* 0x10c0 */ 116, 14,129,254,255,  0,  0,  0, 15,142, 87,255,255,255,235,121,
/* 0x10d0 */ 129,254,255,  0,  0,  0,127,113,141, 20, 54,139,108, 36, 20,  1,
/* 0x10e0 */ 213,129,124, 36, 72,255,255,255,  0,119, 24, 59, 92, 36, 76, 15,
/* 0x10f0 */ 132,196,  7,  0,  0,193,100, 36, 72,  8, 15,182,  3,193,231,  8,
/* 0x1100 */  67,  9,199,139, 68, 36, 72,102,139, 77,  0,193,232, 11, 15,183,
/* 0x1110 */ 241, 15,175,198, 57,199,115, 25,137, 68, 36, 72,184,  0,  8,  0,
/* 0x1120 */   0, 41,240,137,214,193,248,  5,141,  4,  1,102,137, 69,  0,235,
/* 0x1130 */ 159, 41, 68, 36, 72, 41,199,137,200,141,114,  1,102,193,232,  5,
/* 0x1140 */ 102, 41,193,102,137, 77,  0,235,135,139, 84, 36,116,137,240,139,
/* 0x1150 */ 140, 36,160,  0,  0,  0,136, 68, 36,115,136,  4, 10, 66,131,124,
/* 0x1160 */  36, 96,  3,137, 84, 36,116,127, 13,199, 68, 36, 96,  0,  0,  0,
/* 0x1170 */   0,233, 27,  7,  0,  0,131,124, 36, 96,  9,127, 10,131,108, 36,
/* 0x1180 */  96,  3,233, 10,  7,  0,  0,131,108, 36, 96,  6,233,  0,  7,  0,
/* 0x1190 */   0,139, 76, 36, 72, 41,199,139,116, 36, 96, 41,193,137,208,102,
/* 0x11a0 */ 193,232,  5,102, 41,194,129,249,255,255,255,  0,102,137, 85,  0,
/* 0x11b0 */ 139,108, 36,120,141,116,117,  0,137,116, 36, 56,119, 22, 59, 92,
/* 0x11c0 */  36, 76, 15,132,241,  6,  0,  0, 15,182,  3,193,231,  8,193,225,
/* 0x11d0 */   8, 67,  9,199,139,108, 36, 56,137,200,193,232, 11,102,139,149,
/* 0x11e0 */ 128,  1,  0,  0, 15,183,234, 15,175,197, 57,199,115, 82,137,198,
/* 0x11f0 */ 184,  0,  8,  0,  0, 41,232,139,108, 36, 88,193,248,  5,139, 76,
/* 0x1200 */  36, 84,141,  4,  2,139, 84, 36, 56,137, 76, 36, 80,139, 76, 36,
/* 0x1210 */ 120,102,137,130,128,  1,  0,  0,139, 68, 36, 92,137,108, 36, 84,
/* 0x1220 */ 137, 68, 36, 88, 49,192,131,124, 36, 96,  6, 15,159,192,129,193,
/* 0x1230 */ 100,  6,  0,  0,141,  4, 64,137, 68, 36, 96,233,116,  2,  0,  0,
/* 0x1240 */ 137,206, 41,199, 41,198,137,208,102,193,232,  5,139, 76, 36, 56,
/* 0x1250 */ 102, 41,194,129,254,255,255,255,  0,102,137,145,128,  1,  0,  0,
/* 0x1260 */ 119, 22, 59, 92, 36, 76, 15,132, 77,  6,  0,  0, 15,182,  3,193,
/* 0x1270 */ 231,  8,193,230,  8, 67,  9,199,139,108, 36, 56,137,242,193,234,
/* 0x1280 */  11,102,139,141,152,  1,  0,  0, 15,183,193, 15,175,208, 57,215,
/* 0x1290 */  15,131,227,  0,  0,  0,189,  0,  8,  0,  0,137,214, 41,197,199,
/* 0x12a0 */  68, 36, 52,  0,  8,  0,  0,137,232,193,248,  5,141,  4,  1,139,
/* 0x12b0 */  76, 36, 56,102,137,129,152,  1,  0,  0,139, 68, 36, 96,139, 76,
/* 0x12c0 */  36, 68,193,224,  5,  3, 68, 36,120,129,250,255,255,255,  0,141,
/* 0x12d0 */  44, 72,119, 22, 59, 92, 36, 76, 15,132,219,  5,  0,  0, 15,182,
/* 0x12e0 */   3,193,231,  8,193,230,  8, 67,  9,199,102,139,149,224,  1,  0,
/* 0x12f0 */   0,137,240,193,232, 11, 15,183,202, 15,175,193, 57,199,115, 96,
/* 0x1300 */  41, 76, 36, 52,193,124, 36, 52,  5,139,116, 36, 52,137, 68, 36,
/* 0x1310 */  72,131,124, 36,116,  0,141,  4, 50,102,137,133,224,  1,  0,  0,
/* 0x1320 */  15,132,147,  5,  0,  0, 49,192,131,124, 36, 96,  6,139,172, 36,
/* 0x1330 */ 160,  0,  0,  0,139, 84, 36,116, 15,159,192,141, 68,  0,  9,137,
/* 0x1340 */  68, 36, 96,139, 68, 36,116, 43, 68, 36, 92,138, 68,  5,  0,136,
/* 0x1350 */  68, 36,115,136,  4, 42, 66,137, 84, 36,116,233, 49,  5,  0,  0,
/* 0x1360 */  41,198, 41,199,137,208,102,193,232,  5,102, 41,194,102,137,149,
/* 0x1370 */ 224,  1,  0,  0,233, 31,  1,  0,  0,137,200, 41,214,102,193,232,
/* 0x1380 */   5,139,108, 36, 56,102, 41,193, 41,215,129,254,255,255,255,  0,
/* 0x1390 */ 102,137,141,152,  1,  0,  0,119, 22, 59, 92, 36, 76, 15,132, 22,
/* 0x13a0 */   5,  0,  0, 15,182,  3,193,231,  8,193,230,  8, 67,  9,199,139,
/* 0x13b0 */  76, 36, 56,137,240,193,232, 11,102,139,145,176,  1,  0,  0, 15,
/* 0x13c0 */ 183,202, 15,175,193, 57,199,115, 35,137,198,184,  0,  8,  0,  0,
/* 0x13d0 */  41,200,139,108, 36, 56,193,248,  5,141,  4,  2,102,137,133,176,
/* 0x13e0 */   1,  0,  0,139, 68, 36, 88,233,160,  0,  0,  0,137,241, 41,199,
/* 0x13f0 */  41,193,137,208,102,193,232,  5,102, 41,194,139, 68, 36, 56,129,
/* 0x1400 */ 249,255,255,255,  0,102,137,144,176,  1,  0,  0,119, 22, 59, 92,
/* 0x1410 */  36, 76, 15,132,161,  4,  0,  0, 15,182,  3,193,231,  8,193,225,
/* 0x1420 */   8, 67,  9,199,139,116, 36, 56,137,200,193,232, 11,102,139,150,
/* 0x1430 */ 200,  1,  0,  0, 15,183,234, 15,175,197, 57,199,115, 32,137,198,
/* 0x1440 */ 184,  0,  8,  0,  0, 41,232,139,108, 36, 56,193,248,  5,141,  4,
/* 0x1450 */   2,102,137,133,200,  1,  0,  0,139, 68, 36, 84,235, 38,137,206,
/* 0x1460 */  41,199, 41,198,137,208,102,193,232,  5,102, 41,194,139, 68, 36,
/* 0x1470 */  56,102,137,144,200,  1,  0,  0,139, 84, 36, 84,139, 68, 36, 80,
/* 0x1480 */ 137, 84, 36, 80,139, 76, 36, 88,137, 76, 36, 84,139,108, 36, 92,
/* 0x1490 */ 137, 68, 36, 92,137,108, 36, 88, 49,192,131,124, 36, 96,  6,139,
/* 0x14a0 */  76, 36,120, 15,159,192,129,193,104, 10,  0,  0,141, 68, 64,  8,
/* 0x14b0 */ 137, 68, 36, 96,129,254,255,255,255,  0,119, 22, 59, 92, 36, 76,
/* 0x14c0 */  15,132,243,  3,  0,  0, 15,182,  3,193,231,  8,193,230,  8, 67,
/* 0x14d0 */   9,199,102,139, 17,137,240,193,232, 11, 15,183,234, 15,175,197,
/* 0x14e0 */  57,199,115, 47,137, 68, 36, 72,184,  0,  8,  0,  0, 41,232,193,
/* 0x14f0 */ 100, 36, 68,  4,193,248,  5,199, 68, 36, 44,  0,  0,  0,  0,141,
/* 0x1500 */   4,  2,102,137,  1,139, 68, 36, 68,141, 76,  1,  4,137, 76, 36,
/* 0x1510 */  16,235,114, 41,198, 41,199,137,208,102,193,232,  5,102, 41,194,
/* 0x1520 */ 129,254,255,255,255,  0,102,137, 17,119, 22, 59, 92, 36, 76, 15,
/* 0x1530 */ 132,132,  3,  0,  0, 15,182,  3,193,231,  8,193,230,  8, 67,  9,
/* 0x1540 */ 199,102,139, 81,  2,137,240,193,232, 11, 15,183,234, 15,175,197,
/* 0x1550 */  57,199,115, 59,137, 68, 36, 72,184,  0,  8,  0,  0, 41,232,193,
/* 0x1560 */ 100, 36, 68,  4,193,248,  5,199, 68, 36, 44,  8,  0,  0,  0,141,
/* 0x1570 */   4,  2,139, 84, 36, 68,102,137, 65,  2,141,140, 17,  4,  1,  0,
/* 0x1580 */   0,137, 76, 36, 16,199, 68, 36, 48,  3,  0,  0,  0,235, 47, 41,
/* 0x1590 */ 198, 41,199,137,208,137,116, 36, 72,102,193,232,  5,199, 68, 36,
/* 0x15a0 */  44, 16,  0,  0,  0,102, 41,194,199, 68, 36, 48,  8,  0,  0,  0,
/* 0x15b0 */ 102,137, 81,  2,129,193,  4,  2,  0,  0,137, 76, 36, 16,139, 76,
/* 0x15c0 */  36, 48,186,  1,  0,  0,  0,137, 76, 36, 40,141, 44, 18,139,116,
/* 0x15d0 */  36, 16,  1,238,129,124, 36, 72,255,255,255,  0,119, 24, 59, 92,
/* 0x15e0 */  36, 76, 15,132,209,  2,  0,  0,193,100, 36, 72,  8, 15,182,  3,
/* 0x15f0 */ 193,231,  8, 67,  9,199,139, 68, 36, 72,102,139, 22,193,232, 11,
/* 0x1600 */  15,183,202, 15,175,193, 57,199,115, 24,137, 68, 36, 72,184,  0,
/* 0x1610 */   8,  0,  0, 41,200,193,248,  5,141,  4,  2,137,234,102,137,  6,
/* 0x1620 */ 235, 21, 41, 68, 36, 72, 41,199,137,208,102,193,232,  5,102, 41,
/* 0x1630 */ 194,102,137, 22,141, 85,  1,139,116, 36, 40, 78,137,116, 36, 40,
/* 0x1640 */ 117,137,138, 76, 36, 48,184,  1,  0,  0,  0,211,224, 41,194,  3,
/* 0x1650 */  84, 36, 44,131,124, 36, 96,  3,137, 84, 36, 12, 15,143,231,  1,
/* 0x1660 */   0,  0,131, 68, 36, 96,  7,131,250,  3,137,208,126,  5,184,  3,
/* 0x1670 */   0,  0,  0,139,116, 36,120,193,224,  7,199, 68, 36, 36,  6,  0,
/* 0x1680 */   0,  0,141,132,  6, 96,  3,  0,  0,137, 68, 36,  8,184,  1,  0,
/* 0x1690 */   0,  0,141, 44,  0,139,116, 36,  8,  1,238,129,124, 36, 72,255,
/* 0x16a0 */ 255,255,  0,119, 24, 59, 92, 36, 76, 15,132, 10,  2,  0,  0,193,
/* 0x16b0 */ 100, 36, 72,  8, 15,182,  3,193,231,  8, 67,  9,199,139, 68, 36,
/* 0x16c0 */  72,102,139, 22,193,232, 11, 15,183,202, 15,175,193, 57,199,115,
/* 0x16d0 */  24,137, 68, 36, 72,184,  0,  8,  0,  0, 41,200,193,248,  5,141,
/* 0x16e0 */   4,  2,102,137,  6,137,232,235, 21, 41, 68, 36, 72, 41,199,137,
/* 0x16f0 */ 208,102,193,232,  5,102, 41,194,141, 69,  1,102,137, 22,139,108,
/* 0x1700 */  36, 36, 77,137,108, 36, 36,117,137,141, 80,192,131,250,  3,137,
/* 0x1710 */  20, 36, 15,142, 39,  1,  0,  0,137,208,137,214,209,248,131,230,
/* 0x1720 */   1,141, 72,255,131,206,  2,131,250, 13,137, 76, 36, 32,127, 28,
/* 0x1730 */ 139,108, 36,120,211,230,  1,210,137, 52, 36,141, 68,117,  0, 41,
/* 0x1740 */ 208,  5, 94,  5,  0,  0,137, 68, 36,  4,235, 86,141, 80,251,129,
/* 0x1750 */ 124, 36, 72,255,255,255,  0,119, 24, 59, 92, 36, 76, 15,132, 86,
/* 0x1760 */   1,  0,  0,193,100, 36, 72,  8, 15,182,  3,193,231,  8, 67,  9,
/* 0x1770 */ 199,209,108, 36, 72,  1,246, 59,124, 36, 72,114,  7, 43,124, 36,
/* 0x1780 */  72,131,206,  1, 74,117,200,139, 68, 36,120,193,230,  4,137, 52,
/* 0x1790 */  36,  5, 68,  6,  0,  0,199, 68, 36, 32,  4,  0,  0,  0,137, 68,
/* 0x17a0 */  36,  4,199, 68, 36, 28,  1,  0,  0,  0,184,  1,  0,  0,  0,139,
/* 0x17b0 */ 108, 36,  4,  1,192,137, 68, 36, 24,  1,197,129,124, 36, 72,255,
/* 0x17c0 */ 255,255,  0,119, 24, 59, 92, 36, 76, 15,132,234,  0,  0,  0,193,
/* 0x17d0 */ 100, 36, 72,  8, 15,182,  3,193,231,  8, 67,  9,199,139, 68, 36,
/* 0x17e0 */  72,102,139, 85,  0,193,232, 11, 15,183,242, 15,175,198, 57,199,
/* 0x17f0 */ 115, 27,137, 68, 36, 72,184,  0,  8,  0,  0, 41,240,193,248,  5,
/* 0x1800 */ 141,  4,  2,102,137, 69,  0,139, 68, 36, 24,235, 31, 41, 68, 36,
/* 0x1810 */  72, 41,199,137,208,102,193,232,  5,102, 41,194,139, 68, 36, 24,
/* 0x1820 */ 102,137, 85,  0,139, 84, 36, 28, 64,  9, 20, 36,139, 76, 36, 32,
/* 0x1830 */ 209,100, 36, 28, 73,137, 76, 36, 32, 15,133,112,255,255,255,139,
/* 0x1840 */  52, 36, 70,137,116, 36, 92,116, 89,139, 76, 36, 12,139,108, 36,
/* 0x1850 */ 116,131,193,  2, 57,108, 36, 92,119, 95,139,132, 36,160,  0,  0,
/* 0x1860 */   0,137,234, 43, 68, 36, 92,  3,148, 36,160,  0,  0,  0,141, 52,
/* 0x1870 */  40,138,  6, 70,136, 68, 36,115,136,  2, 66,255, 68, 36,116, 73,
/* 0x1880 */ 116, 15,139,172, 36,164,  0,  0,  0, 57,108, 36,116,114,226,235,
/* 0x1890 */  17,139,132, 36,164,  0,  0,  0, 57, 68, 36,116, 15,130,187,246,
/* 0x18a0 */ 255,255,129,124, 36, 72,255,255,255,  0,119, 21, 59, 92, 36, 76,
/* 0x18b0 */ 184,  1,  0,  0,  0,116, 41,235,  7,184,  1,  0,  0,  0,235, 32,
/* 0x18c0 */  67, 43,156, 36,148,  0,  0,  0, 49,192,139,148, 36,156,  0,  0,
/* 0x18d0 */   0,139, 76, 36,116,137, 26,139,156, 36,168,  0,  0,  0,137, 11,
/* 0x18e0 */ 131,196,124, 91, 94, 95, 93,  3,115,252,  3,123,248, 49,192,141,
/* 0x18f0 */ 140, 36,  0,255,255,255,137,236, 80, 57,204,117,251,137,236, 49,
/* 0x1900 */ 201, 94,141,190,  0,  0,  0,  0,137,247,185,  0,  0,  0,  0,138,
/* 0x1910 */   7, 71, 44,232, 60,  1,119,247,128, 63,  0,117,  4,139,  7,138,
/* 0x1920 */  95,  4,102,193,232,  8,134,196,193,192, 16,134,196, 41,248,128,
/* 0x1930 */ 235,232,  1,240,137,  7,131,199,  5,136,216,226,  9,185,  0,  0,
/* 0x1940 */   0,  0,176,232,176,233,242,174,117,  6,128, 63,  0,117,255,139,
/* 0x1950 */   7,102,193,232,  8,134,196,193,192, 16,134,196, 41,248,  1,240,
/* 0x1960 */ 171,235,  4,185,  0,  0,  0,  0,235, 30,138,  7,131,199,  1, 60,
/* 0x1970 */ 128,114, 10, 60,143,119,  6,128,127,254, 15,116,  5, 44,232, 60,
/* 0x1980 */   1,119,255,128, 63,  0,117,255,139,  7,102,193,232,  8,193,192,
/* 0x1990 */  16,134,196, 41,248,  1,240,137,  7,131,199,  4,131,233,  4,138,
/* 0x19a0 */   7,131,199,  1,226, 13,131,233,  1,127,  6,141,190,  0,  0,  0,
/* 0x19b0 */   0,139,  7,  9,192,116,255,139, 95,  4,141,132, 48,  0,  0,  0,
/* 0x19c0 */   0,  1,243, 80,131,199,  8,255,150,  0,  0,  0,  0,149,138,  7,
/* 0x19d0 */  71,  8,192,116,220,137,249,121,  6,122, 14,139,  7,131,199,  4,
/* 0x19e0 */ 139,132, 48,  0,  0,  0,  0,235, 14, 15,183,  7, 71, 80, 71,185,
/* 0x19f0 */  87, 72,242,174, 85,255,150,  0,  0,  0,  0,  9,192,116,  7,137,
/* 0x1a00 */   3,131,195,  4,235, 34, 97, 49,192,194, 12,  0,255,150,  0,  0,
/* 0x1a10 */   0,  0,141,190,  0,  0,  0,  0,131,199,  4,141, 94,252, 49,192,
/* 0x1a20 */ 138,  7, 71,  9,192,116,  1, 60,239,119, 17,  1,195,139,  3,134,
/* 0x1a30 */ 196,193,192, 16,134,196,  1,240,137,  3,235,226, 36, 15,193,224,
/* 0x1a40 */  16,102,139,  7,131,199,  2,  9,192,117, 12,139,  7,131,199,  4,
/* 0x1a50 */ 235, 12,135,247,141,143,  0,  0,  0,  0,169,102,  1, 12,  7,173,
/* 0x1a60 */   9,192,117,247,193,233, 16,169,102,  1, 12,  7,173,  9,192,117,
/* 0x1a70 */ 247,139,174,  0,  0,  0,  0,141,190,  0,  0,  0,  0,187,  0,  0,
/* 0x1a80 */   0,  0, 80, 84,106,  4, 83, 87,255,213,141,135,  0,  0,  0,  0,
/* 0x1a90 */ 128, 32,127,128, 96, 40,127, 88, 80, 84, 80, 83, 87,255,213, 88,
/* 0x1aa0 */ 141,158,  0,  0,  0,  0,141,187,  1,  0,  0,  0, 87, 49,192,170,
/* 0x1ab0 */  89, 73, 80,106,  1, 83,255,209, 97,141, 68, 36,128,106,  0, 57,
/* 0x1ac0 */ 196,117,250,131,236,128, 49,192, 64,194, 12,  0,233,252,255,255,
/* 0x1ad0 */ 255,235, 26, 86,190,  0,  0,  0,  0,252,173,133,192,116, 13,106,
/* 0x1ae0 */   3, 89,255,116, 36, 16,226,250,255,208,235,238, 94,194, 12,  0,
/* 0x1af0 */  85, 80, 88, 33,161,216,208,213,  0,  0,  0,  0,  0,  0,  0,  0,
/* 0x1b00 */   0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 45,
/* 0x1b10 */ 102,105,108,101, 32,102,111,114,109, 97,116, 32,101,108,102, 51,
/* 0x1b20 */  50, 45,105, 51, 56, 54, 10, 10, 83,101, 99,116,105,111,110,115,
/* 0x1b30 */  58, 10, 73,100,120, 32, 78, 97,109,101, 32, 32, 32, 32, 32, 32,
/* 0x1b40 */  32, 32, 32, 32, 83,105,122,101, 32, 32, 32, 32, 32, 32, 86, 77,
/* 0x1b50 */  65, 32, 32, 32, 32, 32, 32, 32, 76, 77, 65, 32, 32, 32, 32, 32,
/* 0x1b60 */  32, 32, 70,105,108,101, 32,111,102,102, 32, 32, 65,108,103,110,
/* 0x1b70 */  32, 32, 70,108, 97,103,115, 10, 32, 32, 48, 32, 80, 69, 73, 83,
/* 0x1b80 */  68, 76, 76, 49, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x1b90 */  48, 98, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x1ba0 */  48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 51, 52,
/* 0x1bb0 */  32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83,
/* 0x1bc0 */  44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76,
/* 0x1bd0 */  89, 10, 32, 32, 49, 32, 80, 69, 77, 65, 73, 78, 48, 49, 32, 32,
/* 0x1be0 */  32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 99, 32, 32, 48, 48,
/* 0x1bf0 */  48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x1c00 */  32, 32, 48, 48, 48, 48, 48, 48, 51,102, 32, 32, 50, 42, 42, 48,
/* 0x1c10 */  32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79,
/* 0x1c20 */  67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 32, 50, 32,
/* 0x1c30 */  80, 69, 73, 67, 79, 78, 83, 49, 32, 32, 32, 32, 32, 32, 48, 48,
/* 0x1c40 */  48, 48, 48, 48, 48, 55, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x1c50 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x1c60 */  48, 48, 52, 98, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84,
/* 0x1c70 */  69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65,
/* 0x1c80 */  68, 79, 78, 76, 89, 10, 32, 32, 51, 32, 80, 69, 73, 67, 79, 78,
/* 0x1c90 */  83, 50, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 57,
/* 0x1ca0 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x1cb0 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 53, 50, 32, 32,
/* 0x1cc0 */  50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32,
/* 0x1cd0 */  82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10,
/* 0x1ce0 */  32, 32, 52, 32, 80, 69, 84, 76, 83, 72, 65, 75, 32, 32, 32, 32,
/* 0x1cf0 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 97, 32, 32, 48, 48, 48, 48,
/* 0x1d00 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x1d10 */  48, 48, 48, 48, 48, 48, 53, 98, 32, 32, 50, 42, 42, 48, 32, 32,
/* 0x1d20 */  67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44,
/* 0x1d30 */  32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 32, 53, 32, 80, 69,
/* 0x1d40 */  77, 65, 73, 78, 48, 50, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48,
/* 0x1d50 */  48, 48, 48, 49, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x1d60 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x1d70 */  54, 53, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78,
/* 0x1d80 */  84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 32, 54,
/* 0x1d90 */  32, 80, 69, 77, 65, 73, 78, 48, 51, 32, 32, 32, 32, 32, 32, 48,
/* 0x1da0 */  48, 48, 48, 48, 48, 48, 51, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x1db0 */  48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x1dc0 */  48, 48, 48, 54, 54, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78,
/* 0x1dd0 */  84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10,
/* 0x1de0 */  32, 32, 55, 32, 78, 50, 66, 83, 77, 65, 49, 48, 32, 32, 32, 32,
/* 0x1df0 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 51, 32, 32, 48, 48, 48, 48,
/* 0x1e00 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x1e10 */  48, 48, 48, 48, 48, 48, 54, 57, 32, 32, 50, 42, 42, 48, 32, 32,
/* 0x1e20 */  67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44,
/* 0x1e30 */  32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 32, 56, 32, 78, 50,
/* 0x1e40 */  66, 70, 65, 83, 49, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48,
/* 0x1e50 */  48, 48, 48, 50, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x1e60 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x1e70 */  54, 99, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78,
/* 0x1e80 */  84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79,
/* 0x1e90 */  78, 76, 89, 10, 32, 32, 57, 32, 78, 50, 66, 70, 65, 83, 49, 49,
/* 0x1ea0 */  32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 54, 32, 32,
/* 0x1eb0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x1ec0 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 54,101, 32, 32, 50, 42,
/* 0x1ed0 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x1ee0 */  65, 68, 79, 78, 76, 89, 10, 32, 49, 48, 32, 78, 50, 66, 68, 69,
/* 0x1ef0 */  67, 49, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x1f00 */  98, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x1f10 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 55, 52, 32,
/* 0x1f20 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x1f30 */  32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 49, 49, 32, 78, 50,
/* 0x1f40 */  66, 83, 77, 65, 50, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48,
/* 0x1f50 */  48, 48, 48, 53, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x1f60 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x1f70 */  55,102, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78,
/* 0x1f80 */  84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79,
/* 0x1f90 */  78, 76, 89, 10, 32, 49, 50, 32, 78, 50, 66, 70, 65, 83, 50, 48,
/* 0x1fa0 */  32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 55, 32, 32,
/* 0x1fb0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x1fc0 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 56, 52, 32, 32, 50, 42,
/* 0x1fd0 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x1fe0 */  76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 49,
/* 0x1ff0 */  51, 32, 78, 50, 66, 68, 69, 67, 50, 48, 32, 32, 32, 32, 32, 32,
/* 0x2000 */  48, 48, 48, 48, 48, 48, 48,100, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x2010 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x2020 */  48, 48, 48, 48, 56, 98, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79,
/* 0x2030 */  78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x2040 */  10, 32, 49, 52, 32, 78, 50, 66, 83, 77, 65, 51, 48, 32, 32, 32,
/* 0x2050 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48,100, 32, 32, 48, 48, 48,
/* 0x2060 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x2070 */  32, 48, 48, 48, 48, 48, 48, 57, 56, 32, 32, 50, 42, 42, 48, 32,
/* 0x2080 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67,
/* 0x2090 */  44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 49, 53, 32, 78,
/* 0x20a0 */  50, 66, 70, 65, 83, 51, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48,
/* 0x20b0 */  48, 48, 48, 48,102, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x20c0 */  32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48,
/* 0x20d0 */  48, 97, 53, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69,
/* 0x20e0 */  78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68,
/* 0x20f0 */  79, 78, 76, 89, 10, 32, 49, 54, 32, 78, 50, 66, 68, 69, 67, 51,
/* 0x2100 */  48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 51,101, 32,
/* 0x2110 */  32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48,
/* 0x2120 */  48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 98, 52, 32, 32, 50,
/* 0x2130 */  42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82,
/* 0x2140 */  69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32,
/* 0x2150 */  49, 55, 32, 78, 50, 66, 83, 77, 65, 52, 48, 32, 32, 32, 32, 32,
/* 0x2160 */  32, 48, 48, 48, 48, 48, 48, 48,100, 32, 32, 48, 48, 48, 48, 48,
/* 0x2170 */  48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x2180 */  48, 48, 48, 48, 48,102, 50, 32, 32, 50, 42, 42, 48, 32, 32, 67,
/* 0x2190 */  79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32,
/* 0x21a0 */  82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 49, 56, 32, 78, 50, 66,
/* 0x21b0 */  70, 65, 83, 52, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48,
/* 0x21c0 */  48, 48,102, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x21d0 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,102,
/* 0x21e0 */ 102, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84,
/* 0x21f0 */  83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78,
/* 0x2200 */  76, 89, 10, 32, 49, 57, 32, 78, 50, 66, 83, 77, 65, 53, 48, 32,
/* 0x2210 */  32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 50, 32, 32, 48,
/* 0x2220 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x2230 */  48, 32, 32, 48, 48, 48, 48, 48, 49, 48,101, 32, 32, 50, 42, 42,
/* 0x2240 */  48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65,
/* 0x2250 */  68, 79, 78, 76, 89, 10, 32, 50, 48, 32, 78, 50, 66, 70, 65, 83,
/* 0x2260 */  53, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 51,
/* 0x2270 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x2280 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 49, 49, 48, 32, 32,
/* 0x2290 */  50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32,
/* 0x22a0 */  82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 50, 49, 32, 78, 50, 66,
/* 0x22b0 */  68, 69, 67, 53, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48,
/* 0x22c0 */  48, 48, 57, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x22d0 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 49, 49,
/* 0x22e0 */  51, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84,
/* 0x22f0 */  83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 50, 50, 32,
/* 0x2300 */  78, 50, 66, 83, 77, 65, 54, 48, 32, 32, 32, 32, 32, 32, 48, 48,
/* 0x2310 */  48, 48, 48, 48, 48,101, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x2320 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x2330 */  48, 49, 49, 99, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84,
/* 0x2340 */  69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65,
/* 0x2350 */  68, 79, 78, 76, 89, 10, 32, 50, 51, 32, 78, 50, 66, 70, 65, 83,
/* 0x2360 */  54, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 49, 54,
/* 0x2370 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x2380 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 49, 50, 97, 32, 32,
/* 0x2390 */  50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32,
/* 0x23a0 */  82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10,
/* 0x23b0 */  32, 50, 52, 32, 78, 50, 66, 70, 65, 83, 54, 49, 32, 32, 32, 32,
/* 0x23c0 */  32, 32, 48, 48, 48, 48, 48, 48, 49, 54, 32, 32, 48, 48, 48, 48,
/* 0x23d0 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x23e0 */  48, 48, 48, 48, 48, 49, 52, 48, 32, 32, 50, 42, 42, 48, 32, 32,
/* 0x23f0 */  67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44,
/* 0x2400 */  32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 50, 53, 32, 78, 50,
/* 0x2410 */  66, 68, 69, 67, 54, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48,
/* 0x2420 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x2430 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 49,
/* 0x2440 */  53, 54, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78,
/* 0x2450 */  84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 50, 54,
/* 0x2460 */  32, 78, 50, 68, 83, 77, 65, 49, 48, 32, 32, 32, 32, 32, 32, 48,
/* 0x2470 */  48, 48, 48, 48, 48, 48, 51, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x2480 */  48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x2490 */  48, 48, 49, 53, 54, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78,
/* 0x24a0 */  84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69,
/* 0x24b0 */  65, 68, 79, 78, 76, 89, 10, 32, 50, 55, 32, 78, 50, 68, 70, 65,
/* 0x24c0 */  83, 49, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x24d0 */  50, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x24e0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 49, 53, 57, 32,
/* 0x24f0 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x2500 */  32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x2510 */  10, 32, 50, 56, 32, 78, 50, 68, 70, 65, 83, 49, 49, 32, 32, 32,
/* 0x2520 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 54, 32, 32, 48, 48, 48,
/* 0x2530 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x2540 */  32, 48, 48, 48, 48, 48, 49, 53, 98, 32, 32, 50, 42, 42, 48, 32,
/* 0x2550 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79,
/* 0x2560 */  78, 76, 89, 10, 32, 50, 57, 32, 78, 50, 68, 68, 69, 67, 49, 48,
/* 0x2570 */  32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 98, 32, 32,
/* 0x2580 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x2590 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 49, 54, 49, 32, 32, 50, 42,
/* 0x25a0 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x25b0 */  65, 68, 79, 78, 76, 89, 10, 32, 51, 48, 32, 78, 50, 68, 83, 77,
/* 0x25c0 */  65, 50, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x25d0 */  53, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x25e0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 49, 54, 99, 32,
/* 0x25f0 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x2600 */  32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x2610 */  10, 32, 51, 49, 32, 78, 50, 68, 70, 65, 83, 50, 48, 32, 32, 32,
/* 0x2620 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 55, 32, 32, 48, 48, 48,
/* 0x2630 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x2640 */  32, 48, 48, 48, 48, 48, 49, 55, 49, 32, 32, 50, 42, 42, 48, 32,
/* 0x2650 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67,
/* 0x2660 */  44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 51, 50, 32, 78,
/* 0x2670 */  50, 68, 68, 69, 67, 50, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48,
/* 0x2680 */  48, 48, 48, 48,100, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x2690 */  32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48,
/* 0x26a0 */  49, 55, 56, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69,
/* 0x26b0 */  78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 51,
/* 0x26c0 */  51, 32, 78, 50, 68, 83, 77, 65, 51, 48, 32, 32, 32, 32, 32, 32,
/* 0x26d0 */  48, 48, 48, 48, 48, 48, 48,100, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x26e0 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x26f0 */  48, 48, 48, 49, 56, 53, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79,
/* 0x2700 */  78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82,
/* 0x2710 */  69, 65, 68, 79, 78, 76, 89, 10, 32, 51, 52, 32, 78, 50, 68, 70,
/* 0x2720 */  65, 83, 51, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x2730 */  48,102, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x2740 */  48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 49, 57, 50,
/* 0x2750 */  32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83,
/* 0x2760 */  44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76,
/* 0x2770 */  89, 10, 32, 51, 53, 32, 78, 50, 68, 68, 69, 67, 51, 48, 32, 32,
/* 0x2780 */  32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 53, 50, 32, 32, 48, 48,
/* 0x2790 */  48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x27a0 */  32, 32, 48, 48, 48, 48, 48, 49, 97, 49, 32, 32, 50, 42, 42, 48,
/* 0x27b0 */  32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79,
/* 0x27c0 */  67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 51, 54, 32,
/* 0x27d0 */  78, 50, 68, 83, 77, 65, 52, 48, 32, 32, 32, 32, 32, 32, 48, 48,
/* 0x27e0 */  48, 48, 48, 48, 48,100, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x27f0 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x2800 */  48, 49,102, 51, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84,
/* 0x2810 */  69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65,
/* 0x2820 */  68, 79, 78, 76, 89, 10, 32, 51, 55, 32, 78, 50, 68, 70, 65, 83,
/* 0x2830 */  52, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,102,
/* 0x2840 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x2850 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 50, 48, 48, 32, 32,
/* 0x2860 */  50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32,
/* 0x2870 */  82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10,
/* 0x2880 */  32, 51, 56, 32, 78, 50, 68, 83, 77, 65, 53, 48, 32, 32, 32, 32,
/* 0x2890 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 50, 32, 32, 48, 48, 48, 48,
/* 0x28a0 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x28b0 */  48, 48, 48, 48, 48, 50, 48,102, 32, 32, 50, 42, 42, 48, 32, 32,
/* 0x28c0 */  67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78,
/* 0x28d0 */  76, 89, 10, 32, 51, 57, 32, 78, 50, 68, 70, 65, 83, 53, 48, 32,
/* 0x28e0 */  32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 51, 32, 32, 48,
/* 0x28f0 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x2900 */  48, 32, 32, 48, 48, 48, 48, 48, 50, 49, 49, 32, 32, 50, 42, 42,
/* 0x2910 */  48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65,
/* 0x2920 */  68, 79, 78, 76, 89, 10, 32, 52, 48, 32, 78, 50, 68, 68, 69, 67,
/* 0x2930 */  53, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 57,
/* 0x2940 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x2950 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 50, 49, 52, 32, 32,
/* 0x2960 */  50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32,
/* 0x2970 */  82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 52, 49, 32, 78, 50, 68,
/* 0x2980 */  83, 77, 65, 54, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48,
/* 0x2990 */  48, 48,101, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x29a0 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 50, 49,
/* 0x29b0 */ 100, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84,
/* 0x29c0 */  83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78,
/* 0x29d0 */  76, 89, 10, 32, 52, 50, 32, 78, 50, 68, 70, 65, 83, 54, 48, 32,
/* 0x29e0 */  32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 49, 54, 32, 32, 48,
/* 0x29f0 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x2a00 */  48, 32, 32, 48, 48, 48, 48, 48, 50, 50, 98, 32, 32, 50, 42, 42,
/* 0x2a10 */  48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76,
/* 0x2a20 */  79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 52, 51,
/* 0x2a30 */  32, 78, 50, 68, 70, 65, 83, 54, 49, 32, 32, 32, 32, 32, 32, 48,
/* 0x2a40 */  48, 48, 48, 48, 48, 49, 54, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x2a50 */  48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x2a60 */  48, 48, 50, 52, 49, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78,
/* 0x2a70 */  84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69,
/* 0x2a80 */  65, 68, 79, 78, 76, 89, 10, 32, 52, 52, 32, 78, 50, 68, 68, 69,
/* 0x2a90 */  67, 54, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x2aa0 */  48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x2ab0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 50, 53, 55, 32,
/* 0x2ac0 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x2ad0 */  32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 52, 53, 32, 78, 50,
/* 0x2ae0 */  69, 83, 77, 65, 49, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48,
/* 0x2af0 */  48, 48, 48, 51, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x2b00 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 50,
/* 0x2b10 */  53, 55, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78,
/* 0x2b20 */  84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79,
/* 0x2b30 */  78, 76, 89, 10, 32, 52, 54, 32, 78, 50, 69, 70, 65, 83, 49, 48,
/* 0x2b40 */  32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 50, 32, 32,
/* 0x2b50 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x2b60 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 50, 53, 97, 32, 32, 50, 42,
/* 0x2b70 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x2b80 */  76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 52,
/* 0x2b90 */  55, 32, 78, 50, 69, 70, 65, 83, 49, 49, 32, 32, 32, 32, 32, 32,
/* 0x2ba0 */  48, 48, 48, 48, 48, 48, 48, 54, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x2bb0 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x2bc0 */  48, 48, 48, 50, 53, 99, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79,
/* 0x2bd0 */  78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x2be0 */  10, 32, 52, 56, 32, 78, 50, 69, 68, 69, 67, 49, 48, 32, 32, 32,
/* 0x2bf0 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 98, 32, 32, 48, 48, 48,
/* 0x2c00 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x2c10 */  32, 48, 48, 48, 48, 48, 50, 54, 50, 32, 32, 50, 42, 42, 48, 32,
/* 0x2c20 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79,
/* 0x2c30 */  78, 76, 89, 10, 32, 52, 57, 32, 78, 50, 69, 83, 77, 65, 50, 48,
/* 0x2c40 */  32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 53, 32, 32,
/* 0x2c50 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x2c60 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 50, 54,100, 32, 32, 50, 42,
/* 0x2c70 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x2c80 */  76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 53,
/* 0x2c90 */  48, 32, 78, 50, 69, 70, 65, 83, 50, 48, 32, 32, 32, 32, 32, 32,
/* 0x2ca0 */  48, 48, 48, 48, 48, 48, 48, 55, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x2cb0 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x2cc0 */  48, 48, 48, 50, 55, 50, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79,
/* 0x2cd0 */  78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82,
/* 0x2ce0 */  69, 65, 68, 79, 78, 76, 89, 10, 32, 53, 49, 32, 78, 50, 69, 68,
/* 0x2cf0 */  69, 67, 50, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x2d00 */  48,100, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x2d10 */  48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 50, 55, 57,
/* 0x2d20 */  32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83,
/* 0x2d30 */  44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 53, 50, 32, 78,
/* 0x2d40 */  50, 69, 83, 77, 65, 51, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48,
/* 0x2d50 */  48, 48, 48, 48,100, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x2d60 */  32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48,
/* 0x2d70 */  50, 56, 54, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69,
/* 0x2d80 */  78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68,
/* 0x2d90 */  79, 78, 76, 89, 10, 32, 53, 51, 32, 78, 50, 69, 70, 65, 83, 51,
/* 0x2da0 */  48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,102, 32,
/* 0x2db0 */  32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48,
/* 0x2dc0 */  48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 50, 57, 51, 32, 32, 50,
/* 0x2dd0 */  42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82,
/* 0x2de0 */  69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32,
/* 0x2df0 */  53, 52, 32, 78, 50, 69, 68, 69, 67, 51, 48, 32, 32, 32, 32, 32,
/* 0x2e00 */  32, 48, 48, 48, 48, 48, 48, 53,102, 32, 32, 48, 48, 48, 48, 48,
/* 0x2e10 */  48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x2e20 */  48, 48, 48, 48, 50, 97, 50, 32, 32, 50, 42, 42, 48, 32, 32, 67,
/* 0x2e30 */  79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32,
/* 0x2e40 */  82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 53, 53, 32, 78, 50, 69,
/* 0x2e50 */  83, 77, 65, 52, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48,
/* 0x2e60 */  48, 48,100, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x2e70 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 51, 48,
/* 0x2e80 */  49, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84,
/* 0x2e90 */  83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78,
/* 0x2ea0 */  76, 89, 10, 32, 53, 54, 32, 78, 50, 69, 70, 65, 83, 52, 48, 32,
/* 0x2eb0 */  32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,102, 32, 32, 48,
/* 0x2ec0 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x2ed0 */  48, 32, 32, 48, 48, 48, 48, 48, 51, 48,101, 32, 32, 50, 42, 42,
/* 0x2ee0 */  48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76,
/* 0x2ef0 */  79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 53, 55,
/* 0x2f00 */  32, 78, 50, 69, 83, 77, 65, 53, 48, 32, 32, 32, 32, 32, 32, 48,
/* 0x2f10 */  48, 48, 48, 48, 48, 48, 50, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x2f20 */  48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x2f30 */  48, 48, 51, 49,100, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78,
/* 0x2f40 */  84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10,
/* 0x2f50 */  32, 53, 56, 32, 78, 50, 69, 70, 65, 83, 53, 48, 32, 32, 32, 32,
/* 0x2f60 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 51, 32, 32, 48, 48, 48, 48,
/* 0x2f70 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x2f80 */  48, 48, 48, 48, 48, 51, 49,102, 32, 32, 50, 42, 42, 48, 32, 32,
/* 0x2f90 */  67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78,
/* 0x2fa0 */  76, 89, 10, 32, 53, 57, 32, 78, 50, 69, 68, 69, 67, 53, 48, 32,
/* 0x2fb0 */  32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 57, 32, 32, 48,
/* 0x2fc0 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x2fd0 */  48, 32, 32, 48, 48, 48, 48, 48, 51, 50, 50, 32, 32, 50, 42, 42,
/* 0x2fe0 */  48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65,
/* 0x2ff0 */  68, 79, 78, 76, 89, 10, 32, 54, 48, 32, 78, 50, 69, 83, 77, 65,
/* 0x3000 */  54, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,101,
/* 0x3010 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x3020 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 51, 50, 98, 32, 32,
/* 0x3030 */  50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32,
/* 0x3040 */  82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10,
/* 0x3050 */  32, 54, 49, 32, 78, 50, 69, 70, 65, 83, 54, 48, 32, 32, 32, 32,
/* 0x3060 */  32, 32, 48, 48, 48, 48, 48, 48, 49, 54, 32, 32, 48, 48, 48, 48,
/* 0x3070 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x3080 */  48, 48, 48, 48, 48, 51, 51, 57, 32, 32, 50, 42, 42, 48, 32, 32,
/* 0x3090 */  67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44,
/* 0x30a0 */  32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 54, 50, 32, 78, 50,
/* 0x30b0 */  69, 70, 65, 83, 54, 49, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48,
/* 0x30c0 */  48, 48, 49, 54, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x30d0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 51,
/* 0x30e0 */  52,102, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78,
/* 0x30f0 */  84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79,
/* 0x3100 */  78, 76, 89, 10, 32, 54, 51, 32, 78, 50, 69, 68, 69, 67, 54, 48,
/* 0x3110 */  32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x3120 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3130 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 51, 54, 53, 32, 32, 50, 42,
/* 0x3140 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x3150 */  65, 68, 79, 78, 76, 89, 10, 32, 54, 52, 32, 76, 90, 77, 65, 95,
/* 0x3160 */  68, 69, 67, 48, 48, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 50,
/* 0x3170 */ 101, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3180 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 51, 54, 53, 32,
/* 0x3190 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x31a0 */  32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x31b0 */  10, 32, 54, 53, 32, 76, 90, 77, 65, 95, 69, 76, 70, 48, 48, 32,
/* 0x31c0 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 52, 56, 32, 32, 48, 48, 48,
/* 0x31d0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x31e0 */  32, 48, 48, 48, 48, 48, 51, 57, 51, 32, 32, 50, 42, 42, 48, 32,
/* 0x31f0 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79,
/* 0x3200 */  78, 76, 89, 10, 32, 54, 54, 32, 76, 90, 77, 65, 95, 68, 69, 67,
/* 0x3210 */  49, 48, 32, 32, 32, 32, 48, 48, 48, 48, 48, 97, 56, 54, 32, 32,
/* 0x3220 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3230 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 51,100, 98, 32, 32, 50, 42,
/* 0x3240 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x3250 */  65, 68, 79, 78, 76, 89, 10, 32, 54, 55, 32, 76, 90, 77, 65, 95,
/* 0x3260 */  68, 69, 67, 50, 48, 32, 32, 32, 32, 48, 48, 48, 48, 48, 97, 56,
/* 0x3270 */  54, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3280 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48,101, 54, 49, 32,
/* 0x3290 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x32a0 */  32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 54, 56, 32, 76, 90,
/* 0x32b0 */  77, 65, 95, 68, 69, 67, 51, 48, 32, 32, 32, 32, 48, 48, 48, 48,
/* 0x32c0 */  48, 48, 49, 97, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x32d0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 56,
/* 0x32e0 */ 101, 55, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78,
/* 0x32f0 */  84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 54, 57,
/* 0x3300 */  32, 80, 69, 77, 65, 73, 78, 49, 48, 32, 32, 32, 32, 32, 32, 48,
/* 0x3310 */  48, 48, 48, 48, 48, 48, 49, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x3320 */  48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3330 */  48, 49, 57, 48, 49, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78,
/* 0x3340 */  84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10,
/* 0x3350 */  32, 55, 48, 32, 80, 69, 67, 84, 84, 80, 79, 83, 32, 32, 32, 32,
/* 0x3360 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 54, 32, 32, 48, 48, 48, 48,
/* 0x3370 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x3380 */  48, 48, 48, 48, 49, 57, 48, 50, 32, 32, 50, 42, 42, 48, 32, 32,
/* 0x3390 */  67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44,
/* 0x33a0 */  32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 55, 49, 32, 80, 69,
/* 0x33b0 */  67, 84, 84, 78, 85, 76, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48,
/* 0x33c0 */  48, 48, 48, 50, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x33d0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 57,
/* 0x33e0 */  48, 56, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78,
/* 0x33f0 */  84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 55, 50,
/* 0x3400 */  32, 67, 65, 76, 76, 84, 82, 48, 48, 32, 32, 32, 32, 32, 32, 48,
/* 0x3410 */  48, 48, 48, 48, 48, 48,101, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x3420 */  48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3430 */  48, 49, 57, 48, 97, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78,
/* 0x3440 */  84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69,
/* 0x3450 */  65, 68, 79, 78, 76, 89, 10, 32, 55, 51, 32, 67, 84, 67, 76, 69,
/* 0x3460 */  86, 69, 49, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x3470 */  53, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3480 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 57, 49, 56, 32,
/* 0x3490 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x34a0 */  32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x34b0 */  10, 32, 55, 52, 32, 67, 65, 76, 76, 84, 82, 48, 49, 32, 32, 32,
/* 0x34c0 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 53, 32, 32, 48, 48, 48,
/* 0x34d0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x34e0 */  32, 48, 48, 48, 48, 49, 57, 49,100, 32, 32, 50, 42, 42, 48, 32,
/* 0x34f0 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79,
/* 0x3500 */  78, 76, 89, 10, 32, 55, 53, 32, 67, 84, 66, 83, 72, 82, 48, 49,
/* 0x3510 */  32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 52, 32, 32,
/* 0x3520 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3530 */  48, 48, 32, 32, 48, 48, 48, 48, 49, 57, 50, 50, 32, 32, 50, 42,
/* 0x3540 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x3550 */  65, 68, 79, 78, 76, 89, 10, 32, 55, 54, 32, 67, 84, 66, 82, 79,
/* 0x3560 */  82, 48, 49, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x3570 */  50, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3580 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 57, 50, 54, 32,
/* 0x3590 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x35a0 */  32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 55, 55, 32, 67, 84,
/* 0x35b0 */  66, 83, 87, 65, 48, 49, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48,
/* 0x35c0 */  48, 48, 48, 53, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x35d0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 57,
/* 0x35e0 */  50, 56, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78,
/* 0x35f0 */  84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 55, 56,
/* 0x3600 */  32, 67, 65, 76, 76, 84, 82, 48, 50, 32, 32, 32, 32, 32, 32, 48,
/* 0x3610 */  48, 48, 48, 48, 48, 49, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x3620 */  48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3630 */  48, 49, 57, 50,100, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78,
/* 0x3640 */  84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69,
/* 0x3650 */  65, 68, 79, 78, 76, 89, 10, 32, 55, 57, 32, 67, 65, 76, 76, 84,
/* 0x3660 */  82, 49, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x3670 */  53, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3680 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 57, 51,100, 32,
/* 0x3690 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x36a0 */  32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x36b0 */  10, 32, 56, 48, 32, 67, 65, 76, 76, 84, 82, 69, 56, 32, 32, 32,
/* 0x36c0 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 50, 32, 32, 48, 48, 48,
/* 0x36d0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x36e0 */  32, 48, 48, 48, 48, 49, 57, 52, 50, 32, 32, 50, 42, 42, 48, 32,
/* 0x36f0 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79,
/* 0x3700 */  78, 76, 89, 10, 32, 56, 49, 32, 67, 65, 76, 76, 84, 82, 69, 57,
/* 0x3710 */  32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 50, 32, 32,
/* 0x3720 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3730 */  48, 48, 32, 32, 48, 48, 48, 48, 49, 57, 52, 52, 32, 32, 50, 42,
/* 0x3740 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x3750 */  65, 68, 79, 78, 76, 89, 10, 32, 56, 50, 32, 67, 65, 76, 76, 84,
/* 0x3760 */  82, 49, 49, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x3770 */  52, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3780 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 57, 52, 54, 32,
/* 0x3790 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x37a0 */  32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x37b0 */  10, 32, 56, 51, 32, 67, 84, 67, 76, 69, 86, 69, 50, 32, 32, 32,
/* 0x37c0 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 53, 32, 32, 48, 48, 48,
/* 0x37d0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x37e0 */  32, 48, 48, 48, 48, 49, 57, 52, 97, 32, 32, 50, 42, 42, 48, 32,
/* 0x37f0 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67,
/* 0x3800 */  44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 56, 52, 32, 67,
/* 0x3810 */  65, 76, 76, 84, 82, 49, 50, 32, 32, 32, 32, 32, 32, 48, 48, 48,
/* 0x3820 */  48, 48, 48, 48, 50, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x3830 */  32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49,
/* 0x3840 */  57, 52,102, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69,
/* 0x3850 */  78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 56,
/* 0x3860 */  53, 32, 67, 84, 66, 83, 72, 82, 49, 49, 32, 32, 32, 32, 32, 32,
/* 0x3870 */  48, 48, 48, 48, 48, 48, 48, 52, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3880 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x3890 */  48, 48, 49, 57, 53, 49, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79,
/* 0x38a0 */  78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x38b0 */  10, 32, 56, 54, 32, 67, 84, 66, 82, 79, 82, 49, 49, 32, 32, 32,
/* 0x38c0 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 50, 32, 32, 48, 48, 48,
/* 0x38d0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x38e0 */  32, 48, 48, 48, 48, 49, 57, 53, 53, 32, 32, 50, 42, 42, 48, 32,
/* 0x38f0 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79,
/* 0x3900 */  78, 76, 89, 10, 32, 56, 55, 32, 67, 84, 66, 83, 87, 65, 49, 49,
/* 0x3910 */  32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 53, 32, 32,
/* 0x3920 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3930 */  48, 48, 32, 32, 48, 48, 48, 48, 49, 57, 53, 55, 32, 32, 50, 42,
/* 0x3940 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x3950 */  65, 68, 79, 78, 76, 89, 10, 32, 56, 56, 32, 67, 65, 76, 76, 84,
/* 0x3960 */  82, 49, 51, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x3970 */  55, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3980 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 57, 53, 99, 32,
/* 0x3990 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x39a0 */  32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x39b0 */  10, 32, 56, 57, 32, 99,116,111,107, 51, 50, 46, 48, 48, 32, 32,
/* 0x39c0 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 99, 32, 32, 48, 48, 48,
/* 0x39d0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x39e0 */  32, 48, 48, 48, 48, 49, 57, 54, 51, 32, 32, 50, 42, 42, 48, 32,
/* 0x39f0 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67,
/* 0x3a00 */  44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 57, 48, 32, 99,
/* 0x3a10 */ 116,111,107, 51, 50, 46, 49, 48, 32, 32, 32, 32, 32, 48, 48, 48,
/* 0x3a20 */  48, 48, 48, 48,101, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x3a30 */  32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49,
/* 0x3a40 */  57, 54,102, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69,
/* 0x3a50 */  78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68,
/* 0x3a60 */  79, 78, 76, 89, 10, 32, 57, 49, 32, 99,116,111,107, 51, 50, 46,
/* 0x3a70 */  50, 48, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 50, 50, 32,
/* 0x3a80 */  32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48,
/* 0x3a90 */  48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 57, 55,100, 32, 32, 50,
/* 0x3aa0 */  42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82,
/* 0x3ab0 */  69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32,
/* 0x3ac0 */  57, 50, 32, 99,116,111,107, 51, 50, 46, 51, 48, 32, 32, 32, 32,
/* 0x3ad0 */  32, 48, 48, 48, 48, 48, 48, 48, 55, 32, 32, 48, 48, 48, 48, 48,
/* 0x3ae0 */  48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x3af0 */  48, 48, 48, 49, 57, 57,102, 32, 32, 50, 42, 42, 48, 32, 32, 67,
/* 0x3b00 */  79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32,
/* 0x3b10 */  82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 57, 51, 32, 99,116,111,
/* 0x3b20 */ 107, 51, 50, 46, 52, 48, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48,
/* 0x3b30 */  48, 48, 53, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x3b40 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 57, 97,
/* 0x3b50 */  54, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84,
/* 0x3b60 */  83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78,
/* 0x3b70 */  76, 89, 10, 32, 57, 52, 32, 80, 69, 73, 77, 80, 79, 82, 84, 32,
/* 0x3b80 */  32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 50, 99, 32, 32, 48,
/* 0x3b90 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x3ba0 */  48, 32, 32, 48, 48, 48, 48, 49, 57, 97, 98, 32, 32, 50, 42, 42,
/* 0x3bb0 */  48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76,
/* 0x3bc0 */  79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 57, 53,
/* 0x3bd0 */  32, 80, 69, 73, 66, 89, 79, 82, 68, 32, 32, 32, 32, 32, 32, 48,
/* 0x3be0 */  48, 48, 48, 48, 48, 48, 50, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x3bf0 */  48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3c00 */  48, 49, 57,100, 55, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78,
/* 0x3c10 */  84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69,
/* 0x3c20 */  65, 68, 79, 78, 76, 89, 10, 32, 57, 54, 32, 80, 69, 75, 51, 50,
/* 0x3c30 */  79, 82, 68, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 49,
/* 0x3c40 */  48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48,
/* 0x3c50 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 57,100, 57, 32,
/* 0x3c60 */  32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44,
/* 0x3c70 */  32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x3c80 */  10, 32, 57, 55, 32, 80, 69, 73, 77, 79, 82, 68, 49, 32, 32, 32,
/* 0x3c90 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 55, 32, 32, 48, 48, 48,
/* 0x3ca0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x3cb0 */  32, 48, 48, 48, 48, 49, 57,101, 57, 32, 32, 50, 42, 42, 48, 32,
/* 0x3cc0 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79,
/* 0x3cd0 */  78, 76, 89, 10, 32, 57, 56, 32, 80, 69, 73, 77, 80, 79, 82, 50,
/* 0x3ce0 */  32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 49, 54, 32, 32,
/* 0x3cf0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3d00 */  48, 48, 32, 32, 48, 48, 48, 48, 49, 57,102, 48, 32, 32, 50, 42,
/* 0x3d10 */  42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69,
/* 0x3d20 */  76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 32, 57,
/* 0x3d30 */  57, 32, 80, 69, 73, 69, 82, 68, 76, 76, 32, 32, 32, 32, 32, 32,
/* 0x3d40 */  48, 48, 48, 48, 48, 48, 48, 54, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3d50 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x3d60 */  48, 48, 49, 97, 48, 54, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79,
/* 0x3d70 */  78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89,
/* 0x3d80 */  10, 49, 48, 48, 32, 80, 69, 73, 69, 82, 69, 88, 69, 32, 32, 32,
/* 0x3d90 */  32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 54, 32, 32, 48, 48, 48,
/* 0x3da0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x3db0 */  32, 48, 48, 48, 48, 49, 97, 48, 99, 32, 32, 50, 42, 42, 48, 32,
/* 0x3dc0 */  32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67,
/* 0x3dd0 */  44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 48, 49, 32, 80,
/* 0x3de0 */  69, 73, 77, 68, 79, 78, 69, 32, 32, 32, 32, 32, 32, 48, 48, 48,
/* 0x3df0 */  48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x3e00 */  32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49,
/* 0x3e10 */  97, 49, 50, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69,
/* 0x3e20 */  78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 48,
/* 0x3e30 */  50, 32, 80, 69, 82, 69, 76, 79, 67, 49, 32, 32, 32, 32, 32, 32,
/* 0x3e40 */  48, 48, 48, 48, 48, 48, 48, 54, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3e50 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x3e60 */  48, 48, 49, 97, 49, 50, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79,
/* 0x3e70 */  78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82,
/* 0x3e80 */  69, 65, 68, 79, 78, 76, 89, 10, 49, 48, 51, 32, 80, 69, 82, 69,
/* 0x3e90 */  76, 79, 67, 50, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3ea0 */  48, 51, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x3eb0 */  48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 97, 49, 56,
/* 0x3ec0 */  32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83,
/* 0x3ed0 */  44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 48, 52, 32, 80,
/* 0x3ee0 */  69, 82, 69, 76, 79, 67, 51, 32, 32, 32, 32, 32, 32, 48, 48, 48,
/* 0x3ef0 */  48, 48, 48, 48, 51, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x3f00 */  32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49,
/* 0x3f10 */  97, 49, 98, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69,
/* 0x3f20 */  78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 48,
/* 0x3f30 */  53, 32, 82, 69, 76, 79, 67, 51, 50, 48, 32, 32, 32, 32, 32, 32,
/* 0x3f40 */  48, 48, 48, 48, 48, 48, 50, 57, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3f50 */  48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x3f60 */  48, 48, 49, 97, 49,101, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79,
/* 0x3f70 */  78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82,
/* 0x3f80 */  69, 65, 68, 79, 78, 76, 89, 10, 49, 48, 54, 32, 82, 69, 76, 51,
/* 0x3f90 */  50, 66, 73, 71, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48,
/* 0x3fa0 */  48, 57, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48,
/* 0x3fb0 */  48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 97, 52, 55,
/* 0x3fc0 */  32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83,
/* 0x3fd0 */  44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78, 76,
/* 0x3fe0 */  89, 10, 49, 48, 55, 32, 82, 69, 76, 79, 67, 51, 50, 74, 32, 32,
/* 0x3ff0 */  32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 50, 32, 32, 48, 48,
/* 0x4000 */  48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4010 */  32, 32, 48, 48, 48, 48, 49, 97, 53, 48, 32, 32, 50, 42, 42, 48,
/* 0x4020 */  32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79,
/* 0x4030 */  67, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 48, 56, 32,
/* 0x4040 */  82, 69, 76, 51, 50, 69, 78, 68, 32, 32, 32, 32, 32, 32, 48, 48,
/* 0x4050 */  48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4060 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x4070 */  49, 97, 53, 50, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84,
/* 0x4080 */  69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 49,
/* 0x4090 */  48, 57, 32, 80, 69, 82, 76, 79, 72, 73, 48, 32, 32, 32, 32, 32,
/* 0x40a0 */  32, 48, 48, 48, 48, 48, 48, 48, 56, 32, 32, 48, 48, 48, 48, 48,
/* 0x40b0 */  48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x40c0 */  48, 48, 48, 49, 97, 53, 50, 32, 32, 50, 42, 42, 48, 32, 32, 67,
/* 0x40d0 */  79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32,
/* 0x40e0 */  82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 49, 48, 32, 80, 69, 82,
/* 0x40f0 */  69, 76, 76, 79, 48, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48,
/* 0x4100 */  48, 48, 97, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x4110 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 97, 53,
/* 0x4120 */  97, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84,
/* 0x4130 */  83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 49, 49, 32,
/* 0x4140 */  80, 69, 82, 69, 76, 72, 73, 48, 32, 32, 32, 32, 32, 32, 48, 48,
/* 0x4150 */  48, 48, 48, 48, 48,100, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4160 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x4170 */  49, 97, 54, 52, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84,
/* 0x4180 */  69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 49,
/* 0x4190 */  49, 50, 32, 80, 69, 68, 69, 80, 72, 65, 75, 32, 32, 32, 32, 32,
/* 0x41a0 */  32, 48, 48, 48, 48, 48, 48, 50,102, 32, 32, 48, 48, 48, 48, 48,
/* 0x41b0 */  48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x41c0 */  48, 48, 48, 49, 97, 55, 49, 32, 32, 50, 42, 42, 48, 32, 32, 67,
/* 0x41d0 */  79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32,
/* 0x41e0 */  82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 49, 51, 32, 80, 69, 84,
/* 0x41f0 */  76, 83, 67, 32, 32, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48,
/* 0x4200 */  48, 49, 56, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x4210 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 97, 97,
/* 0x4220 */  48, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84,
/* 0x4230 */  83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78,
/* 0x4240 */  76, 89, 10, 49, 49, 52, 32, 80, 69, 77, 65, 73, 78, 50, 48, 32,
/* 0x4250 */  32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48, 49, 32, 32, 48,
/* 0x4260 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x4270 */  48, 32, 32, 48, 48, 48, 48, 49, 97, 98, 56, 32, 32, 50, 42, 42,
/* 0x4280 */  48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65,
/* 0x4290 */  68, 79, 78, 76, 89, 10, 49, 49, 53, 32, 67, 76, 69, 65, 82, 83,
/* 0x42a0 */  84, 65, 67, 75, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 48,100,
/* 0x42b0 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x42c0 */  48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 97, 98, 57, 32, 32,
/* 0x42d0 */  50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32,
/* 0x42e0 */  82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 49, 54, 32, 80, 69, 77,
/* 0x42f0 */  65, 73, 78, 50, 49, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48,
/* 0x4300 */  48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x4310 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 97, 99,
/* 0x4320 */  54, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84,
/* 0x4330 */  83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 49, 55, 32,
/* 0x4340 */  80, 69, 82, 69, 84, 85, 82, 78, 32, 32, 32, 32, 32, 32, 48, 48,
/* 0x4350 */  48, 48, 48, 48, 48, 54, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4360 */  32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48,
/* 0x4370 */  49, 97, 99, 54, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84,
/* 0x4380 */  69, 78, 84, 83, 44, 32, 82, 69, 65, 68, 79, 78, 76, 89, 10, 49,
/* 0x4390 */  49, 56, 32, 80, 69, 68, 79, 74, 85, 77, 80, 32, 32, 32, 32, 32,
/* 0x43a0 */  32, 48, 48, 48, 48, 48, 48, 48, 53, 32, 32, 48, 48, 48, 48, 48,
/* 0x43b0 */  48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x43c0 */  48, 48, 48, 49, 97, 99, 99, 32, 32, 50, 42, 42, 48, 32, 32, 67,
/* 0x43d0 */  79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 76, 79, 67, 44, 32,
/* 0x43e0 */  82, 69, 65, 68, 79, 78, 76, 89, 10, 49, 49, 57, 32, 80, 69, 84,
/* 0x43f0 */  76, 83, 67, 50, 32, 32, 32, 32, 32, 32, 32, 48, 48, 48, 48, 48,
/* 0x4400 */  48, 49,102, 32, 32, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 48,
/* 0x4410 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 49, 97,100,
/* 0x4420 */  49, 32, 32, 50, 42, 42, 48, 32, 32, 67, 79, 78, 84, 69, 78, 84,
/* 0x4430 */  83, 44, 32, 82, 69, 76, 79, 67, 44, 32, 82, 69, 65, 68, 79, 78,
/* 0x4440 */  76, 89, 10, 49, 50, 48, 32, 85, 80, 88, 49, 72, 69, 65, 68, 32,
/* 0x4450 */  32, 32, 32, 32, 32, 48, 48, 48, 48, 48, 48, 50, 48, 32, 32, 48,
/* 0x4460 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 48, 48, 48, 48, 48, 48, 48,
/* 0x4470 */  48, 32, 32, 48, 48, 48, 48, 49, 97,102, 48, 32, 32, 50, 42, 42,
/* 0x4480 */  48, 32, 32, 67, 79, 78, 84, 69, 78, 84, 83, 44, 32, 82, 69, 65,
/* 0x4490 */  68, 79, 78, 76, 89, 10, 83, 89, 77, 66, 79, 76, 32, 84, 65, 66,
/* 0x44a0 */  76, 69, 58, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x44b0 */  32, 32,100, 32, 32, 78, 50, 66, 83, 77, 65, 49, 48,  9, 48, 48,
/* 0x44c0 */  48, 48, 48, 48, 48, 48, 32, 78, 50, 66, 83, 77, 65, 49, 48, 10,
/* 0x44d0 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x44e0 */  32, 78, 50, 66, 70, 65, 83, 49, 49,  9, 48, 48, 48, 48, 48, 48,
/* 0x44f0 */  48, 48, 32, 78, 50, 66, 70, 65, 83, 49, 49, 10, 48, 48, 48, 48,
/* 0x4500 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 66,
/* 0x4510 */  68, 69, 67, 49, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78,
/* 0x4520 */  50, 66, 68, 69, 67, 49, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4530 */  32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 66, 68, 69, 67, 50,
/* 0x4540 */  48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 66, 68, 69,
/* 0x4550 */  67, 50, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x4560 */  32, 32,100, 32, 32, 78, 50, 66, 68, 69, 67, 51, 48,  9, 48, 48,
/* 0x4570 */  48, 48, 48, 48, 48, 48, 32, 78, 50, 66, 68, 69, 67, 51, 48, 10,
/* 0x4580 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x4590 */  32, 78, 50, 66, 68, 69, 67, 53, 48,  9, 48, 48, 48, 48, 48, 48,
/* 0x45a0 */  48, 48, 32, 78, 50, 66, 68, 69, 67, 53, 48, 10, 48, 48, 48, 48,
/* 0x45b0 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 66,
/* 0x45c0 */  70, 65, 83, 54, 49,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78,
/* 0x45d0 */  50, 66, 70, 65, 83, 54, 49, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x45e0 */  32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 66, 68, 69, 67, 54,
/* 0x45f0 */  48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 66, 68, 69,
/* 0x4600 */  67, 54, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x4610 */  32, 32,100, 32, 32, 78, 50, 68, 83, 77, 65, 49, 48,  9, 48, 48,
/* 0x4620 */  48, 48, 48, 48, 48, 48, 32, 78, 50, 68, 83, 77, 65, 49, 48, 10,
/* 0x4630 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x4640 */  32, 78, 50, 68, 70, 65, 83, 49, 49,  9, 48, 48, 48, 48, 48, 48,
/* 0x4650 */  48, 48, 32, 78, 50, 68, 70, 65, 83, 49, 49, 10, 48, 48, 48, 48,
/* 0x4660 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 68,
/* 0x4670 */  68, 69, 67, 49, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78,
/* 0x4680 */  50, 68, 68, 69, 67, 49, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4690 */  32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 68, 68, 69, 67, 50,
/* 0x46a0 */  48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 68, 68, 69,
/* 0x46b0 */  67, 50, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x46c0 */  32, 32,100, 32, 32, 78, 50, 68, 68, 69, 67, 51, 48,  9, 48, 48,
/* 0x46d0 */  48, 48, 48, 48, 48, 48, 32, 78, 50, 68, 68, 69, 67, 51, 48, 10,
/* 0x46e0 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x46f0 */  32, 78, 50, 68, 68, 69, 67, 53, 48,  9, 48, 48, 48, 48, 48, 48,
/* 0x4700 */  48, 48, 32, 78, 50, 68, 68, 69, 67, 53, 48, 10, 48, 48, 48, 48,
/* 0x4710 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 68,
/* 0x4720 */  70, 65, 83, 54, 49,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78,
/* 0x4730 */  50, 68, 70, 65, 83, 54, 49, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4740 */  32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 68, 68, 69, 67, 54,
/* 0x4750 */  48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 68, 68, 69,
/* 0x4760 */  67, 54, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x4770 */  32, 32,100, 32, 32, 78, 50, 69, 83, 77, 65, 49, 48,  9, 48, 48,
/* 0x4780 */  48, 48, 48, 48, 48, 48, 32, 78, 50, 69, 83, 77, 65, 49, 48, 10,
/* 0x4790 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x47a0 */  32, 78, 50, 69, 70, 65, 83, 49, 49,  9, 48, 48, 48, 48, 48, 48,
/* 0x47b0 */  48, 48, 32, 78, 50, 69, 70, 65, 83, 49, 49, 10, 48, 48, 48, 48,
/* 0x47c0 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 69,
/* 0x47d0 */  68, 69, 67, 49, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78,
/* 0x47e0 */  50, 69, 68, 69, 67, 49, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x47f0 */  32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 69, 68, 69, 67, 50,
/* 0x4800 */  48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 69, 68, 69,
/* 0x4810 */  67, 50, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x4820 */  32, 32,100, 32, 32, 78, 50, 69, 68, 69, 67, 51, 48,  9, 48, 48,
/* 0x4830 */  48, 48, 48, 48, 48, 48, 32, 78, 50, 69, 68, 69, 67, 51, 48, 10,
/* 0x4840 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x4850 */  32, 78, 50, 69, 68, 69, 67, 53, 48,  9, 48, 48, 48, 48, 48, 48,
/* 0x4860 */  48, 48, 32, 78, 50, 69, 68, 69, 67, 53, 48, 10, 48, 48, 48, 48,
/* 0x4870 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 69,
/* 0x4880 */  70, 65, 83, 54, 49,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78,
/* 0x4890 */  50, 69, 70, 65, 83, 54, 49, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x48a0 */  32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 69, 68, 69, 67, 54,
/* 0x48b0 */  48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 69, 68, 69,
/* 0x48c0 */  67, 54, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x48d0 */  32, 32,100, 32, 32, 67, 65, 76, 76, 84, 82, 48, 48,  9, 48, 48,
/* 0x48e0 */  48, 48, 48, 48, 48, 48, 32, 67, 65, 76, 76, 84, 82, 48, 48, 10,
/* 0x48f0 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x4900 */  32, 67, 65, 76, 76, 84, 82, 49, 48,  9, 48, 48, 48, 48, 48, 48,
/* 0x4910 */  48, 48, 32, 67, 65, 76, 76, 84, 82, 49, 48, 10, 48, 48, 48, 48,
/* 0x4920 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 67, 65, 76,
/* 0x4930 */  76, 84, 82, 49, 49,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 67,
/* 0x4940 */  65, 76, 76, 84, 82, 49, 49, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4950 */  32,108, 32, 32, 32, 32,100, 32, 32, 67, 65, 76, 76, 84, 82, 49,
/* 0x4960 */  51,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 67, 65, 76, 76, 84,
/* 0x4970 */  82, 49, 51, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x4980 */  32, 32,100, 32, 32, 99,116,111,107, 51, 50, 46, 48, 48,  9, 48,
/* 0x4990 */  48, 48, 48, 48, 48, 48, 48, 32, 99,116,111,107, 51, 50, 46, 48,
/* 0x49a0 */  48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x49b0 */ 100, 32, 32, 99,116,111,107, 51, 50, 46, 49, 48,  9, 48, 48, 48,
/* 0x49c0 */  48, 48, 48, 48, 48, 32, 99,116,111,107, 51, 50, 46, 49, 48, 10,
/* 0x49d0 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x49e0 */  32, 99,116,111,107, 51, 50, 46, 50, 48,  9, 48, 48, 48, 48, 48,
/* 0x49f0 */  48, 48, 48, 32, 99,116,111,107, 51, 50, 46, 50, 48, 10, 48, 48,
/* 0x4a00 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 99,
/* 0x4a10 */ 116,111,107, 51, 50, 46, 52, 48,  9, 48, 48, 48, 48, 48, 48, 48,
/* 0x4a20 */  48, 32, 99,116,111,107, 51, 50, 46, 52, 48, 10, 48, 48, 48, 48,
/* 0x4a30 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 73,
/* 0x4a40 */  77, 80, 79, 82, 84,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80,
/* 0x4a50 */  69, 73, 77, 80, 79, 82, 84, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4a60 */  32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 73, 77, 79, 82, 68,
/* 0x4a70 */  49,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 73, 77, 79,
/* 0x4a80 */  82, 68, 49, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x4a90 */  32, 32,100, 32, 32, 80, 69, 73, 77, 80, 79, 82, 50,  9, 48, 48,
/* 0x4aa0 */  48, 48, 48, 48, 48, 48, 32, 80, 69, 73, 77, 80, 79, 82, 50, 10,
/* 0x4ab0 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x4ac0 */  32, 80, 69, 73, 77, 68, 79, 78, 69,  9, 48, 48, 48, 48, 48, 48,
/* 0x4ad0 */  48, 48, 32, 80, 69, 73, 77, 68, 79, 78, 69, 10, 48, 48, 48, 48,
/* 0x4ae0 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 82, 69, 76,
/* 0x4af0 */  79, 67, 51, 50, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 82,
/* 0x4b00 */  69, 76, 79, 67, 51, 50, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4b10 */  32,108, 32, 32, 32, 32,100, 32, 32, 82, 69, 76, 79, 67, 51, 50,
/* 0x4b20 */  74,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 82, 69, 76, 79, 67,
/* 0x4b30 */  51, 50, 74, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x4b40 */  32, 32,100, 32, 32, 80, 69, 77, 65, 73, 78, 50, 49,  9, 48, 48,
/* 0x4b50 */  48, 48, 48, 48, 48, 48, 32, 80, 69, 77, 65, 73, 78, 50, 49, 10,
/* 0x4b60 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x4b70 */  32, 80, 69, 84, 76, 83, 67, 50,  9, 48, 48, 48, 48, 48, 48, 48,
/* 0x4b80 */  48, 32, 80, 69, 84, 76, 83, 67, 50, 10, 48, 48, 48, 48, 48, 48,
/* 0x4b90 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 73, 83, 68,
/* 0x4ba0 */  76, 76, 49,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 73,
/* 0x4bb0 */  83, 68, 76, 76, 49, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x4bc0 */  32, 32, 32, 32,100, 32, 32, 80, 69, 77, 65, 73, 78, 48, 49,  9,
/* 0x4bd0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 77, 65, 73, 78, 48,
/* 0x4be0 */  49, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x4bf0 */ 100, 32, 32, 80, 69, 73, 67, 79, 78, 83, 49,  9, 48, 48, 48, 48,
/* 0x4c00 */  48, 48, 48, 48, 32, 80, 69, 73, 67, 79, 78, 83, 49, 10, 48, 48,
/* 0x4c10 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 80,
/* 0x4c20 */  69, 73, 67, 79, 78, 83, 50,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4c30 */  32, 80, 69, 73, 67, 79, 78, 83, 50, 10, 48, 48, 48, 48, 48, 48,
/* 0x4c40 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 84, 76, 83,
/* 0x4c50 */  72, 65, 75,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 84,
/* 0x4c60 */  76, 83, 72, 65, 75, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x4c70 */  32, 32, 32, 32,100, 32, 32, 80, 69, 77, 65, 73, 78, 48, 50,  9,
/* 0x4c80 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 77, 65, 73, 78, 48,
/* 0x4c90 */  50, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x4ca0 */ 100, 32, 32, 80, 69, 77, 65, 73, 78, 48, 51,  9, 48, 48, 48, 48,
/* 0x4cb0 */  48, 48, 48, 48, 32, 80, 69, 77, 65, 73, 78, 48, 51, 10, 48, 48,
/* 0x4cc0 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78,
/* 0x4cd0 */  50, 66, 70, 65, 83, 49, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4ce0 */  32, 78, 50, 66, 70, 65, 83, 49, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x4cf0 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 66, 83, 77,
/* 0x4d00 */  65, 50, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 66,
/* 0x4d10 */  83, 77, 65, 50, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x4d20 */  32, 32, 32, 32,100, 32, 32, 78, 50, 66, 70, 65, 83, 50, 48,  9,
/* 0x4d30 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 66, 70, 65, 83, 50,
/* 0x4d40 */  48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x4d50 */ 100, 32, 32, 78, 50, 66, 83, 77, 65, 51, 48,  9, 48, 48, 48, 48,
/* 0x4d60 */  48, 48, 48, 48, 32, 78, 50, 66, 83, 77, 65, 51, 48, 10, 48, 48,
/* 0x4d70 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78,
/* 0x4d80 */  50, 66, 70, 65, 83, 51, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4d90 */  32, 78, 50, 66, 70, 65, 83, 51, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x4da0 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 66, 83, 77,
/* 0x4db0 */  65, 52, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 66,
/* 0x4dc0 */  83, 77, 65, 52, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x4dd0 */  32, 32, 32, 32,100, 32, 32, 78, 50, 66, 70, 65, 83, 52, 48,  9,
/* 0x4de0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 66, 70, 65, 83, 52,
/* 0x4df0 */  48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x4e00 */ 100, 32, 32, 78, 50, 66, 83, 77, 65, 53, 48,  9, 48, 48, 48, 48,
/* 0x4e10 */  48, 48, 48, 48, 32, 78, 50, 66, 83, 77, 65, 53, 48, 10, 48, 48,
/* 0x4e20 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78,
/* 0x4e30 */  50, 66, 70, 65, 83, 53, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4e40 */  32, 78, 50, 66, 70, 65, 83, 53, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x4e50 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 66, 83, 77,
/* 0x4e60 */  65, 54, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 66,
/* 0x4e70 */  83, 77, 65, 54, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x4e80 */  32, 32, 32, 32,100, 32, 32, 78, 50, 66, 70, 65, 83, 54, 48,  9,
/* 0x4e90 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 66, 70, 65, 83, 54,
/* 0x4ea0 */  48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x4eb0 */ 100, 32, 32, 78, 50, 68, 70, 65, 83, 49, 48,  9, 48, 48, 48, 48,
/* 0x4ec0 */  48, 48, 48, 48, 32, 78, 50, 68, 70, 65, 83, 49, 48, 10, 48, 48,
/* 0x4ed0 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78,
/* 0x4ee0 */  50, 68, 83, 77, 65, 50, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4ef0 */  32, 78, 50, 68, 83, 77, 65, 50, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x4f00 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 68, 70, 65,
/* 0x4f10 */  83, 50, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 68,
/* 0x4f20 */  70, 65, 83, 50, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x4f30 */  32, 32, 32, 32,100, 32, 32, 78, 50, 68, 83, 77, 65, 51, 48,  9,
/* 0x4f40 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 68, 83, 77, 65, 51,
/* 0x4f50 */  48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x4f60 */ 100, 32, 32, 78, 50, 68, 70, 65, 83, 51, 48,  9, 48, 48, 48, 48,
/* 0x4f70 */  48, 48, 48, 48, 32, 78, 50, 68, 70, 65, 83, 51, 48, 10, 48, 48,
/* 0x4f80 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78,
/* 0x4f90 */  50, 68, 83, 77, 65, 52, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x4fa0 */  32, 78, 50, 68, 83, 77, 65, 52, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x4fb0 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 68, 70, 65,
/* 0x4fc0 */  83, 52, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 68,
/* 0x4fd0 */  70, 65, 83, 52, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x4fe0 */  32, 32, 32, 32,100, 32, 32, 78, 50, 68, 83, 77, 65, 53, 48,  9,
/* 0x4ff0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 68, 83, 77, 65, 53,
/* 0x5000 */  48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x5010 */ 100, 32, 32, 78, 50, 68, 70, 65, 83, 53, 48,  9, 48, 48, 48, 48,
/* 0x5020 */  48, 48, 48, 48, 32, 78, 50, 68, 70, 65, 83, 53, 48, 10, 48, 48,
/* 0x5030 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78,
/* 0x5040 */  50, 68, 83, 77, 65, 54, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5050 */  32, 78, 50, 68, 83, 77, 65, 54, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x5060 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 68, 70, 65,
/* 0x5070 */  83, 54, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 68,
/* 0x5080 */  70, 65, 83, 54, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x5090 */  32, 32, 32, 32,100, 32, 32, 78, 50, 69, 70, 65, 83, 49, 48,  9,
/* 0x50a0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 69, 70, 65, 83, 49,
/* 0x50b0 */  48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x50c0 */ 100, 32, 32, 78, 50, 69, 83, 77, 65, 50, 48,  9, 48, 48, 48, 48,
/* 0x50d0 */  48, 48, 48, 48, 32, 78, 50, 69, 83, 77, 65, 50, 48, 10, 48, 48,
/* 0x50e0 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78,
/* 0x50f0 */  50, 69, 70, 65, 83, 50, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5100 */  32, 78, 50, 69, 70, 65, 83, 50, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x5110 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 69, 83, 77,
/* 0x5120 */  65, 51, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 69,
/* 0x5130 */  83, 77, 65, 51, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x5140 */  32, 32, 32, 32,100, 32, 32, 78, 50, 69, 70, 65, 83, 51, 48,  9,
/* 0x5150 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 69, 70, 65, 83, 51,
/* 0x5160 */  48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x5170 */ 100, 32, 32, 78, 50, 69, 83, 77, 65, 52, 48,  9, 48, 48, 48, 48,
/* 0x5180 */  48, 48, 48, 48, 32, 78, 50, 69, 83, 77, 65, 52, 48, 10, 48, 48,
/* 0x5190 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78,
/* 0x51a0 */  50, 69, 70, 65, 83, 52, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x51b0 */  32, 78, 50, 69, 70, 65, 83, 52, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x51c0 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78, 50, 69, 83, 77,
/* 0x51d0 */  65, 53, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 69,
/* 0x51e0 */  83, 77, 65, 53, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x51f0 */  32, 32, 32, 32,100, 32, 32, 78, 50, 69, 70, 65, 83, 53, 48,  9,
/* 0x5200 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 78, 50, 69, 70, 65, 83, 53,
/* 0x5210 */  48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x5220 */ 100, 32, 32, 78, 50, 69, 83, 77, 65, 54, 48,  9, 48, 48, 48, 48,
/* 0x5230 */  48, 48, 48, 48, 32, 78, 50, 69, 83, 77, 65, 54, 48, 10, 48, 48,
/* 0x5240 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 78,
/* 0x5250 */  50, 69, 70, 65, 83, 54, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5260 */  32, 78, 50, 69, 70, 65, 83, 54, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x5270 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 76, 90, 77, 65, 95,
/* 0x5280 */  68, 69, 67, 48, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 76,
/* 0x5290 */  90, 77, 65, 95, 68, 69, 67, 48, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x52a0 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 76, 90, 77, 65, 95,
/* 0x52b0 */  69, 76, 70, 48, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 76,
/* 0x52c0 */  90, 77, 65, 95, 69, 76, 70, 48, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x52d0 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 76, 90, 77, 65, 95,
/* 0x52e0 */  68, 69, 67, 49, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 76,
/* 0x52f0 */  90, 77, 65, 95, 68, 69, 67, 49, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x5300 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 76, 90, 77, 65, 95,
/* 0x5310 */  68, 69, 67, 50, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 76,
/* 0x5320 */  90, 77, 65, 95, 68, 69, 67, 50, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x5330 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 76, 90, 77, 65, 95,
/* 0x5340 */  68, 69, 67, 51, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 76,
/* 0x5350 */  90, 77, 65, 95, 68, 69, 67, 51, 48, 10, 48, 48, 48, 48, 48, 48,
/* 0x5360 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 77, 65, 73,
/* 0x5370 */  78, 49, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 77,
/* 0x5380 */  65, 73, 78, 49, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x5390 */  32, 32, 32, 32,100, 32, 32, 80, 69, 67, 84, 84, 80, 79, 83,  9,
/* 0x53a0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 67, 84, 84, 80, 79,
/* 0x53b0 */  83, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x53c0 */ 100, 32, 32, 80, 69, 67, 84, 84, 78, 85, 76,  9, 48, 48, 48, 48,
/* 0x53d0 */  48, 48, 48, 48, 32, 80, 69, 67, 84, 84, 78, 85, 76, 10, 48, 48,
/* 0x53e0 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 67,
/* 0x53f0 */  84, 67, 76, 69, 86, 69, 49,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5400 */  32, 67, 84, 67, 76, 69, 86, 69, 49, 10, 48, 48, 48, 48, 48, 48,
/* 0x5410 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 67, 65, 76, 76, 84,
/* 0x5420 */  82, 48, 49,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 67, 65, 76,
/* 0x5430 */  76, 84, 82, 48, 49, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x5440 */  32, 32, 32, 32,100, 32, 32, 67, 84, 66, 83, 72, 82, 48, 49,  9,
/* 0x5450 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 67, 84, 66, 83, 72, 82, 48,
/* 0x5460 */  49, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x5470 */ 100, 32, 32, 67, 84, 66, 82, 79, 82, 48, 49,  9, 48, 48, 48, 48,
/* 0x5480 */  48, 48, 48, 48, 32, 67, 84, 66, 82, 79, 82, 48, 49, 10, 48, 48,
/* 0x5490 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 67,
/* 0x54a0 */  84, 66, 83, 87, 65, 48, 49,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x54b0 */  32, 67, 84, 66, 83, 87, 65, 48, 49, 10, 48, 48, 48, 48, 48, 48,
/* 0x54c0 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 67, 65, 76, 76, 84,
/* 0x54d0 */  82, 48, 50,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 67, 65, 76,
/* 0x54e0 */  76, 84, 82, 48, 50, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x54f0 */  32, 32, 32, 32,100, 32, 32, 67, 65, 76, 76, 84, 82, 69, 56,  9,
/* 0x5500 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 67, 65, 76, 76, 84, 82, 69,
/* 0x5510 */  56, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x5520 */ 100, 32, 32, 67, 65, 76, 76, 84, 82, 69, 57,  9, 48, 48, 48, 48,
/* 0x5530 */  48, 48, 48, 48, 32, 67, 65, 76, 76, 84, 82, 69, 57, 10, 48, 48,
/* 0x5540 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 67,
/* 0x5550 */  84, 67, 76, 69, 86, 69, 50,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5560 */  32, 67, 84, 67, 76, 69, 86, 69, 50, 10, 48, 48, 48, 48, 48, 48,
/* 0x5570 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 67, 65, 76, 76, 84,
/* 0x5580 */  82, 49, 50,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 67, 65, 76,
/* 0x5590 */  76, 84, 82, 49, 50, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,
/* 0x55a0 */  32, 32, 32, 32,100, 32, 32, 67, 84, 66, 83, 72, 82, 49, 49,  9,
/* 0x55b0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 67, 84, 66, 83, 72, 82, 49,
/* 0x55c0 */  49, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,
/* 0x55d0 */ 100, 32, 32, 67, 84, 66, 82, 79, 82, 49, 49,  9, 48, 48, 48, 48,
/* 0x55e0 */  48, 48, 48, 48, 32, 67, 84, 66, 82, 79, 82, 49, 49, 10, 48, 48,
/* 0x55f0 */  48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 67,
/* 0x5600 */  84, 66, 83, 87, 65, 49, 49,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5610 */  32, 67, 84, 66, 83, 87, 65, 49, 49, 10, 48, 48, 48, 48, 48, 48,
/* 0x5620 */  48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 99,116,111,107, 51,
/* 0x5630 */  50, 46, 51, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 99,116,
/* 0x5640 */ 111,107, 51, 50, 46, 51, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5650 */  32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 73, 66, 89, 79, 82,
/* 0x5660 */  68,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 73, 66, 89,
/* 0x5670 */  79, 82, 68, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x5680 */  32, 32,100, 32, 32, 80, 69, 75, 51, 50, 79, 82, 68,  9, 48, 48,
/* 0x5690 */  48, 48, 48, 48, 48, 48, 32, 80, 69, 75, 51, 50, 79, 82, 68, 10,
/* 0x56a0 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x56b0 */  32, 80, 69, 73, 69, 82, 68, 76, 76,  9, 48, 48, 48, 48, 48, 48,
/* 0x56c0 */  48, 48, 32, 80, 69, 73, 69, 82, 68, 76, 76, 10, 48, 48, 48, 48,
/* 0x56d0 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 73,
/* 0x56e0 */  69, 82, 69, 88, 69,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80,
/* 0x56f0 */  69, 73, 69, 82, 69, 88, 69, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5700 */  32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 82, 69, 76, 79, 67,
/* 0x5710 */  49,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 82, 69, 76,
/* 0x5720 */  79, 67, 49, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x5730 */  32, 32,100, 32, 32, 80, 69, 82, 69, 76, 79, 67, 50,  9, 48, 48,
/* 0x5740 */  48, 48, 48, 48, 48, 48, 32, 80, 69, 82, 69, 76, 79, 67, 50, 10,
/* 0x5750 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x5760 */  32, 80, 69, 82, 69, 76, 79, 67, 51,  9, 48, 48, 48, 48, 48, 48,
/* 0x5770 */  48, 48, 32, 80, 69, 82, 69, 76, 79, 67, 51, 10, 48, 48, 48, 48,
/* 0x5780 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 82, 69, 76,
/* 0x5790 */  51, 50, 66, 73, 71,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 82,
/* 0x57a0 */  69, 76, 51, 50, 66, 73, 71, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x57b0 */  32,108, 32, 32, 32, 32,100, 32, 32, 82, 69, 76, 51, 50, 69, 78,
/* 0x57c0 */  68,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 82, 69, 76, 51, 50,
/* 0x57d0 */  69, 78, 68, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x57e0 */  32, 32,100, 32, 32, 80, 69, 82, 76, 79, 72, 73, 48,  9, 48, 48,
/* 0x57f0 */  48, 48, 48, 48, 48, 48, 32, 80, 69, 82, 76, 79, 72, 73, 48, 10,
/* 0x5800 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x5810 */  32, 80, 69, 82, 69, 76, 76, 79, 48,  9, 48, 48, 48, 48, 48, 48,
/* 0x5820 */  48, 48, 32, 80, 69, 82, 69, 76, 76, 79, 48, 10, 48, 48, 48, 48,
/* 0x5830 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 82,
/* 0x5840 */  69, 76, 72, 73, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80,
/* 0x5850 */  69, 82, 69, 76, 72, 73, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5860 */  32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 68, 69, 80, 72, 65,
/* 0x5870 */  75,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 68, 69, 80,
/* 0x5880 */  72, 65, 75, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x5890 */  32, 32,100, 32, 32, 80, 69, 84, 76, 83, 67,  9, 48, 48, 48, 48,
/* 0x58a0 */  48, 48, 48, 48, 32, 80, 69, 84, 76, 83, 67, 10, 48, 48, 48, 48,
/* 0x58b0 */  48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 77,
/* 0x58c0 */  65, 73, 78, 50, 48,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80,
/* 0x58d0 */  69, 77, 65, 73, 78, 50, 48, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x58e0 */  32,108, 32, 32, 32, 32,100, 32, 32, 67, 76, 69, 65, 82, 83, 84,
/* 0x58f0 */  65, 67, 75,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 67, 76, 69,
/* 0x5900 */  65, 82, 83, 84, 65, 67, 75, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5910 */  32,108, 32, 32, 32, 32,100, 32, 32, 80, 69, 82, 69, 84, 85, 82,
/* 0x5920 */  78,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 80, 69, 82, 69, 84,
/* 0x5930 */  85, 82, 78, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32,
/* 0x5940 */  32, 32,100, 32, 32, 80, 69, 68, 79, 74, 85, 77, 80,  9, 48, 48,
/* 0x5950 */  48, 48, 48, 48, 48, 48, 32, 80, 69, 68, 79, 74, 85, 77, 80, 10,
/* 0x5960 */  48, 48, 48, 48, 48, 48, 48, 48, 32,108, 32, 32, 32, 32,100, 32,
/* 0x5970 */  32, 85, 80, 88, 49, 72, 69, 65, 68,  9, 48, 48, 48, 48, 48, 48,
/* 0x5980 */  48, 48, 32, 85, 80, 88, 49, 72, 69, 65, 68, 10, 48, 48, 48, 48,
/* 0x5990 */  48, 48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78,
/* 0x59a0 */  68, 42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,115,116, 97,114,
/* 0x59b0 */ 116, 95,111,102, 95, 99,111,109,112,114,101,115,115,101,100, 10,
/* 0x59c0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x59d0 */  32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x59e0 */ 115,116, 97,114,116, 95,111,102, 95,117,110, 99,111,109,112,114,
/* 0x59f0 */ 101,115,115,101,100, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x5a00 */  32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9, 48, 48, 48,
/* 0x5a10 */  48, 48, 48, 48, 48, 32,105, 99,111,110, 95,111,102,102,115,101,
/* 0x5a20 */ 116, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32, 32, 32, 32,
/* 0x5a30 */  32, 32, 32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48, 48, 48, 48,
/* 0x5a40 */  48, 32,105, 99,111,110, 95,100,101,108,116, 97, 10, 48, 48, 48,
/* 0x5a50 */  48, 48, 48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85,
/* 0x5a60 */  78, 68, 42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,116,108,115,
/* 0x5a70 */  95, 97,100,100,114,101,115,115, 10, 48, 48, 48, 48, 48, 48, 48,
/* 0x5a80 */  48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9,
/* 0x5a90 */  48, 48, 48, 48, 48, 48, 48, 48, 32,116,108,115, 95,118, 97,108,
/* 0x5aa0 */ 117,101, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32, 32, 32,
/* 0x5ab0 */  32, 32, 32, 32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48, 48, 48,
/* 0x5ac0 */  48, 48, 32,108,122,109, 97, 95,115,116, 97, 99,107, 95, 97,100,
/* 0x5ad0 */ 106,117,115,116, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32,
/* 0x5ae0 */  32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48,
/* 0x5af0 */  48, 48, 48, 48, 32,108,122,109, 97, 95,117, 95,108,101,110, 10,
/* 0x5b00 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x5b10 */  32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x5b20 */ 108,122,109, 97, 95, 99, 95,108,101,110, 10, 48, 48, 48, 48, 48,
/* 0x5b30 */  48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68,
/* 0x5b40 */  42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,108,122,109, 97, 95,
/* 0x5b50 */ 112,114,111,112,101,114,116,105,101,115, 10, 48, 48, 48, 48, 48,
/* 0x5b60 */  48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68,
/* 0x5b70 */  42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,102,105,108,116,101,
/* 0x5b80 */ 114, 95, 98,117,102,102,101,114, 95,115,116, 97,114,116, 10, 48,
/* 0x5b90 */  48, 48, 48, 48, 48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x5ba0 */  42, 85, 78, 68, 42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,102,
/* 0x5bb0 */ 105,108,116,101,114, 95,108,101,110,103,116,104, 10, 48, 48, 48,
/* 0x5bc0 */  48, 48, 48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85,
/* 0x5bd0 */  78, 68, 42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,102,105,108,
/* 0x5be0 */ 116,101,114, 95, 99,116,111, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5bf0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9, 48,
/* 0x5c00 */  48, 48, 48, 48, 48, 48, 48, 32, 99,111,109,112,114,101,115,115,
/* 0x5c10 */ 101,100, 95,105,109,112,111,114,116,115, 10, 48, 48, 48, 48, 48,
/* 0x5c20 */  48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68,
/* 0x5c30 */  42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,115,116, 97,114,116,
/* 0x5c40 */  95,111,102, 95,105,109,112,111,114,116,115, 10, 48, 48, 48, 48,
/* 0x5c50 */  48, 48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78,
/* 0x5c60 */  68, 42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 76,111, 97,100,
/* 0x5c70 */  76,105, 98,114, 97,114,121, 65, 10, 48, 48, 48, 48, 48, 48, 48,
/* 0x5c80 */  48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9,
/* 0x5c90 */  48, 48, 48, 48, 48, 48, 48, 48, 32,107,101,114,110,101,108, 51,
/* 0x5ca0 */  50, 95,111,114,100,105,110, 97,108,115, 10, 48, 48, 48, 48, 48,
/* 0x5cb0 */  48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68,
/* 0x5cc0 */  42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 71,101,116, 80,114,
/* 0x5cd0 */ 111, 99, 65,100,100,114,101,115,115, 10, 48, 48, 48, 48, 48, 48,
/* 0x5ce0 */  48, 48, 32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,
/* 0x5cf0 */   9, 48, 48, 48, 48, 48, 48, 48, 48, 32, 69,120,105,116, 80,114,
/* 0x5d00 */ 111, 99,101,115,115, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x5d10 */  32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9, 48, 48, 48,
/* 0x5d20 */  48, 48, 48, 48, 48, 32,115,116, 97,114,116, 95,111,102, 95,114,
/* 0x5d30 */ 101,108,111, 99,115, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32,
/* 0x5d40 */  32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9, 48, 48, 48,
/* 0x5d50 */  48, 48, 48, 48, 48, 32,114,101,108,111, 99, 95,100,101,108,116,
/* 0x5d60 */  10, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32, 32, 32, 32, 32,
/* 0x5d70 */  32, 32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5d80 */  32, 86,105,114,116,117, 97,108, 80,114,111,116,101, 99,116, 10,
/* 0x5d90 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x5da0 */  32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x5db0 */ 118,112, 95, 98, 97,115,101, 10, 48, 48, 48, 48, 48, 48, 48, 48,
/* 0x5dc0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9, 48,
/* 0x5dd0 */  48, 48, 48, 48, 48, 48, 48, 32,118,112, 95,115,105,122,101, 10,
/* 0x5de0 */  48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x5df0 */  32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48, 48, 48, 48, 48, 32,
/* 0x5e00 */ 115,119,114,105, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32,
/* 0x5e10 */  32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48,
/* 0x5e20 */  48, 48, 48, 48, 32,116,108,115, 95,109,111,100,117,108,101, 95,
/* 0x5e30 */  98, 97,115,101, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32,
/* 0x5e40 */  32, 32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48,
/* 0x5e50 */  48, 48, 48, 48, 32,111,114,105,103,105,110, 97,108, 95,101,110,
/* 0x5e60 */ 116,114,121, 10, 48, 48, 48, 48, 48, 48, 48, 48, 32, 32, 32, 32,
/* 0x5e70 */  32, 32, 32, 32, 32, 42, 85, 78, 68, 42,  9, 48, 48, 48, 48, 48,
/* 0x5e80 */  48, 48, 48, 32,116,108,115, 95, 99, 97,108,108, 98, 97, 99,107,
/* 0x5e90 */ 115, 95,112,116,114, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79,
/* 0x5ea0 */  78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 80,
/* 0x5eb0 */  69, 73, 83, 68, 76, 76, 49, 93, 58, 10, 79, 70, 70, 83, 69, 84,
/* 0x5ec0 */  32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x5ed0 */  32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48,
/* 0x5ee0 */  48, 48, 55, 32, 82, 95, 51, 56, 54, 95, 80, 67, 51, 50, 32, 32,
/* 0x5ef0 */  32, 32, 32, 32, 32, 32, 80, 69, 77, 65, 73, 78, 50, 49, 10, 10,
/* 0x5f00 */  82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82,
/* 0x5f10 */  68, 83, 32, 70, 79, 82, 32, 91, 80, 69, 77, 65, 73, 78, 48, 49,
/* 0x5f20 */  93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69,
/* 0x5f30 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65,
/* 0x5f40 */  76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 50, 32, 82, 95, 51,
/* 0x5f50 */  56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,115,
/* 0x5f60 */ 116, 97,114,116, 95,111,102, 95, 99,111,109,112,114,101,115,115,
/* 0x5f70 */ 101,100, 10, 48, 48, 48, 48, 48, 48, 48, 56, 32, 82, 95, 51, 56,
/* 0x5f80 */  54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,115,116,
/* 0x5f90 */  97,114,116, 95,111,102, 95,117,110, 99,111,109,112,114,101,115,
/* 0x5fa0 */ 115,101,100, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32,
/* 0x5fb0 */  82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 80, 69, 73,
/* 0x5fc0 */  67, 79, 78, 83, 49, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32,
/* 0x5fd0 */  32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x5fe0 */  32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48,
/* 0x5ff0 */  51, 32, 82, 95, 51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32,
/* 0x6000 */  32, 32, 32, 32,105, 99,111,110, 95,111,102,102,115,101,116, 10,
/* 0x6010 */  10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79,
/* 0x6020 */  82, 68, 83, 32, 70, 79, 82, 32, 91, 80, 69, 73, 67, 79, 78, 83,
/* 0x6030 */  50, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80,
/* 0x6040 */  69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86,
/* 0x6050 */  65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 51, 32, 82, 95,
/* 0x6060 */  51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6070 */ 105, 99,111,110, 95,111,102,102,115,101,116, 10, 48, 48, 48, 48,
/* 0x6080 */  48, 48, 48, 55, 32, 82, 95, 51, 56, 54, 95, 49, 54, 32, 32, 32,
/* 0x6090 */  32, 32, 32, 32, 32, 32, 32,105, 99,111,110, 95,100,101,108,116,
/* 0x60a0 */  97, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69,
/* 0x60b0 */  67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 80, 69, 84, 76, 83,
/* 0x60c0 */  72, 65, 75, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84,
/* 0x60d0 */  89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x60e0 */  32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 50, 32,
/* 0x60f0 */  82, 95, 51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6100 */  32, 32,116,108,115, 95, 97,100,100,114,101,115,115, 10, 48, 48,
/* 0x6110 */  48, 48, 48, 48, 48, 54, 32, 82, 95, 51, 56, 54, 95, 51, 50, 32,
/* 0x6120 */  32, 32, 32, 32, 32, 32, 32, 32, 32,116,108,115, 95,118, 97,108,
/* 0x6130 */ 117,101, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82,
/* 0x6140 */  69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 66, 83,
/* 0x6150 */  77, 65, 49, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32,
/* 0x6160 */  84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6170 */  32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 49,
/* 0x6180 */  32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32,
/* 0x6190 */  32, 32, 32, 78, 50, 66, 68, 69, 67, 49, 48, 10, 10, 82, 69, 76,
/* 0x61a0 */  79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32,
/* 0x61b0 */  70, 79, 82, 32, 91, 78, 50, 66, 70, 65, 83, 49, 48, 93, 58, 10,
/* 0x61c0 */  79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32,
/* 0x61d0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69,
/* 0x61e0 */  10, 48, 48, 48, 48, 48, 48, 48, 49, 32, 82, 95, 51, 56, 54, 95,
/* 0x61f0 */  80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 66, 68,
/* 0x6200 */  69, 67, 49, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78,
/* 0x6210 */  32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50,
/* 0x6220 */  66, 83, 77, 65, 50, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32,
/* 0x6230 */  32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6240 */  32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48,
/* 0x6250 */  48, 49, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32,
/* 0x6260 */  32, 32, 32, 32, 32, 78, 50, 66, 83, 77, 65, 49, 48, 10, 10, 82,
/* 0x6270 */  69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68,
/* 0x6280 */  83, 32, 70, 79, 82, 32, 91, 78, 50, 66, 70, 65, 83, 50, 48, 93,
/* 0x6290 */  58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32,
/* 0x62a0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76,
/* 0x62b0 */  85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 49, 32, 82, 95, 51, 56,
/* 0x62c0 */  54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50,
/* 0x62d0 */  66, 70, 65, 83, 49, 49, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73,
/* 0x62e0 */  79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91,
/* 0x62f0 */  78, 50, 66, 83, 77, 65, 51, 48, 93, 58, 10, 79, 70, 70, 83, 69,
/* 0x6300 */  84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6310 */  32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48,
/* 0x6320 */  48, 48, 48, 99, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32,
/* 0x6330 */  32, 32, 32, 32, 32, 32, 32, 78, 50, 66, 68, 69, 67, 50, 48, 10,
/* 0x6340 */  10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79,
/* 0x6350 */  82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 66, 70, 65, 83, 51,
/* 0x6360 */  48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80,
/* 0x6370 */  69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86,
/* 0x6380 */  65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 51, 32, 82, 95,
/* 0x6390 */  51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x63a0 */  78, 50, 66, 68, 69, 67, 50, 48, 10, 48, 48, 48, 48, 48, 48, 48,
/* 0x63b0 */ 101, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32,
/* 0x63c0 */  32, 32, 32, 32, 78, 50, 66, 68, 69, 67, 50, 48, 10, 10, 82, 69,
/* 0x63d0 */  76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83,
/* 0x63e0 */  32, 70, 79, 82, 32, 91, 78, 50, 66, 68, 69, 67, 51, 48, 93, 58,
/* 0x63f0 */  10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32,
/* 0x6400 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85,
/* 0x6410 */  69, 10, 48, 48, 48, 48, 48, 48, 49, 49, 32, 82, 95, 51, 56, 54,
/* 0x6420 */  95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 66,
/* 0x6430 */  68, 69, 67, 54, 48, 10, 48, 48, 48, 48, 48, 48, 50,102, 32, 82,
/* 0x6440 */  95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6450 */  32, 78, 50, 66, 68, 69, 67, 53, 48, 10, 10, 82, 69, 76, 79, 67,
/* 0x6460 */  65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79,
/* 0x6470 */  82, 32, 91, 78, 50, 66, 83, 77, 65, 52, 48, 93, 58, 10, 79, 70,
/* 0x6480 */  70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32,
/* 0x6490 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48,
/* 0x64a0 */  48, 48, 48, 48, 48, 48, 99, 32, 82, 95, 51, 56, 54, 95, 80, 67,
/* 0x64b0 */  56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 66, 68, 69, 67,
/* 0x64c0 */  51, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82,
/* 0x64d0 */  69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 66, 70,
/* 0x64e0 */  65, 83, 52, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32,
/* 0x64f0 */  84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6500 */  32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 51,
/* 0x6510 */  32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32,
/* 0x6520 */  32, 32, 32, 78, 50, 66, 68, 69, 67, 51, 48, 10, 48, 48, 48, 48,
/* 0x6530 */  48, 48, 48,101, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32,
/* 0x6540 */  32, 32, 32, 32, 32, 32, 32, 78, 50, 66, 68, 69, 67, 51, 48, 10,
/* 0x6550 */  10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79,
/* 0x6560 */  82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 66, 83, 77, 65, 54,
/* 0x6570 */  48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80,
/* 0x6580 */  69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86,
/* 0x6590 */  65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 97, 32, 82, 95,
/* 0x65a0 */  51, 56, 54, 95, 80, 67, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x65b0 */  78, 50, 66, 68, 69, 67, 49, 48, 10, 10, 82, 69, 76, 79, 67, 65,
/* 0x65c0 */  84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82,
/* 0x65d0 */  32, 91, 78, 50, 66, 70, 65, 83, 54, 48, 93, 58, 10, 79, 70, 70,
/* 0x65e0 */  83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32,
/* 0x65f0 */  32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48,
/* 0x6600 */  48, 48, 48, 48, 48, 55, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56,
/* 0x6610 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 66, 70, 65, 83, 54,
/* 0x6620 */  49, 10, 48, 48, 48, 48, 48, 48, 49, 50, 32, 82, 95, 51, 56, 54,
/* 0x6630 */  95, 80, 67, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 66,
/* 0x6640 */  68, 69, 67, 49, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79,
/* 0x6650 */  78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78,
/* 0x6660 */  50, 66, 70, 65, 83, 54, 49, 93, 58, 10, 79, 70, 70, 83, 69, 84,
/* 0x6670 */  32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6680 */  32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48,
/* 0x6690 */  48, 49, 50, 32, 82, 95, 51, 56, 54, 95, 80, 67, 51, 50, 32, 32,
/* 0x66a0 */  32, 32, 32, 32, 32, 32, 78, 50, 66, 68, 69, 67, 49, 48, 10, 10,
/* 0x66b0 */  82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82,
/* 0x66c0 */  68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 68, 83, 77, 65, 49, 48,
/* 0x66d0 */  93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69,
/* 0x66e0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65,
/* 0x66f0 */  76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 49, 32, 82, 95, 51,
/* 0x6700 */  56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78,
/* 0x6710 */  50, 68, 68, 69, 67, 49, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84,
/* 0x6720 */  73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32,
/* 0x6730 */  91, 78, 50, 68, 70, 65, 83, 49, 48, 93, 58, 10, 79, 70, 70, 83,
/* 0x6740 */  69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32,
/* 0x6750 */  32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48,
/* 0x6760 */  48, 48, 48, 48, 49, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32,
/* 0x6770 */  32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 68, 68, 69, 67, 49, 48,
/* 0x6780 */  10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67,
/* 0x6790 */  79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 68, 83, 77, 65,
/* 0x67a0 */  50, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89,
/* 0x67b0 */  80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x67c0 */  86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 49, 32, 82,
/* 0x67d0 */  95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x67e0 */  32, 78, 50, 68, 83, 77, 65, 49, 48, 10, 10, 82, 69, 76, 79, 67,
/* 0x67f0 */  65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79,
/* 0x6800 */  82, 32, 91, 78, 50, 68, 70, 65, 83, 50, 48, 93, 58, 10, 79, 70,
/* 0x6810 */  70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32,
/* 0x6820 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48,
/* 0x6830 */  48, 48, 48, 48, 48, 48, 49, 32, 82, 95, 51, 56, 54, 95, 80, 67,
/* 0x6840 */  56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 68, 70, 65, 83,
/* 0x6850 */  49, 49, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82,
/* 0x6860 */  69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 68, 83,
/* 0x6870 */  77, 65, 51, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32,
/* 0x6880 */  84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6890 */  32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 99,
/* 0x68a0 */  32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32,
/* 0x68b0 */  32, 32, 32, 78, 50, 68, 68, 69, 67, 51, 48, 10, 10, 82, 69, 76,
/* 0x68c0 */  79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32,
/* 0x68d0 */  70, 79, 82, 32, 91, 78, 50, 68, 70, 65, 83, 51, 48, 93, 58, 10,
/* 0x68e0 */  79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32,
/* 0x68f0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69,
/* 0x6900 */  10, 48, 48, 48, 48, 48, 48, 48, 53, 32, 82, 95, 51, 56, 54, 95,
/* 0x6910 */  80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 68, 68,
/* 0x6920 */  69, 67, 51, 48, 10, 48, 48, 48, 48, 48, 48, 48,101, 32, 82, 95,
/* 0x6930 */  51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6940 */  78, 50, 68, 68, 69, 67, 51, 48, 10, 10, 82, 69, 76, 79, 67, 65,
/* 0x6950 */  84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82,
/* 0x6960 */  32, 91, 78, 50, 68, 68, 69, 67, 51, 48, 93, 58, 10, 79, 70, 70,
/* 0x6970 */  83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32,
/* 0x6980 */  32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48,
/* 0x6990 */  48, 48, 48, 48, 48,102, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56,
/* 0x69a0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 68, 68, 69, 67, 50,
/* 0x69b0 */  48, 10, 48, 48, 48, 48, 48, 48, 50, 49, 32, 82, 95, 51, 56, 54,
/* 0x69c0 */  95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 68,
/* 0x69d0 */  68, 69, 67, 54, 48, 10, 48, 48, 48, 48, 48, 48, 52, 51, 32, 82,
/* 0x69e0 */  95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x69f0 */  32, 78, 50, 68, 68, 69, 67, 53, 48, 10, 10, 82, 69, 76, 79, 67,
/* 0x6a00 */  65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79,
/* 0x6a10 */  82, 32, 91, 78, 50, 68, 83, 77, 65, 52, 48, 93, 58, 10, 79, 70,
/* 0x6a20 */  70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32,
/* 0x6a30 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48,
/* 0x6a40 */  48, 48, 48, 48, 48, 48, 99, 32, 82, 95, 51, 56, 54, 95, 80, 67,
/* 0x6a50 */  56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 68, 68, 69, 67,
/* 0x6a60 */  51, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82,
/* 0x6a70 */  69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 68, 70,
/* 0x6a80 */  65, 83, 52, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32,
/* 0x6a90 */  84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6aa0 */  32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 51,
/* 0x6ab0 */  32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32,
/* 0x6ac0 */  32, 32, 32, 78, 50, 68, 68, 69, 67, 51, 48, 10, 48, 48, 48, 48,
/* 0x6ad0 */  48, 48, 48,101, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32,
/* 0x6ae0 */  32, 32, 32, 32, 32, 32, 32, 78, 50, 68, 68, 69, 67, 51, 48, 10,
/* 0x6af0 */  10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79,
/* 0x6b00 */  82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 68, 83, 77, 65, 54,
/* 0x6b10 */  48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80,
/* 0x6b20 */  69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86,
/* 0x6b30 */  65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 97, 32, 82, 95,
/* 0x6b40 */  51, 56, 54, 95, 80, 67, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6b50 */  78, 50, 68, 68, 69, 67, 49, 48, 10, 10, 82, 69, 76, 79, 67, 65,
/* 0x6b60 */  84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82,
/* 0x6b70 */  32, 91, 78, 50, 68, 70, 65, 83, 54, 48, 93, 58, 10, 79, 70, 70,
/* 0x6b80 */  83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32,
/* 0x6b90 */  32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48,
/* 0x6ba0 */  48, 48, 48, 48, 48, 55, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56,
/* 0x6bb0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 68, 70, 65, 83, 54,
/* 0x6bc0 */  49, 10, 48, 48, 48, 48, 48, 48, 49, 50, 32, 82, 95, 51, 56, 54,
/* 0x6bd0 */  95, 80, 67, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 68,
/* 0x6be0 */  68, 69, 67, 49, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79,
/* 0x6bf0 */  78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78,
/* 0x6c00 */  50, 68, 70, 65, 83, 54, 49, 93, 58, 10, 79, 70, 70, 83, 69, 84,
/* 0x6c10 */  32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6c20 */  32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48,
/* 0x6c30 */  48, 49, 50, 32, 82, 95, 51, 56, 54, 95, 80, 67, 51, 50, 32, 32,
/* 0x6c40 */  32, 32, 32, 32, 32, 32, 78, 50, 68, 68, 69, 67, 49, 48, 10, 10,
/* 0x6c50 */  82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82,
/* 0x6c60 */  68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 69, 83, 77, 65, 49, 48,
/* 0x6c70 */  93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69,
/* 0x6c80 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65,
/* 0x6c90 */  76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 49, 32, 82, 95, 51,
/* 0x6ca0 */  56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78,
/* 0x6cb0 */  50, 69, 68, 69, 67, 49, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84,
/* 0x6cc0 */  73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32,
/* 0x6cd0 */  91, 78, 50, 69, 70, 65, 83, 49, 48, 93, 58, 10, 79, 70, 70, 83,
/* 0x6ce0 */  69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32,
/* 0x6cf0 */  32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48,
/* 0x6d00 */  48, 48, 48, 48, 49, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32,
/* 0x6d10 */  32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 69, 68, 69, 67, 49, 48,
/* 0x6d20 */  10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67,
/* 0x6d30 */  79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 69, 83, 77, 65,
/* 0x6d40 */  50, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89,
/* 0x6d50 */  80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6d60 */  86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 49, 32, 82,
/* 0x6d70 */  95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6d80 */  32, 78, 50, 69, 83, 77, 65, 49, 48, 10, 10, 82, 69, 76, 79, 67,
/* 0x6d90 */  65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79,
/* 0x6da0 */  82, 32, 91, 78, 50, 69, 70, 65, 83, 50, 48, 93, 58, 10, 79, 70,
/* 0x6db0 */  70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32,
/* 0x6dc0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48,
/* 0x6dd0 */  48, 48, 48, 48, 48, 48, 49, 32, 82, 95, 51, 56, 54, 95, 80, 67,
/* 0x6de0 */  56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 69, 70, 65, 83,
/* 0x6df0 */  49, 49, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82,
/* 0x6e00 */  69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 69, 83,
/* 0x6e10 */  77, 65, 51, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32,
/* 0x6e20 */  84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6e30 */  32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 99,
/* 0x6e40 */  32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32,
/* 0x6e50 */  32, 32, 32, 78, 50, 69, 68, 69, 67, 51, 48, 10, 10, 82, 69, 76,
/* 0x6e60 */  79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32,
/* 0x6e70 */  70, 79, 82, 32, 91, 78, 50, 69, 70, 65, 83, 51, 48, 93, 58, 10,
/* 0x6e80 */  79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32,
/* 0x6e90 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69,
/* 0x6ea0 */  10, 48, 48, 48, 48, 48, 48, 48, 53, 32, 82, 95, 51, 56, 54, 95,
/* 0x6eb0 */  80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 69, 68,
/* 0x6ec0 */  69, 67, 51, 48, 10, 48, 48, 48, 48, 48, 48, 48,101, 32, 82, 95,
/* 0x6ed0 */  51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6ee0 */  78, 50, 69, 68, 69, 67, 51, 48, 10, 10, 82, 69, 76, 79, 67, 65,
/* 0x6ef0 */  84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82,
/* 0x6f00 */  32, 91, 78, 50, 69, 68, 69, 67, 51, 48, 93, 58, 10, 79, 70, 70,
/* 0x6f10 */  83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32,
/* 0x6f20 */  32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48,
/* 0x6f30 */  48, 48, 48, 48, 48,102, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56,
/* 0x6f40 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 69, 68, 69, 67, 50,
/* 0x6f50 */  48, 10, 48, 48, 48, 48, 48, 48, 49,101, 32, 82, 95, 51, 56, 54,
/* 0x6f60 */  95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 69,
/* 0x6f70 */  68, 69, 67, 53, 48, 10, 48, 48, 48, 48, 48, 48, 51, 48, 32, 82,
/* 0x6f80 */  95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x6f90 */  32, 78, 50, 69, 68, 69, 67, 54, 48, 10, 10, 82, 69, 76, 79, 67,
/* 0x6fa0 */  65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79,
/* 0x6fb0 */  82, 32, 91, 78, 50, 69, 83, 77, 65, 52, 48, 93, 58, 10, 79, 70,
/* 0x6fc0 */  70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32,
/* 0x6fd0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48,
/* 0x6fe0 */  48, 48, 48, 48, 48, 48, 99, 32, 82, 95, 51, 56, 54, 95, 80, 67,
/* 0x6ff0 */  56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 69, 68, 69, 67,
/* 0x7000 */  51, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82,
/* 0x7010 */  69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 69, 70,
/* 0x7020 */  65, 83, 52, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32,
/* 0x7030 */  84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7040 */  32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 51,
/* 0x7050 */  32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32,
/* 0x7060 */  32, 32, 32, 78, 50, 69, 68, 69, 67, 51, 48, 10, 48, 48, 48, 48,
/* 0x7070 */  48, 48, 48,101, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32,
/* 0x7080 */  32, 32, 32, 32, 32, 32, 32, 78, 50, 69, 68, 69, 67, 51, 48, 10,
/* 0x7090 */  10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79,
/* 0x70a0 */  82, 68, 83, 32, 70, 79, 82, 32, 91, 78, 50, 69, 83, 77, 65, 54,
/* 0x70b0 */  48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80,
/* 0x70c0 */  69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86,
/* 0x70d0 */  65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 97, 32, 82, 95,
/* 0x70e0 */  51, 56, 54, 95, 80, 67, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x70f0 */  78, 50, 69, 68, 69, 67, 49, 48, 10, 10, 82, 69, 76, 79, 67, 65,
/* 0x7100 */  84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82,
/* 0x7110 */  32, 91, 78, 50, 69, 70, 65, 83, 54, 48, 93, 58, 10, 79, 70, 70,
/* 0x7120 */  83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32,
/* 0x7130 */  32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48,
/* 0x7140 */  48, 48, 48, 48, 48, 55, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56,
/* 0x7150 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 69, 70, 65, 83, 54,
/* 0x7160 */  49, 10, 48, 48, 48, 48, 48, 48, 49, 50, 32, 82, 95, 51, 56, 54,
/* 0x7170 */  95, 80, 67, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 78, 50, 69,
/* 0x7180 */  68, 69, 67, 49, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79,
/* 0x7190 */  78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 78,
/* 0x71a0 */  50, 69, 70, 65, 83, 54, 49, 93, 58, 10, 79, 70, 70, 83, 69, 84,
/* 0x71b0 */  32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x71c0 */  32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48,
/* 0x71d0 */  48, 49, 50, 32, 82, 95, 51, 56, 54, 95, 80, 67, 51, 50, 32, 32,
/* 0x71e0 */  32, 32, 32, 32, 32, 32, 78, 50, 69, 68, 69, 67, 49, 48, 10, 10,
/* 0x71f0 */  82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82,
/* 0x7200 */  68, 83, 32, 70, 79, 82, 32, 91, 76, 90, 77, 65, 95, 68, 69, 67,
/* 0x7210 */  48, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89,
/* 0x7220 */  80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7230 */  86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 53, 32, 82,
/* 0x7240 */  95, 51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7250 */  32,108,122,109, 97, 95,115,116, 97, 99,107, 95, 97,100,106,117,
/* 0x7260 */ 115,116, 10, 48, 48, 48, 48, 48, 48, 49, 52, 32, 82, 95, 51, 56,
/* 0x7270 */  54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,108,122,
/* 0x7280 */ 109, 97, 95,117, 95,108,101,110, 10, 48, 48, 48, 48, 48, 48, 49,
/* 0x7290 */ 101, 32, 82, 95, 51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32,
/* 0x72a0 */  32, 32, 32, 32,108,122,109, 97, 95, 99, 95,108,101,110, 10, 48,
/* 0x72b0 */  48, 48, 48, 48, 48, 50, 97, 32, 82, 95, 51, 56, 54, 95, 51, 50,
/* 0x72c0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32,108,122,109, 97, 95,112,
/* 0x72d0 */ 114,111,112,101,114,116,105,101,115, 10, 10, 82, 69, 76, 79, 67,
/* 0x72e0 */  65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79,
/* 0x72f0 */  82, 32, 91, 80, 69, 67, 84, 84, 80, 79, 83, 93, 58, 10, 79, 70,
/* 0x7300 */  70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32,
/* 0x7310 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48,
/* 0x7320 */  48, 48, 48, 48, 48, 48, 50, 32, 82, 95, 51, 56, 54, 95, 51, 50,
/* 0x7330 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32,102,105,108,116,101,114,
/* 0x7340 */  95, 98,117,102,102,101,114, 95,115,116, 97,114,116, 10, 10, 82,
/* 0x7350 */  69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68,
/* 0x7360 */  83, 32, 70, 79, 82, 32, 91, 67, 65, 76, 76, 84, 82, 48, 48, 93,
/* 0x7370 */  58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32,
/* 0x7380 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76,
/* 0x7390 */  85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 49, 32, 82, 95, 51, 56,
/* 0x73a0 */  54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,102,105,
/* 0x73b0 */ 108,116,101,114, 95,108,101,110,103,116,104, 10, 10, 82, 69, 76,
/* 0x73c0 */  79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32,
/* 0x73d0 */  70, 79, 82, 32, 91, 67, 84, 67, 76, 69, 86, 69, 49, 93, 58, 10,
/* 0x73e0 */  79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32,
/* 0x73f0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69,
/* 0x7400 */  10, 48, 48, 48, 48, 48, 48, 48, 50, 32, 82, 95, 51, 56, 54, 95,
/* 0x7410 */  56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,102,105,108,116,
/* 0x7420 */ 101,114, 95, 99,116,111, 10, 48, 48, 48, 48, 48, 48, 48, 52, 32,
/* 0x7430 */  82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32,
/* 0x7440 */  32, 32, 67, 65, 76, 76, 84, 82, 48, 48, 10, 10, 82, 69, 76, 79,
/* 0x7450 */  67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70,
/* 0x7460 */  79, 82, 32, 91, 67, 65, 76, 76, 84, 82, 48, 50, 93, 58, 10, 79,
/* 0x7470 */  70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32,
/* 0x7480 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10,
/* 0x7490 */  48, 48, 48, 48, 48, 48, 48,102, 32, 82, 95, 51, 56, 54, 95, 80,
/* 0x74a0 */  67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 67, 65, 76, 76, 84,
/* 0x74b0 */  82, 48, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32,
/* 0x74c0 */  82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 67, 65, 76,
/* 0x74d0 */  76, 84, 82, 49, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32,
/* 0x74e0 */  32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x74f0 */  32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48,
/* 0x7500 */  49, 32, 82, 95, 51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32,
/* 0x7510 */  32, 32, 32, 32,102,105,108,116,101,114, 95,108,101,110,103,116,
/* 0x7520 */ 104, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69,
/* 0x7530 */  67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 67, 65, 76, 76, 84,
/* 0x7540 */  82, 49, 49, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84,
/* 0x7550 */  89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7560 */  32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 51, 32,
/* 0x7570 */  82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32,
/* 0x7580 */  32, 32, 67, 65, 76, 76, 84, 82, 49, 51, 10, 10, 82, 69, 76, 79,
/* 0x7590 */  67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70,
/* 0x75a0 */  79, 82, 32, 91, 67, 84, 67, 76, 69, 86, 69, 50, 93, 58, 10, 79,
/* 0x75b0 */  70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32,
/* 0x75c0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10,
/* 0x75d0 */  48, 48, 48, 48, 48, 48, 48, 50, 32, 82, 95, 51, 56, 54, 95, 56,
/* 0x75e0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,102,105,108,116,101,
/* 0x75f0 */ 114, 95, 99,116,111, 10, 48, 48, 48, 48, 48, 48, 48, 52, 32, 82,
/* 0x7600 */  95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7610 */  32, 67, 65, 76, 76, 84, 82, 49, 49, 10, 10, 82, 69, 76, 79, 67,
/* 0x7620 */  65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79,
/* 0x7630 */  82, 32, 91, 67, 65, 76, 76, 84, 82, 49, 51, 93, 58, 10, 79, 70,
/* 0x7640 */  70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32,
/* 0x7650 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48,
/* 0x7660 */  48, 48, 48, 48, 48, 48, 54, 32, 82, 95, 51, 56, 54, 95, 80, 67,
/* 0x7670 */  56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 67, 65, 76, 76, 84, 82,
/* 0x7680 */  49, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82,
/* 0x7690 */  69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 99,116,111,107,
/* 0x76a0 */  51, 50, 46, 48, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32,
/* 0x76b0 */  32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x76c0 */  32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48,
/* 0x76d0 */  49, 32, 82, 95, 51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32,
/* 0x76e0 */  32, 32, 32, 32,102,105,108,116,101,114, 95,108,101,110,103,116,
/* 0x76f0 */ 104, 10, 48, 48, 48, 48, 48, 48, 48, 54, 32, 82, 95, 51, 56, 54,
/* 0x7700 */  95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 99,116,111,
/* 0x7710 */ 107, 51, 50, 46, 50, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73,
/* 0x7720 */  79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91,
/* 0x7730 */  99,116,111,107, 51, 50, 46, 49, 48, 93, 58, 10, 79, 70, 70, 83,
/* 0x7740 */  69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32,
/* 0x7750 */  32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48,
/* 0x7760 */  48, 48, 48, 48,100, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32,
/* 0x7770 */  32, 32, 32, 32, 32, 32, 32, 32, 99,116,111,107, 51, 50, 46, 50,
/* 0x7780 */  48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69,
/* 0x7790 */  67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 99,116,111,107, 51,
/* 0x77a0 */  50, 46, 50, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32,
/* 0x77b0 */  84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x77c0 */  32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 53,
/* 0x77d0 */  32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32,
/* 0x77e0 */  32, 32, 32, 99,116,111,107, 51, 50, 46, 52, 48, 10, 48, 48, 48,
/* 0x77f0 */  48, 48, 48, 48, 56, 32, 82, 95, 51, 56, 54, 95, 56, 32, 32, 32,
/* 0x7800 */  32, 32, 32, 32, 32, 32, 32, 32,102,105,108,116,101,114, 95, 99,
/* 0x7810 */ 116,111, 10, 48, 48, 48, 48, 48, 48, 48, 97, 32, 82, 95, 51, 56,
/* 0x7820 */  54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 99,116,
/* 0x7830 */ 111,107, 51, 50, 46, 52, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84,
/* 0x7840 */  73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32,
/* 0x7850 */  91, 99,116,111,107, 51, 50, 46, 51, 48, 93, 58, 10, 79, 70, 70,
/* 0x7860 */  83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32,
/* 0x7870 */  32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48,
/* 0x7880 */  48, 48, 48, 48, 48, 54, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56,
/* 0x7890 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 99,116,111,107, 51, 50, 46,
/* 0x78a0 */  49, 48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82,
/* 0x78b0 */  69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 99,116,111,107,
/* 0x78c0 */  51, 50, 46, 52, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32,
/* 0x78d0 */  32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x78e0 */  32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48,
/* 0x78f0 */  52, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32,
/* 0x7900 */  32, 32, 32, 32, 99,116,111,107, 51, 50, 46, 48, 48, 10, 10, 82,
/* 0x7910 */  69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68,
/* 0x7920 */  83, 32, 70, 79, 82, 32, 91, 80, 69, 73, 77, 80, 79, 82, 84, 93,
/* 0x7930 */  58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32,
/* 0x7940 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76,
/* 0x7950 */  85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 50, 32, 82, 95, 51, 56,
/* 0x7960 */  54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 99,111,
/* 0x7970 */ 109,112,114,101,115,115,101,100, 95,105,109,112,111,114,116,115,
/* 0x7980 */  10, 48, 48, 48, 48, 48, 48, 48, 98, 32, 82, 95, 51, 56, 54, 95,
/* 0x7990 */  80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 80, 69, 73, 77,
/* 0x79a0 */  68, 79, 78, 69, 10, 48, 48, 48, 48, 48, 48, 49, 50, 32, 82, 95,
/* 0x79b0 */  51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x79c0 */ 115,116, 97,114,116, 95,111,102, 95,105,109,112,111,114,116,115,
/* 0x79d0 */  10, 48, 48, 48, 48, 48, 48, 49,101, 32, 82, 95, 51, 56, 54, 95,
/* 0x79e0 */  51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 76,111, 97,100,
/* 0x79f0 */  76,105, 98,114, 97,114,121, 65, 10, 10, 82, 69, 76, 79, 67, 65,
/* 0x7a00 */  84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82,
/* 0x7a10 */  32, 91, 80, 69, 73, 66, 89, 79, 82, 68, 93, 58, 10, 79, 70, 70,
/* 0x7a20 */  83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32,
/* 0x7a30 */  32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48,
/* 0x7a40 */  48, 48, 48, 48, 48, 49, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56,
/* 0x7a50 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 80, 69, 73, 77, 79, 82, 68,
/* 0x7a60 */  49, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69,
/* 0x7a70 */  67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 80, 69, 75, 51, 50,
/* 0x7a80 */  79, 82, 68, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84,
/* 0x7a90 */  89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7aa0 */  32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 97, 32,
/* 0x7ab0 */  82, 95, 51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7ac0 */  32, 32,107,101,114,110,101,108, 51, 50, 95,111,114,100,105,110,
/* 0x7ad0 */  97,108,115, 10, 48, 48, 48, 48, 48, 48, 48,102, 32, 82, 95, 51,
/* 0x7ae0 */  56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32, 80,
/* 0x7af0 */  69, 73, 77, 80, 79, 82, 50, 10, 10, 82, 69, 76, 79, 67, 65, 84,
/* 0x7b00 */  73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32,
/* 0x7b10 */  91, 80, 69, 73, 77, 80, 79, 82, 50, 93, 58, 10, 79, 70, 70, 83,
/* 0x7b20 */  69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32,
/* 0x7b30 */  32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48,
/* 0x7b40 */  48, 48, 48, 48, 55, 32, 82, 95, 51, 56, 54, 95, 51, 50, 32, 32,
/* 0x7b50 */  32, 32, 32, 32, 32, 32, 32, 32, 71,101,116, 80,114,111, 99, 65,
/* 0x7b60 */ 100,100,114,101,115,115, 10, 48, 48, 48, 48, 48, 48, 49, 53, 32,
/* 0x7b70 */  82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32,
/* 0x7b80 */  32, 32, 80, 69, 73, 77, 80, 79, 82, 84, 10, 10, 82, 69, 76, 79,
/* 0x7b90 */  67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70,
/* 0x7ba0 */  79, 82, 32, 91, 80, 69, 73, 69, 82, 69, 88, 69, 93, 58, 10, 79,
/* 0x7bb0 */  70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32,
/* 0x7bc0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10,
/* 0x7bd0 */  48, 48, 48, 48, 48, 48, 48, 50, 32, 82, 95, 51, 56, 54, 95, 51,
/* 0x7be0 */  50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 69,120,105,116, 80,
/* 0x7bf0 */ 114,111, 99,101,115,115, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73,
/* 0x7c00 */  79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91,
/* 0x7c10 */  80, 69, 82, 69, 76, 79, 67, 49, 93, 58, 10, 79, 70, 70, 83, 69,
/* 0x7c20 */  84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7c30 */  32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48,
/* 0x7c40 */  48, 48, 48, 50, 32, 82, 95, 51, 56, 54, 95, 51, 50, 32, 32, 32,
/* 0x7c50 */  32, 32, 32, 32, 32, 32, 32,115,116, 97,114,116, 95,111,102, 95,
/* 0x7c60 */ 114,101,108,111, 99,115, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73,
/* 0x7c70 */  79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91,
/* 0x7c80 */  82, 69, 76, 79, 67, 51, 50, 48, 93, 58, 10, 79, 70, 70, 83, 69,
/* 0x7c90 */  84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7ca0 */  32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48,
/* 0x7cb0 */  48, 48, 48, 56, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56, 32, 32,
/* 0x7cc0 */  32, 32, 32, 32, 32, 32, 32, 82, 69, 76, 79, 67, 51, 50, 74, 10,
/* 0x7cd0 */  10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79,
/* 0x7ce0 */  82, 68, 83, 32, 70, 79, 82, 32, 91, 82, 69, 76, 51, 50, 66, 73,
/* 0x7cf0 */  71, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80,
/* 0x7d00 */  69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86,
/* 0x7d10 */  65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 51, 32, 82, 95,
/* 0x7d20 */  51, 56, 54, 95, 80, 67, 56, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7d30 */  82, 69, 76, 79, 67, 51, 50, 48, 10, 10, 82, 69, 76, 79, 67, 65,
/* 0x7d40 */  84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83, 32, 70, 79, 82,
/* 0x7d50 */  32, 91, 82, 69, 76, 79, 67, 51, 50, 74, 93, 58, 10, 79, 70, 70,
/* 0x7d60 */  83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32, 32, 32, 32, 32,
/* 0x7d70 */  32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85, 69, 10, 48, 48,
/* 0x7d80 */  48, 48, 48, 48, 48, 49, 32, 82, 95, 51, 56, 54, 95, 80, 67, 56,
/* 0x7d90 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 82, 69, 76, 79, 67, 51, 50,
/* 0x7da0 */  48, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69,
/* 0x7db0 */  67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 80, 69, 82, 76, 79,
/* 0x7dc0 */  72, 73, 48, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84,
/* 0x7dd0 */  89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7de0 */  32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 52, 32,
/* 0x7df0 */  82, 95, 51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7e00 */  32, 32,114,101,108,111, 99, 95,100,101,108,116, 10, 10, 82, 69,
/* 0x7e10 */  76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69, 67, 79, 82, 68, 83,
/* 0x7e20 */  32, 70, 79, 82, 32, 91, 80, 69, 68, 69, 80, 72, 65, 75, 93, 58,
/* 0x7e30 */  10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80, 69, 32, 32,
/* 0x7e40 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86, 65, 76, 85,
/* 0x7e50 */  69, 10, 48, 48, 48, 48, 48, 48, 48, 50, 32, 82, 95, 51, 56, 54,
/* 0x7e60 */  95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86,105,114,
/* 0x7e70 */ 116,117, 97,108, 80,114,111,116,101, 99,116, 10, 48, 48, 48, 48,
/* 0x7e80 */  48, 48, 48, 56, 32, 82, 95, 51, 56, 54, 95, 51, 50, 32, 32, 32,
/* 0x7e90 */  32, 32, 32, 32, 32, 32, 32,118,112, 95, 98, 97,115,101, 10, 48,
/* 0x7ea0 */  48, 48, 48, 48, 48, 48,100, 32, 82, 95, 51, 56, 54, 95, 51, 50,
/* 0x7eb0 */  32, 32, 32, 32, 32, 32, 32, 32, 32, 32,118,112, 95,115,105,122,
/* 0x7ec0 */ 101, 10, 48, 48, 48, 48, 48, 48, 49, 98, 32, 82, 95, 51, 56, 54,
/* 0x7ed0 */  95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,115,119,114,
/* 0x7ee0 */ 105, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69,
/* 0x7ef0 */  67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 80, 69, 84, 76, 83,
/* 0x7f00 */  67, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89, 80,
/* 0x7f10 */  69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 86,
/* 0x7f20 */  65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 50, 32, 82, 95,
/* 0x7f30 */  51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7f40 */ 116,108,115, 95,109,111,100,117,108,101, 95, 98, 97,115,101, 10,
/* 0x7f50 */  48, 48, 48, 48, 48, 48, 48, 56, 32, 82, 95, 51, 56, 54, 95, 51,
/* 0x7f60 */  50, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 80, 69, 84, 76, 83,
/* 0x7f70 */  67, 50, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82,
/* 0x7f80 */  69, 67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 80, 69, 68, 79,
/* 0x7f90 */  74, 85, 77, 80, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32,
/* 0x7fa0 */  84, 89, 80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x7fb0 */  32, 32, 86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 49,
/* 0x7fc0 */  32, 82, 95, 51, 56, 54, 95, 80, 67, 51, 50, 32, 32, 32, 32, 32,
/* 0x7fd0 */  32, 32, 32,111,114,105,103,105,110, 97,108, 95,101,110,116,114,
/* 0x7fe0 */ 121, 10, 10, 82, 69, 76, 79, 67, 65, 84, 73, 79, 78, 32, 82, 69,
/* 0x7ff0 */  67, 79, 82, 68, 83, 32, 70, 79, 82, 32, 91, 80, 69, 84, 76, 83,
/* 0x8000 */  67, 50, 93, 58, 10, 79, 70, 70, 83, 69, 84, 32, 32, 32, 84, 89,
/* 0x8010 */  80, 69, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x8020 */  86, 65, 76, 85, 69, 10, 48, 48, 48, 48, 48, 48, 48, 52, 32, 82,
/* 0x8030 */  95, 51, 56, 54, 95, 51, 50, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 0x8040 */  32,116,108,115, 95, 99, 97,108,108, 98, 97, 99,107,115, 95,112,
/* 0x8050 */ 116,114, 10
};
