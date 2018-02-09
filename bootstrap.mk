#!/usr/bin/make -f
### boostrap.mk (for sdr-rx)
### Copyright 2017 Mac Radigan
### All Rights Reserved

.PHONY: bootstrap update packages-apt install init
.DEFAULT_GOAL := bootstrap

bootstrap:
	autoreconf --force --install

install: bootstrap
	./configure --prefix=/opt/local && make && sudo make install

init:
	mkdir -p ./mod

format:
	cxx-format -d .

packages-apt:
	sudo apt-get install -y autoconf
	sudo apt-get install -y automake
	sudo apt-get install -y libtool
	sudo apt-get install -y build-essential
	sudo apt-get install -y gfortran
	sudo apt-get install -y swig

### *EOF*
