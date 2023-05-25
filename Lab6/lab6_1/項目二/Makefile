obj-m := demo.o

	#kernel_DIR := /usr/src/linux-headers-4.15.0-39-generic #for linux
	PWD := $(shell pwd)
	kernel_DIR := /usr/src/linux-headers-4.9.201-tegra-ubuntu18.04_aarch64/kernel-4.9/ #for tx2

all:
	#make -C $(kernel_DIR) M=$(PWD)
	make -C $(kernel_DIR) SUBDIRS=$(PWD)	
clean:
	rm *.o *.ko *.mod.c
.PHONY:
	clean

