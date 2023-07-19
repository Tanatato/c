#include <linxu/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>

static dev_t no = 0;
static unsigned count = 1;
static const char *name = "myled";

#define MA 300
#define MI 0

static int myinit()
{
    int ret = -1;
    no = MKDEV(MA,MI);
    ret = register_chrdev_region(no,count,name);
    if(ret<0)
    {
        printk("reg is error\n");
        return -1;
    }


    return 0;
}

static void myexit()
{
    return ;
}

module_init(myinit);
module_exit(myexit);

MODULE_LICENS("GPL");