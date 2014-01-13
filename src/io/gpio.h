/*
 * gpio.h
 *
 *  Created on: Jan 13, 2014
 *      Author: sghimire
 */

#ifndef GPIO_H
#define GPIO_H

/*User J as a magic number for GPIO */
#define GPIO_IO_MAGIC 'J'

#define GPIO_DATA0 	0xFF708000
#define GPIO_DATA1 	0xFF709000
#define GPIO_DATA2 	0xFF70A000


#define GPIO_RD_DATA 		_IOR(GPIO_IO_MAGIC, 1, uint32);
#define GPIO_WR_DATA 		_IOR(GPIO_IO_MAGIC, 2, uint32);
#define GPIO_RD_DIR 		_IOR(GPIO_IO_MAGIC, 3, uint32);
#define GPIO_WR_DIR 		_IOR(GPIO_IO_MAGIC, 4, uint32);
#endif /*GPIO*/




