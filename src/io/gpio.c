
#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/sched.h>
#include <linux/wait.h>
#include <linux/proc_fs.h>
#include <linux/timer.h>
#include <linux/interrupt.h>
#include <linux/ioport.h>
#include <linux/ioctl.h>
#include <linux/mm.h>
#include <linux/errno.h>
#include <linux/delay.h>
#include <linux/of.h>
#include <asm/uaccess.h>
#include <asm/irq.h>
#include <asm/io.h>

#include "../include/soc_types.h"
#include "gpio.h"

#define GPIO_DEBUG

MODULE_LICENSE("GPL");

#define GPIO_BASE	0x2200
#define GPIO_SIZE 	0x20

#define DEVICE_NAME	"gpio"

static void* base_addr;
static uint32 open_count;
static uint32 close_count;
static uint32 mmap_count;
static uint32 ioctl_count;


static int device_major = -1;
static struct proc_dir_entry* gpio_proc = NULL;
static uint64 rb_unlock_mask = 0;
static uint64 ant_power_mask = 0;


static int gpio_open(struct inode * , struct file *);
static int gpio_close(struct inode * , struct file *);
static int gpio_mmap(struct file* file, struct vm_area_struct* vma);
static long gpio_ioctl(struct file *, unsigned int, unsigned long);
static int gpio_read_proc(char* buf, char** start, off_t offset, int count, int* eof, void* data);


struct file_operations devide_fops = {
    .open           = gpio_open,
    .release        = gpio_close,
    .mmap           = gpio_mmap,
    .unlocked_ioctl = gpio_ioctl
};


static int gpio_open(struct inode* inode, struct file* file)
{
	return 0;
}

static int gpio_mmap(struct file* file, struct vm_area_struct* vma)
{
	return 0;
}

static int gpio_close(struct inode* inode, struct file* file)
{
	return 0;
}


static int gpio_read_proc(char* buf, char** start, off_t offset, int count, int* eof, void* data)
{
	return 0;
}

static long gpio_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
	return 0;
}

static int my_init(void) {
	return 0;
}

static void my_exit(void) {
	return;
}

module_init( my_init);
module_exit( my_exit);
