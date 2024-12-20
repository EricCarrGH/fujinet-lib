/**
 * @brief   FujiNet Network Device Header
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3, see LICENSE for details.
 * @verbose Private
 */

#ifndef FUJINET_NETWORK_COCO_H
#define FUJINET_NETWORK_COCO_H

/**
 * @brief Bus success code
 */
#define BUS_SUCCESS 1

/**
 * @brief Bus error code
 */
#define BUS_ERROR 144

/**
 * @brief DriveWire Opcode for Network devices 
 */
#define OP_NET 0xE3

/**
 * @brief command byte for Network close
 */
#define NETCMD_CLOSE 'C'

byte net_get_response(byte devid, byte *buf, int len);

/**
 * @brief Return Network unit, given devicespec
 * @param deivcespec C string containing N: devicespec.
 * @return unit number (1-255)
 */
uint8_t network_unit(char *devicespec);

#endif /* FUJINET_NETWORK_COCO_H */
