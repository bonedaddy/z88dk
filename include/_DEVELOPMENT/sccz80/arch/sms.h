
// automatically generated by m4 from headers in proto subdir


#ifndef _ARCH_SMS_H
#define _ARCH_SMS_H

#include <arch.h>

// IO MAPPED REGISTERS

#ifdef __SCCZ80

#define IO_MEMORY_ENABLES         __IO_MEMORY_ENABLES
#define IO_JOYSTICK_PORT_CONTROL  __IO_JOYSTICK_PORT_CONTROL
#define IO_GUN_SPOT_VERTICAL      __IO_GUN_SPOT_VERTICAL
#define IO_GUN_SPOT_HORIZONTAL    __IO_GUN_SPOT_HORIZONTAL
#define IO_PSG                    __IO_PSG
#define IO_VDP_DATA               __IO_VDP_DATA
#define IO_VDP_CONTROL            __IO_VDP_COMMAND
#define IO_VDP_COMMAND            __IO_VDP_COMMAND
#define IO_VDP_STATUS             __IO_VDP_STATUS
#define IO_JOYSTICK_READ_L        __IO_JOYSTICK_READ_L
#define IO_JOYSTICK_READ_H        __IO_JOYSTICK_READ_H

#define IO_3E  0x3e
#define IO_3F  0x3f
#define IO_7E  0x7e
#define IO_7F  0x7f
#define IO_BE  0xbe
#define IO_BF  0xbf
#define IO_DC  0xdc
#define IO_DD  0xdd

#endif

#ifdef __SDCC

__sfr __at __IO_MEMORY_ENABLES         IO_MEMORY_ENABLES;
__sfr __at __IO_JOYSTICK_PORT_CONTROL  IO_JOYSTICK_PORT_CONTROL;
__sfr __at __IO_GUN_SPOT_VERTICAL      IO_GUN_SPOT_VERTICAL;
__sfr __at __IO_GUN_SPOT_HORIZONTAL    IO_GUN_SPOT_HORIZONTAL;
__sfr __at __IO_PSG                    IO_PSG;
__sfr __at __IO_VDP_DATA               IO_VDP_DATA;
__sfr __at __IO_VDP_COMMAND            IO_VDP_CONTROL;  // same port
__sfr __at __IO_VDP_COMMAND            IO_VDP_COMMAND;  // same port
__sfr __at __IO_VDP_STATUS             IO_VDP_STATUS;   // same port
__sfr __at __IO_JOYSTICK_READ_L        IO_JOYSTICK_READ_L;
__sfr __at __IO_JOYSTICK_READ_H        IO_JOYSTICK_READ_H;

__sfr __at 0x3e IO_3E;
__sfr __at 0x3f IO_3F;
__sfr __at 0x7e IO_7E;
__sfr __at 0x7f IO_7F;
__sfr __at 0xbe IO_BE;
__sfr __at 0xbf IO_BF;
__sfr __at 0xdc IO_DC;
__sfr __at 0xdd IO_DD;

#endif

#ifdef __CLANG

extern unsigned char IO_MEMORY_ENABLES;
extern unsigned char IO_JOYSTICK_PORT_CONTROL;
extern unsigned char IO_GUN_SPOT_VERTICAL;
extern unsigned char IO_GUN_SPOT_HORIZONTAL;
extern unsigned char IO_PSG;
extern unsigned char IO_VDP_DATA;
extern unsigned char IO_VDP_COMMAND;
extern unsigned char IO_VDP_STATUS;
extern unsigned char IO_JOYSTICK_READ_L;
extern unsigned char IO_JOYSTICK_READ_H;

extern unsigned char IO_3E;
extern unsigned char IO_3F;
extern unsigned char IO_7E;
extern unsigned char IO_7F;
extern unsigned char IO_BE;
extern unsigned char IO_BF;
extern unsigned char IO_DC;
extern unsigned char IO_DD;

#endif

// MEMORY MAPPED REGISTERS

extern volatile unsigned char MM_FRAME2_CONTROL_REGISTER;
extern volatile unsigned char MM_FRAME1_CONTROL_REGISTER;
extern volatile unsigned char MM_FRAME0_CONTROL_REGISTER;
extern volatile unsigned char MM_FRAME2_RAM_CONTROL_REGISTER;

extern volatile unsigned char MM_FFFF;
extern volatile unsigned char MM_FFFE;
extern volatile unsigned char MM_FFFD;
extern volatile unsigned char MM_FFFC;

// VRAM ADDRESS ASSIGNMENT

#define SMS_VRAM_SCREEN_MAP_ADDRESS              __SMS_VRAM_SCREEN_MAP_ADDRESS
#define SMS_VRAM_SPRITE_ATTRIBUTE_TABLE_ADDRESS  __SMS_VRAM_SPRITE_ATTRIBUTE_TABLE_ADDRESS
#define SMS_VRAM_CHARACTER_PATTERN_BASE_ADDRESS  __SMS_VRAM_CHARACTER_PATTERN_BASE_ADDRESS

// VRAM <-> MEMORY COPY OPERATIONS

extern unsigned int __LIB__ sms_memcpy_mem_to_vram(unsigned int dst,void *src,unsigned int n) __smallc;
extern unsigned int __LIB__ __CALLEE__ sms_memcpy_mem_to_vram_callee(unsigned int dst,void *src,unsigned int n) __smallc;
#define sms_memcpy_mem_to_vram(a,b,c) sms_memcpy_mem_to_vram_callee(a,b,c)


extern unsigned int __LIB__ sms_memcpy_mem_to_vram_unsafe(unsigned int dst,void *src,unsigned int n) __smallc;
extern unsigned int __LIB__ __CALLEE__ sms_memcpy_mem_to_vram_unsafe_callee(unsigned int dst,void *src,unsigned int n) __smallc;
#define sms_memcpy_mem_to_vram_unsafe(a,b,c) sms_memcpy_mem_to_vram_unsafe_callee(a,b,c)



extern unsigned int __LIB__ sms_memcpy_vram_to_mem(void *dst,unsigned int src,unsigned int n) __smallc;
extern unsigned int __LIB__ __CALLEE__ sms_memcpy_vram_to_mem_callee(void *dst,unsigned int src,unsigned int n) __smallc;
#define sms_memcpy_vram_to_mem(a,b,c) sms_memcpy_vram_to_mem_callee(a,b,c)


extern unsigned int __LIB__ sms_memcpy_vram_to_mem_unsafe(void *dst,unsigned int src,unsigned int n) __smallc;
extern unsigned int __LIB__ __CALLEE__ sms_memcpy_vram_to_mem_unsafe_callee(void *dst,unsigned int src,unsigned int n) __smallc;
#define sms_memcpy_vram_to_mem_unsafe(a,b,c) sms_memcpy_vram_to_mem_unsafe_callee(a,b,c)



extern unsigned int __LIB__ sms_memcpy_vram_to_vram(unsigned int dst,unsigned int src,unsigned int n) __smallc;
extern unsigned int __LIB__ __CALLEE__ sms_memcpy_vram_to_vram_callee(unsigned int dst,unsigned int src,unsigned int n) __smallc;
#define sms_memcpy_vram_to_vram(a,b,c) sms_memcpy_vram_to_vram_callee(a,b,c)


extern unsigned int __LIB__ sms_memcpy_vram_to_vram_unsafe(unsigned int dst,unsigned int src,unsigned int n) __smallc;
extern unsigned int __LIB__ __CALLEE__ sms_memcpy_vram_to_vram_unsafe_callee(unsigned int dst,unsigned int src,unsigned int n) __smallc;
#define sms_memcpy_vram_to_vram_unsafe(a,b,c) sms_memcpy_vram_to_vram_unsafe_callee(a,b,c)



extern unsigned int __LIB__ sms_memset_vram(unsigned int dst,unsigned char c,unsigned int n) __smallc;
extern unsigned int __LIB__ __CALLEE__ sms_memset_vram_callee(unsigned int dst,unsigned char c,unsigned int n) __smallc;
#define sms_memset_vram(a,b,c) sms_memset_vram_callee(a,b,c)


extern unsigned int __LIB__ sms_memset_vram_unsafe(unsigned int dst,unsigned char c,unsigned int n) __smallc;
extern unsigned int __LIB__ __CALLEE__ sms_memset_vram_unsafe_callee(unsigned int dst,unsigned char c,unsigned int n) __smallc;
#define sms_memset_vram_unsafe(a,b,c) sms_memset_vram_unsafe_callee(a,b,c)



#endif
