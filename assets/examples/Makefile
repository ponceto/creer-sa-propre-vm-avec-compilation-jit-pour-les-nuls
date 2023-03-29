#
# Makefile - Copyright (c) 2023 - Olivier Poncet
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

# ----------------------------------------------------------------------------
# global environment
# ----------------------------------------------------------------------------

FLAGS    = -g -Og -Wall
CC       = gcc
CFLAGS   = -std=c99 $(FLAGS)
CXX      = g++
CXXFLAGS = -std=c++14 $(FLAGS)
CPPFLAGS = -I.
LD       = g++
LDFLAGS  = -L.
CP       = cp
CPFLAGS  = -f
RM       = rm
RMFLAGS  = -f

# ----------------------------------------------------------------------------
# default rules
# ----------------------------------------------------------------------------

.c.o :
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $<

.cc.o :
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) $<

# ----------------------------------------------------------------------------
# global targets
# ----------------------------------------------------------------------------

all : build

build : build_example1 build_example2
	@echo "=== $@ ok ==="

clean : clean_example1 clean_example2
	@echo "=== $@ ok ==="

# ----------------------------------------------------------------------------
# example1
# ----------------------------------------------------------------------------

EXAMPLE1_PROG = example1.bin
EXAMPLE1_SRCS = example1.cc
EXAMPLE1_HDRS = example1.h
EXAMPLE1_OBJS = example1.o
EXAMPLE1_LIBS = -lpthread -lm

build_example1 : $(EXAMPLE1_PROG)

clean_example1 :
	$(RM) $(RMFLAGS) $(EXAMPLE1_PROG) $(EXAMPLE1_OBJS)

$(EXAMPLE1_PROG) : $(EXAMPLE1_OBJS)
	$(LD) $(LDFLAGS) -o $(EXAMPLE1_PROG) $(EXAMPLE1_OBJS) $(EXAMPLE1_LIBS)

example1.o : example1.cc $(EXAMPLE1_HDRS)

# ----------------------------------------------------------------------------
# example2
# ----------------------------------------------------------------------------

EXAMPLE2_PROG = example2.bin
EXAMPLE2_SRCS = example2.cc
EXAMPLE2_HDRS = example2.h
EXAMPLE2_OBJS = example2.o
EXAMPLE2_LIBS = -lpthread -lm

build_example2 : $(EXAMPLE2_PROG)

clean_example2 :
	$(RM) $(RMFLAGS) $(EXAMPLE2_PROG) $(EXAMPLE2_OBJS)

$(EXAMPLE2_PROG) : $(EXAMPLE2_OBJS)
	$(LD) $(LDFLAGS) -o $(EXAMPLE2_PROG) $(EXAMPLE2_OBJS) $(EXAMPLE2_LIBS)

example2.o : example2.cc $(EXAMPLE2_HDRS)

# ----------------------------------------------------------------------------
# End-Of-File
# ----------------------------------------------------------------------------
