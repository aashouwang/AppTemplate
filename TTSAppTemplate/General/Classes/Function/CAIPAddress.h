//
//  EFUNPlatFormIPAddress.h
//  EfunPlatForm
//
//  Created by TangTieshan on 14-2-19.
//  Copyright (c) 2014年 TangTieshan. All rights reserved.
//
/*  该头文件完成对获取设备的IP地址所需要的一些方法的定义。  */

#ifndef EfunPlatForm_EFUNPlatFormIPAddress_h
#define EfunPlatForm_EFUNPlatFormIPAddress_h

#define MAXADDRS    32

extern char *if_names[MAXADDRS];
extern char *ip_names[MAXADDRS];
extern char *hw_addrs[MAXADDRS];
extern unsigned long ip_addrs[MAXADDRS];

// Function prototypes

void efunPlatFormInitAddresses();
void efunPlatFormFreeAddresses();
void efunPlatFormGetIPAddresses();
void efunPlatFormGetHWAddresses();

#endif
