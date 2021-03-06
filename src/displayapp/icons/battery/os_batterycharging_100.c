#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CK_OS_BATTERYCHARGING_100
#define LV_ATTRIBUTE_IMG_CK_OS_BATTERYCHARGING_100
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_CK_OS_BATTERYCHARGING_100 uint8_t ck_os_batterycharging_100_map[] = {
  0x6c, 0xfe, 0x6c, 0xff, 	/*Color of index 0*/
  0xe4, 0xe6, 0xe4, 0xff, 	/*Color of index 1*/

  0x03, 0xff, 0xc0, 
  0x07, 0xff, 0xe0, 
  0x0f, 0xff, 0xf0, 
  0x0f, 0xff, 0xf0, 
  0xff, 0x00, 0xff, 
  0xff, 0x00, 0xff, 
  0xff, 0x00, 0xff, 
  0xff, 0x00, 0xff, 
  0xf0, 0x00, 0x0f, 
  0xf0, 0x00, 0x0f, 
  0xf0, 0x07, 0x0f, 
  0xf0, 0x0f, 0x0f, 
  0xf0, 0x1f, 0x0f, 
  0xf0, 0x3e, 0x0f, 
  0xf0, 0x7e, 0x0f, 
  0xf0, 0xfc, 0x0f, 
  0xf1, 0xff, 0xcf, 
  0xf3, 0xff, 0xcf, 
  0xf3, 0xff, 0xcf, 
  0xf3, 0xff, 0x8f, 
  0xf0, 0x3f, 0x0f, 
  0xf0, 0x7e, 0x0f, 
  0xf0, 0x7c, 0x0f, 
  0xf0, 0xf8, 0x0f, 
  0xf0, 0xf0, 0x0f, 
  0xf0, 0xe0, 0x0f, 
  0xf0, 0x00, 0x0f, 
  0xf0, 0x00, 0x0f, 
  0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 
};

const lv_img_dsc_t ck_os_batterycharging_100 = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 32,
  .data_size = 104,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = ck_os_batterycharging_100_map,
};
