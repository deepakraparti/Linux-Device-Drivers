#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init hello_init(void)
{
  printk(KERN_INFO "Hello, World! Module loaded\n");
  return 0;
}

static void __exit hello_exit(void)
{
  printk(KERN_INFO "Goodbye, World! Module unloaded\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Deepak Raparti");
MODULE_DESCRIPTION("A simple Hello Wrold LKM");
MODULE_VERSION("1.0");
