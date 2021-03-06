// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xdata_mover.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XData_mover_CfgInitialize(XData_mover *InstancePtr, XData_mover_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XData_mover_Start(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_AP_CTRL) & 0x80;
    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XData_mover_IsDone(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XData_mover_IsIdle(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XData_mover_IsReady(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XData_mover_EnableAutoRestart(XData_mover *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XData_mover_DisableAutoRestart(XData_mover *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_AP_CTRL, 0);
}

void XData_mover_Set_tx_buffer_V(XData_mover *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_TX_BUFFER_V_DATA, Data);
}

u32 XData_mover_Get_tx_buffer_V(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_TX_BUFFER_V_DATA);
    return Data;
}

void XData_mover_Set_tx_buffer_length_V(XData_mover *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_TX_BUFFER_LENGTH_V_DATA, Data);
}

u32 XData_mover_Get_tx_buffer_length_V(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_TX_BUFFER_LENGTH_V_DATA);
    return Data;
}

void XData_mover_Set_rx_buffer_V(XData_mover *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_RX_BUFFER_V_DATA, Data);
}

u32 XData_mover_Get_rx_buffer_V(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_RX_BUFFER_V_DATA);
    return Data;
}

void XData_mover_Set_rx_buffer_length_V(XData_mover *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_RX_BUFFER_LENGTH_V_DATA, Data);
}

u32 XData_mover_Get_rx_buffer_length_V(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_RX_BUFFER_LENGTH_V_DATA);
    return Data;
}

u32 XData_mover_Get_last_buffer_V(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_LAST_BUFFER_V_DATA);
    return Data;
}

u32 XData_mover_Get_last_buffer_V_vld(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_LAST_BUFFER_V_CTRL);
    return Data & 0x1;
}

void XData_mover_Set_increment_buffer_V(XData_mover *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_INCREMENT_BUFFER_V_DATA, Data);
}

u32 XData_mover_Get_increment_buffer_V(XData_mover *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_INCREMENT_BUFFER_V_DATA);
    return Data;
}

void XData_mover_InterruptGlobalEnable(XData_mover *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_GIE, 1);
}

void XData_mover_InterruptGlobalDisable(XData_mover *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_GIE, 0);
}

void XData_mover_InterruptEnable(XData_mover *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_IER);
    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_IER, Register | Mask);
}

void XData_mover_InterruptDisable(XData_mover *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_IER);
    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_IER, Register & (~Mask));
}

void XData_mover_InterruptClear(XData_mover *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XData_mover_WriteReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_ISR, Mask);
}

u32 XData_mover_InterruptGetEnabled(XData_mover *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_IER);
}

u32 XData_mover_InterruptGetStatus(XData_mover *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XData_mover_ReadReg(InstancePtr->Control_BaseAddress, XDATA_MOVER_CONTROL_ADDR_ISR);
}

