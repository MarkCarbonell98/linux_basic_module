obj-m := ultra_pikachu_modul.o # -m steht für Modul, .o für den Object File dass wir als Modul Kompillieren wollen, bevor der linker es als ein Executable aufbaut.

# all:
# 	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

# clean:
# 	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

#unseres modul sollte in der Kontext von der Kernel aufgebaut sein, wofür wir das Modul geschrieben haben, deswegen Invokieren wir das Build system des Kernels, damit unseres modul dahin Kompiliert wird mittel die -C Flag und der Path zum Kernel Module Build Verzeichnis

# unser Kernel Version ist unter uname -r sichtbar

# der M= Option bewegt der Oberste Makefile von der kernel bis zum PWD, und führt den da aus, also, kompiliert unser Module, mit der Makefile des Kernel Module library

# modules ist der Target dass wir aufbauen wollen, unsere obj-m files ins Makefile, andere beispiele sind obj-y, obj-c, u,a

