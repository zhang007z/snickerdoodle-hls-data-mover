// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef XDATA_MOVER_H
#define XDATA_MOVER_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xdata_mover_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_BaseAddress;
} XData_mover_Config;
#endif

typedef struct {
    u32 Control_BaseAddress;
    u32 IsReady;
} XData_mover;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XData_mover_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XData_mover_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XData_mover_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XData_mover_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XData_mover_Initialize(XData_mover *InstancePtr, u16 DeviceId);
XData_mover_Config* XData_mover_LookupConfig(u16 DeviceId);
int XData_mover_CfgInitialize(XData_mover *InstancePtr, XData_mover_Config *ConfigPtr);
#else
int XData_mover_Initialize(XData_mover *InstancePtr, const char* InstanceName);
int XData_mover_Release(XData_mover *InstancePtr);
#endif

void XData_mover_Start(XData_mover *InstancePtr);
u32 XData_mover_IsDone(XData_mover *InstancePtr);
u32 XData_mover_IsIdle(XData_mover *InstancePtr);
u32 XData_mover_IsReady(XData_mover *InstancePtr);
void XData_mover_EnableAutoRestart(XData_mover *InstancePtr);
void XData_mover_DisableAutoRestart(XData_mover *InstancePtr);

void XData_mover_Set_tx_buffer_V(XData_mover *InstancePtr, u32 Data);
u32 XData_mover_Get_tx_buffer_V(XData_mover *InstancePtr);
void XData_mover_Set_tx_buffer_length_V(XData_mover *InstancePtr, u32 Data);
u32 XData_mover_Get_tx_buffer_length_V(XData_mover *InstancePtr);
void XData_mover_Set_rx_buffer_V(XData_mover *InstancePtr, u32 Data);
u32 XData_mover_Get_rx_buffer_V(XData_mover *InstancePtr);
void XData_mover_Set_rx_buffer_length_V(XData_mover *InstancePtr, u32 Data);
u32 XData_mover_Get_rx_buffer_length_V(XData_mover *InstancePtr);

void XData_mover_InterruptGlobalEnable(XData_mover *InstancePtr);
void XData_mover_InterruptGlobalDisable(XData_mover *InstancePtr);
void XData_mover_InterruptEnable(XData_mover *InstancePtr, u32 Mask);
void XData_mover_InterruptDisable(XData_mover *InstancePtr, u32 Mask);
void XData_mover_InterruptClear(XData_mover *InstancePtr, u32 Mask);
u32 XData_mover_InterruptGetEnabled(XData_mover *InstancePtr);
u32 XData_mover_InterruptGetStatus(XData_mover *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
