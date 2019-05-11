/*
 * ultra_pikachu_modul.c --- Das einfachste Modul
 */

#include <linux/kernel.h> //Notwending für KERN_INFO, KERN_ALERT... u.a.
#include <linux/module.h> // Notwendig für alle Module
#include <linux/init.h> // Notwendig für alle andere Macros

MODULE_LICENSE("GLP");

MODULE_AUTHOR("Marcos Carbonell");
MODULE_DESCRIPTION(" Das einfachste Linux Modul ");
MODULE_VERSION("0.1");

//kernel macros __init und __exit sagen der kernel dass diese Initializationsfunktionen sind

static int __init ultra_pikachu_modul_init(void) { // init Funktionen sollten statisch sein!, da sie nur in dieser Datei existieren sollten

    //tue irgendwas
    //printK() ist eine Spezielle art von printf() Funktion dass nur von dem Kernel ausgefuhrt werden kann
    printk(KERN_ALERT "Hallo aus ultra_pikachu_modul! \n"); // KERN_ALERT erlaubt dass Nachricht ins /var/log/syslog erscheint

    // falls return != 0 dann konnte das Modul ins Kernel nicht geladen werden!
    return 0;
}

static void __exit ultra_pikachu_modul_exit(void) {
    printk(KERN_ALERT "Tschüsss aus ultra_pikachu_modul! \n");
}

module_init(ultra_pikachu_modul_init);
module_exit(ultra_pikachu_modul_exit);