// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimple.h for the primary calling header

#include "VSimple__pch.h"

VL_ATTR_COLD void VSimple___024root___eval_static(VSimple___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___eval_static\n"); );
    VSimple__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void VSimple___024root___eval_initial(VSimple___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___eval_initial\n"); );
    VSimple__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VSimple___024root___eval_final(VSimple___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___eval_final\n"); );
    VSimple__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimple___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSimple___024root___eval_phase__stl(VSimple___024root* vlSelf);

VL_ATTR_COLD void VSimple___024root___eval_settle(VSimple___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___eval_settle\n"); );
    VSimple__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VSimple___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("Simple.sv", 12, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (VSimple___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void VSimple___024root___eval_triggers__stl(VSimple___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___eval_triggers__stl\n"); );
    VSimple__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimple___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool VSimple___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimple___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VSimple___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VSimple___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<VlWide<219>/*6999:0*/, 4> VSimple__ConstPool__TABLE_h2c04e5e4_0;

VL_ATTR_COLD void VSimple___024root___stl_sequent__TOP__0(VSimple___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___stl_sequent__TOP__0\n"); );
    VSimple__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.counter_add_enum_version = vlSelfRef.counter_add;
    __Vtableidx1 = vlSelfRef.counter_add;
    vlSelfRef.super_long[0U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0U];
    vlSelfRef.super_long[1U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][1U];
    vlSelfRef.super_long[2U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][2U];
    vlSelfRef.super_long[3U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][3U];
    vlSelfRef.super_long[4U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][4U];
    vlSelfRef.super_long[5U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][5U];
    vlSelfRef.super_long[6U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][6U];
    vlSelfRef.super_long[7U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][7U];
    vlSelfRef.super_long[8U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][8U];
    vlSelfRef.super_long[9U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][9U];
    vlSelfRef.super_long[0x0000000aU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000000aU];
    vlSelfRef.super_long[0x0000000bU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000000bU];
    vlSelfRef.super_long[0x0000000cU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000000cU];
    vlSelfRef.super_long[0x0000000dU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000000dU];
    vlSelfRef.super_long[0x0000000eU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000000eU];
    vlSelfRef.super_long[0x0000000fU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000000fU];
    vlSelfRef.super_long[0x00000010U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000010U];
    vlSelfRef.super_long[0x00000011U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000011U];
    vlSelfRef.super_long[0x00000012U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000012U];
    vlSelfRef.super_long[0x00000013U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000013U];
    vlSelfRef.super_long[0x00000014U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000014U];
    vlSelfRef.super_long[0x00000015U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000015U];
    vlSelfRef.super_long[0x00000016U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000016U];
    vlSelfRef.super_long[0x00000017U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000017U];
    vlSelfRef.super_long[0x00000018U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000018U];
    vlSelfRef.super_long[0x00000019U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000019U];
    vlSelfRef.super_long[0x0000001aU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000001aU];
    vlSelfRef.super_long[0x0000001bU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000001bU];
    vlSelfRef.super_long[0x0000001cU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000001cU];
    vlSelfRef.super_long[0x0000001dU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000001dU];
    vlSelfRef.super_long[0x0000001eU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000001eU];
    vlSelfRef.super_long[0x0000001fU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000001fU];
    vlSelfRef.super_long[0x00000020U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000020U];
    vlSelfRef.super_long[0x00000021U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000021U];
    vlSelfRef.super_long[0x00000022U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000022U];
    vlSelfRef.super_long[0x00000023U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000023U];
    vlSelfRef.super_long[0x00000024U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000024U];
    vlSelfRef.super_long[0x00000025U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000025U];
    vlSelfRef.super_long[0x00000026U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000026U];
    vlSelfRef.super_long[0x00000027U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000027U];
    vlSelfRef.super_long[0x00000028U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000028U];
    vlSelfRef.super_long[0x00000029U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000029U];
    vlSelfRef.super_long[0x0000002aU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000002aU];
    vlSelfRef.super_long[0x0000002bU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000002bU];
    vlSelfRef.super_long[0x0000002cU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000002cU];
    vlSelfRef.super_long[0x0000002dU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000002dU];
    vlSelfRef.super_long[0x0000002eU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000002eU];
    vlSelfRef.super_long[0x0000002fU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000002fU];
    vlSelfRef.super_long[0x00000030U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000030U];
    vlSelfRef.super_long[0x00000031U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000031U];
    vlSelfRef.super_long[0x00000032U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000032U];
    vlSelfRef.super_long[0x00000033U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000033U];
    vlSelfRef.super_long[0x00000034U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000034U];
    vlSelfRef.super_long[0x00000035U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000035U];
    vlSelfRef.super_long[0x00000036U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000036U];
    vlSelfRef.super_long[0x00000037U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000037U];
    vlSelfRef.super_long[0x00000038U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000038U];
    vlSelfRef.super_long[0x00000039U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000039U];
    vlSelfRef.super_long[0x0000003aU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000003aU];
    vlSelfRef.super_long[0x0000003bU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000003bU];
    vlSelfRef.super_long[0x0000003cU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000003cU];
    vlSelfRef.super_long[0x0000003dU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000003dU];
    vlSelfRef.super_long[0x0000003eU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000003eU];
    vlSelfRef.super_long[0x0000003fU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000003fU];
    vlSelfRef.super_long[0x00000040U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000040U];
    vlSelfRef.super_long[0x00000041U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000041U];
    vlSelfRef.super_long[0x00000042U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000042U];
    vlSelfRef.super_long[0x00000043U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000043U];
    vlSelfRef.super_long[0x00000044U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000044U];
    vlSelfRef.super_long[0x00000045U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000045U];
    vlSelfRef.super_long[0x00000046U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000046U];
    vlSelfRef.super_long[0x00000047U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000047U];
    vlSelfRef.super_long[0x00000048U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000048U];
    vlSelfRef.super_long[0x00000049U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000049U];
    vlSelfRef.super_long[0x0000004aU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000004aU];
    vlSelfRef.super_long[0x0000004bU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000004bU];
    vlSelfRef.super_long[0x0000004cU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000004cU];
    vlSelfRef.super_long[0x0000004dU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000004dU];
    vlSelfRef.super_long[0x0000004eU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000004eU];
    vlSelfRef.super_long[0x0000004fU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000004fU];
    vlSelfRef.super_long[0x00000050U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000050U];
    vlSelfRef.super_long[0x00000051U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000051U];
    vlSelfRef.super_long[0x00000052U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000052U];
    vlSelfRef.super_long[0x00000053U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000053U];
    vlSelfRef.super_long[0x00000054U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000054U];
    vlSelfRef.super_long[0x00000055U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000055U];
    vlSelfRef.super_long[0x00000056U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000056U];
    vlSelfRef.super_long[0x00000057U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000057U];
    vlSelfRef.super_long[0x00000058U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000058U];
    vlSelfRef.super_long[0x00000059U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000059U];
    vlSelfRef.super_long[0x0000005aU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000005aU];
    vlSelfRef.super_long[0x0000005bU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000005bU];
    vlSelfRef.super_long[0x0000005cU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000005cU];
    vlSelfRef.super_long[0x0000005dU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000005dU];
    vlSelfRef.super_long[0x0000005eU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000005eU];
    vlSelfRef.super_long[0x0000005fU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000005fU];
    vlSelfRef.super_long[0x00000060U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000060U];
    vlSelfRef.super_long[0x00000061U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000061U];
    vlSelfRef.super_long[0x00000062U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000062U];
    vlSelfRef.super_long[0x00000063U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000063U];
    vlSelfRef.super_long[0x00000064U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000064U];
    vlSelfRef.super_long[0x00000065U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000065U];
    vlSelfRef.super_long[0x00000066U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000066U];
    vlSelfRef.super_long[0x00000067U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000067U];
    vlSelfRef.super_long[0x00000068U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000068U];
    vlSelfRef.super_long[0x00000069U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000069U];
    vlSelfRef.super_long[0x0000006aU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000006aU];
    vlSelfRef.super_long[0x0000006bU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000006bU];
    vlSelfRef.super_long[0x0000006cU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000006cU];
    vlSelfRef.super_long[0x0000006dU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000006dU];
    vlSelfRef.super_long[0x0000006eU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000006eU];
    vlSelfRef.super_long[0x0000006fU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000006fU];
    vlSelfRef.super_long[0x00000070U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000070U];
    vlSelfRef.super_long[0x00000071U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000071U];
    vlSelfRef.super_long[0x00000072U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000072U];
    vlSelfRef.super_long[0x00000073U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000073U];
    vlSelfRef.super_long[0x00000074U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000074U];
    vlSelfRef.super_long[0x00000075U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000075U];
    vlSelfRef.super_long[0x00000076U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000076U];
    vlSelfRef.super_long[0x00000077U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000077U];
    vlSelfRef.super_long[0x00000078U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000078U];
    vlSelfRef.super_long[0x00000079U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000079U];
    vlSelfRef.super_long[0x0000007aU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000007aU];
    vlSelfRef.super_long[0x0000007bU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000007bU];
    vlSelfRef.super_long[0x0000007cU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000007cU];
    vlSelfRef.super_long[0x0000007dU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000007dU];
    vlSelfRef.super_long[0x0000007eU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000007eU];
    vlSelfRef.super_long[0x0000007fU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000007fU];
    vlSelfRef.super_long[0x00000080U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000080U];
    vlSelfRef.super_long[0x00000081U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000081U];
    vlSelfRef.super_long[0x00000082U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000082U];
    vlSelfRef.super_long[0x00000083U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000083U];
    vlSelfRef.super_long[0x00000084U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000084U];
    vlSelfRef.super_long[0x00000085U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000085U];
    vlSelfRef.super_long[0x00000086U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000086U];
    vlSelfRef.super_long[0x00000087U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000087U];
    vlSelfRef.super_long[0x00000088U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000088U];
    vlSelfRef.super_long[0x00000089U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000089U];
    vlSelfRef.super_long[0x0000008aU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000008aU];
    vlSelfRef.super_long[0x0000008bU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000008bU];
    vlSelfRef.super_long[0x0000008cU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000008cU];
    vlSelfRef.super_long[0x0000008dU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000008dU];
    vlSelfRef.super_long[0x0000008eU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000008eU];
    vlSelfRef.super_long[0x0000008fU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000008fU];
    vlSelfRef.super_long[0x00000090U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000090U];
    vlSelfRef.super_long[0x00000091U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000091U];
    vlSelfRef.super_long[0x00000092U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000092U];
    vlSelfRef.super_long[0x00000093U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000093U];
    vlSelfRef.super_long[0x00000094U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000094U];
    vlSelfRef.super_long[0x00000095U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000095U];
    vlSelfRef.super_long[0x00000096U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000096U];
    vlSelfRef.super_long[0x00000097U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000097U];
    vlSelfRef.super_long[0x00000098U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000098U];
    vlSelfRef.super_long[0x00000099U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x00000099U];
    vlSelfRef.super_long[0x0000009aU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000009aU];
    vlSelfRef.super_long[0x0000009bU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000009bU];
    vlSelfRef.super_long[0x0000009cU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000009cU];
    vlSelfRef.super_long[0x0000009dU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000009dU];
    vlSelfRef.super_long[0x0000009eU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000009eU];
    vlSelfRef.super_long[0x0000009fU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x0000009fU];
    vlSelfRef.super_long[0x000000a0U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000a0U];
    vlSelfRef.super_long[0x000000a1U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000a1U];
    vlSelfRef.super_long[0x000000a2U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000a2U];
    vlSelfRef.super_long[0x000000a3U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000a3U];
    vlSelfRef.super_long[0x000000a4U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000a4U];
    vlSelfRef.super_long[0x000000a5U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000a5U];
    vlSelfRef.super_long[0x000000a6U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000a6U];
    vlSelfRef.super_long[0x000000a7U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000a7U];
    vlSelfRef.super_long[0x000000a8U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000a8U];
    vlSelfRef.super_long[0x000000a9U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000a9U];
    vlSelfRef.super_long[0x000000aaU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000aaU];
    vlSelfRef.super_long[0x000000abU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000abU];
    vlSelfRef.super_long[0x000000acU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000acU];
    vlSelfRef.super_long[0x000000adU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000adU];
    vlSelfRef.super_long[0x000000aeU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000aeU];
    vlSelfRef.super_long[0x000000afU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000afU];
    vlSelfRef.super_long[0x000000b0U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000b0U];
    vlSelfRef.super_long[0x000000b1U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000b1U];
    vlSelfRef.super_long[0x000000b2U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000b2U];
    vlSelfRef.super_long[0x000000b3U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000b3U];
    vlSelfRef.super_long[0x000000b4U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000b4U];
    vlSelfRef.super_long[0x000000b5U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000b5U];
    vlSelfRef.super_long[0x000000b6U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000b6U];
    vlSelfRef.super_long[0x000000b7U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000b7U];
    vlSelfRef.super_long[0x000000b8U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000b8U];
    vlSelfRef.super_long[0x000000b9U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000b9U];
    vlSelfRef.super_long[0x000000baU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000baU];
    vlSelfRef.super_long[0x000000bbU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000bbU];
    vlSelfRef.super_long[0x000000bcU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000bcU];
    vlSelfRef.super_long[0x000000bdU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000bdU];
    vlSelfRef.super_long[0x000000beU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000beU];
    vlSelfRef.super_long[0x000000bfU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000bfU];
    vlSelfRef.super_long[0x000000c0U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000c0U];
    vlSelfRef.super_long[0x000000c1U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000c1U];
    vlSelfRef.super_long[0x000000c2U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000c2U];
    vlSelfRef.super_long[0x000000c3U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000c3U];
    vlSelfRef.super_long[0x000000c4U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000c4U];
    vlSelfRef.super_long[0x000000c5U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000c5U];
    vlSelfRef.super_long[0x000000c6U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000c6U];
    vlSelfRef.super_long[0x000000c7U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000c7U];
    vlSelfRef.super_long[0x000000c8U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000c8U];
    vlSelfRef.super_long[0x000000c9U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000c9U];
    vlSelfRef.super_long[0x000000caU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000caU];
    vlSelfRef.super_long[0x000000cbU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000cbU];
    vlSelfRef.super_long[0x000000ccU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000ccU];
    vlSelfRef.super_long[0x000000cdU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000cdU];
    vlSelfRef.super_long[0x000000ceU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000ceU];
    vlSelfRef.super_long[0x000000cfU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000cfU];
    vlSelfRef.super_long[0x000000d0U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000d0U];
    vlSelfRef.super_long[0x000000d1U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000d1U];
    vlSelfRef.super_long[0x000000d2U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000d2U];
    vlSelfRef.super_long[0x000000d3U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000d3U];
    vlSelfRef.super_long[0x000000d4U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000d4U];
    vlSelfRef.super_long[0x000000d5U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000d5U];
    vlSelfRef.super_long[0x000000d6U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000d6U];
    vlSelfRef.super_long[0x000000d7U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000d7U];
    vlSelfRef.super_long[0x000000d8U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000d8U];
    vlSelfRef.super_long[0x000000d9U] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000d9U];
    vlSelfRef.super_long[0x000000daU] = VSimple__ConstPool__TABLE_h2c04e5e4_0
        [__Vtableidx1][0x000000daU];
}

VL_ATTR_COLD void VSimple___024root___eval_stl(VSimple___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___eval_stl\n"); );
    VSimple__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VSimple___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VSimple___024root___eval_phase__stl(VSimple___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___eval_phase__stl\n"); );
    VSimple__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VSimple___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = VSimple___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VSimple___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VSimple___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimple___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VSimple___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimple___024root___ctor_var_reset(VSimple___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimple___024root___ctor_var_reset\n"); );
    VSimple__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->counter_add_enum_version = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12626391002095280768ull);
    vlSelf->counter_add = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3083618785330880722ull);
    VL_SCOPED_RAND_RESET_W(127, vlSelf->counter_shift, __VscopeHash, 12248760533361280699ull);
    VL_SCOPED_RAND_RESET_W(7000, vlSelf->super_long, __VscopeHash, 1193393705275831460ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803524876191471008ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
