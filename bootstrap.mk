#!/usr/bin/make -f
### boostrap.mk (for sdr-rx)
### Copyright 2017 Mac Radigan
### All Rights Reserved

.PHONY: bootstrap update packages-apt install init
.DEFAULT_GOAL := bootstrap

bootstrap:
	#$(MAKE) -C ./submodules
	autoreconf --force --install

install: bootstrap
	./configure --prefix=/opt/local && make && sudo make install

init:
	mkdir -p ./mod

packages-apt:
	sudo apt-get install -y autoconf
	sudo apt-get install -y automake
	sudo apt-get install -y libtool
	sudo apt-get install -y build-essential
	sudo apt-get install -y gfortran

### *EOF*
