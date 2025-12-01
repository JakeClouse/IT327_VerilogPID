// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_module.h for the primary calling header

#include "Vtop_module__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop_module___024root___eval_triggers__ico(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_triggers__ico\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_module___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop_module___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___trigger_anySet__ico\n"); );
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

void Vtop_module___024root___ico_sequent__TOP__0(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___ico_sequent__TOP__0\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__11__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__11__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__10__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__10__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__9__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__9__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__8__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__8__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__7__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__7__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__6__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__6__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__5__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__5__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__4__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__4__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__3__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__3__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__2__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__2__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT__carryWire__BRA__1__KET__;
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__1__KET__ = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_12;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_12 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_13;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_13 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_14;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_14 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_15;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_15 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_16;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_16 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_17;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_17 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_18;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_18 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_19;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_19 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_20;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_20 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_21;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_21 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_22;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_22 = 0;
    CData/*0:0*/ top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_23;
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_23 = 0;
    // Body
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_12 
        = (1U ^ (((IData)(vlSelfRef.angleIn) ^ (IData)(vlSelfRef.setPoint)) 
                 >> 0x0000000bU));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_13 
        = (1U & ((~ ((IData)(vlSelfRef.angleIn) >> 0x0000000aU)) 
                 ^ ((IData)(vlSelfRef.setPoint) >> 0x0000000aU)));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_14 
        = (1U & ((~ ((IData)(vlSelfRef.angleIn) >> 9U)) 
                 ^ ((IData)(vlSelfRef.setPoint) >> 9U)));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_15 
        = (1U & ((~ ((IData)(vlSelfRef.angleIn) >> 8U)) 
                 ^ ((IData)(vlSelfRef.setPoint) >> 8U)));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_16 
        = (1U & ((~ ((IData)(vlSelfRef.angleIn) >> 7U)) 
                 ^ ((IData)(vlSelfRef.setPoint) >> 7U)));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_17 
        = (1U & ((~ ((IData)(vlSelfRef.angleIn) >> 6U)) 
                 ^ ((IData)(vlSelfRef.setPoint) >> 6U)));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_18 
        = (1U & ((~ ((IData)(vlSelfRef.angleIn) >> 5U)) 
                 ^ ((IData)(vlSelfRef.setPoint) >> 5U)));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_19 
        = (1U & ((~ ((IData)(vlSelfRef.angleIn) >> 4U)) 
                 ^ ((IData)(vlSelfRef.setPoint) >> 4U)));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_20 
        = (1U & ((~ ((IData)(vlSelfRef.angleIn) >> 3U)) 
                 ^ ((IData)(vlSelfRef.setPoint) >> 3U)));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_21 
        = (1U & ((~ ((IData)(vlSelfRef.angleIn) >> 2U)) 
                 ^ ((IData)(vlSelfRef.setPoint) >> 2U)));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_22 
        = (1U & ((~ ((IData)(vlSelfRef.angleIn) >> 1U)) 
                 ^ ((IData)(vlSelfRef.setPoint) >> 1U)));
    top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_23 
        = (1U & ((~ (IData)(vlSelfRef.angleIn)) ^ (IData)(vlSelfRef.setPoint)));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__1__KET__ 
        = (1U & ((IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_23) 
                 | ((~ (IData)(vlSelfRef.angleIn)) 
                    & (IData)(vlSelfRef.setPoint))));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__2__KET__ 
        = (1U & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__1__KET__) 
                  & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_22)) 
                 | ((~ ((IData)(vlSelfRef.angleIn) 
                        >> 1U)) & ((IData)(vlSelfRef.setPoint) 
                                   >> 1U))));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__3__KET__ 
        = (1U & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__2__KET__) 
                  & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_21)) 
                 | ((~ ((IData)(vlSelfRef.angleIn) 
                        >> 2U)) & ((IData)(vlSelfRef.setPoint) 
                                   >> 2U))));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__4__KET__ 
        = (1U & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__3__KET__) 
                  & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_20)) 
                 | ((~ ((IData)(vlSelfRef.angleIn) 
                        >> 3U)) & ((IData)(vlSelfRef.setPoint) 
                                   >> 3U))));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__5__KET__ 
        = (1U & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__4__KET__) 
                  & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_19)) 
                 | ((~ ((IData)(vlSelfRef.angleIn) 
                        >> 4U)) & ((IData)(vlSelfRef.setPoint) 
                                   >> 4U))));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__6__KET__ 
        = (1U & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__5__KET__) 
                  & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_18)) 
                 | ((~ ((IData)(vlSelfRef.angleIn) 
                        >> 5U)) & ((IData)(vlSelfRef.setPoint) 
                                   >> 5U))));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__7__KET__ 
        = (1U & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__6__KET__) 
                  & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_17)) 
                 | ((~ ((IData)(vlSelfRef.angleIn) 
                        >> 6U)) & ((IData)(vlSelfRef.setPoint) 
                                   >> 6U))));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__8__KET__ 
        = (1U & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__7__KET__) 
                  & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_16)) 
                 | ((~ ((IData)(vlSelfRef.angleIn) 
                        >> 7U)) & ((IData)(vlSelfRef.setPoint) 
                                   >> 7U))));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__9__KET__ 
        = (1U & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__8__KET__) 
                  & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_15)) 
                 | ((~ ((IData)(vlSelfRef.angleIn) 
                        >> 8U)) & ((IData)(vlSelfRef.setPoint) 
                                   >> 8U))));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__10__KET__ 
        = (1U & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__9__KET__) 
                  & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_14)) 
                 | ((~ ((IData)(vlSelfRef.angleIn) 
                        >> 9U)) & ((IData)(vlSelfRef.setPoint) 
                                   >> 9U))));
    top_module__DOT__errCalcInst__DOT__carryWire__BRA__11__KET__ 
        = (1U & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__10__KET__) 
                  & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_13)) 
                 | ((~ ((IData)(vlSelfRef.angleIn) 
                        >> 0x0000000aU)) & ((IData)(vlSelfRef.setPoint) 
                                            >> 0x0000000aU))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_0 = (1U 
                                                & (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__11__KET__) 
                                                    & (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_12)) 
                                                   | ((~ 
                                                       ((IData)(vlSelfRef.angleIn) 
                                                        >> 0x0000000bU)) 
                                                      & ((IData)(vlSelfRef.setPoint) 
                                                         >> 0x0000000bU))));
    vlSelfRef.top_module__DOT__error = (((((((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_0) 
                                             << 3U) 
                                            | (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__11__KET__) 
                                                ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_12)) 
                                               << 2U)) 
                                           | ((((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__10__KET__) 
                                                ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_13)) 
                                               << 1U) 
                                              | ((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__9__KET__) 
                                                 ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_14)))) 
                                          << 9U) | 
                                         ((((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__8__KET__) 
                                            ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_15)) 
                                           << 8U) | 
                                          ((((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__7__KET__) 
                                             ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_16)) 
                                            << 7U) 
                                           | (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__6__KET__) 
                                               ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_17)) 
                                              << 6U)))) 
                                        | (((((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__5__KET__) 
                                              ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_18)) 
                                             << 5U) 
                                            | ((((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__4__KET__) 
                                                 ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_19)) 
                                                << 4U) 
                                               | (((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__3__KET__) 
                                                   ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_20)) 
                                                  << 3U))) 
                                           | ((((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__2__KET__) 
                                                ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_21)) 
                                               << 2U) 
                                              | ((((IData)(top_module__DOT__errCalcInst__DOT__carryWire__BRA__1__KET__) 
                                                   ^ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_22)) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ (IData)(top_module__DOT__errCalcInst__DOT____VdfgRegularize_h9e00e42f_0_23)))))));
    vlSelfRef.top_module__DOT__proportional = (0x001fffffU 
                                               & ((IData)(vlSelfRef.top_module__DOT__error) 
                                                  * (IData)(vlSelfRef.kp)));
    vlSelfRef.top_module__DOT__derivative = (0x003fffffU 
                                             & ((0x003fffffU 
                                                 & (((0x003fe000U 
                                                      & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_0))) 
                                                         << 0x0000000dU)) 
                                                     | (IData)(vlSelfRef.top_module__DOT__error)) 
                                                    - 
                                                    ((0x003fe000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.top_module__DOT__prevError) 
                                                                        >> 0x0000000cU)))) 
                                                         << 0x0000000dU)) 
                                                     | (IData)(vlSelfRef.top_module__DOT__prevError)))) 
                                                * (IData)(vlSelfRef.kd)));
}

void Vtop_module___024root___eval_ico(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_ico\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop_module___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop_module___024root___eval_phase__ico(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_phase__ico\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop_module___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop_module___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop_module___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_module___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop_module___024root___eval_triggers__act(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_triggers__act\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_module___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop_module___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___trigger_anySet__act\n"); );
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

void Vtop_module___024root___nba_sequent__TOP__0(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___nba_sequent__TOP__0\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*28:0*/ __Vdly__top_module__DOT__integral;
    __Vdly__top_module__DOT__integral = 0;
    // Body
    __Vdly__top_module__DOT__integral = vlSelfRef.top_module__DOT__integral;
    vlSelfRef.top_module__DOT__prevError = vlSelfRef.top_module__DOT__error;
    vlSelfRef.dutyCycleOut = (VL_LTS_III(32, 0x000000ffU, 
                                         VL_EXTENDS_II(32,30, vlSelfRef.top_module__DOT__pidOut))
                               ? 0x000000ffU : (VL_GTS_III(32, 0xffffff01U, 
                                                           VL_EXTENDS_II(32,30, vlSelfRef.top_module__DOT__pidOut))
                                                 ? 0x00000101U
                                                 : 
                                                (0x000001ffU 
                                                 & vlSelfRef.top_module__DOT__pidOut)));
    __Vdly__top_module__DOT__integral = (0x1fffffffU 
                                         & (vlSelfRef.top_module__DOT__integral 
                                            + ((IData)(vlSelfRef.top_module__DOT__error) 
                                               * (IData)(vlSelfRef.ki))));
    if (VL_LTS_III(32, 0x000000ffU, VL_EXTENDS_II(32,29, vlSelfRef.top_module__DOT__integral))) {
        __Vdly__top_module__DOT__integral = 0x000000ffU;
    }
    if (VL_GTS_III(32, 0xffffff01U, VL_EXTENDS_II(32,29, vlSelfRef.top_module__DOT__integral))) {
        __Vdly__top_module__DOT__integral = 0x1fffff01U;
    }
    vlSelfRef.top_module__DOT__pidOut = (0x3fffffffU 
                                         & ((((0x3fe00000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top_module__DOT__proportional 
                                                                 >> 0x14U)))) 
                                                  << 0x00000015U)) 
                                              | vlSelfRef.top_module__DOT__proportional) 
                                             + vlSelfRef.top_module__DOT__integral) 
                                            + ((0x3fc00000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top_module__DOT__derivative 
                                                                  >> 0x15U)))) 
                                                   << 0x00000016U)) 
                                               | vlSelfRef.top_module__DOT__derivative)));
    vlSelfRef.top_module__DOT__integral = __Vdly__top_module__DOT__integral;
    vlSelfRef.top_module__DOT__derivative = (0x003fffffU 
                                             & ((0x003fffffU 
                                                 & (((0x003fe000U 
                                                      & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_0))) 
                                                         << 0x0000000dU)) 
                                                     | (IData)(vlSelfRef.top_module__DOT__error)) 
                                                    - 
                                                    ((0x003fe000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.top_module__DOT__prevError) 
                                                                        >> 0x0000000cU)))) 
                                                         << 0x0000000dU)) 
                                                     | (IData)(vlSelfRef.top_module__DOT__prevError)))) 
                                                * (IData)(vlSelfRef.kd)));
}

void Vtop_module___024root___eval_nba(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_nba\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_module___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop_module___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_module___024root___eval_phase__act(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_phase__act\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_module___024root___eval_triggers__act(vlSelf);
    Vtop_module___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop_module___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_module___024root___eval_phase__nba(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_phase__nba\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop_module___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop_module___024root___eval_nba(vlSelf);
        Vtop_module___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop_module___024root___eval(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop_module___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("PIDRunner.v", 2, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop_module___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_module___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("PIDRunner.v", 2, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_module___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("PIDRunner.v", 2, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop_module___024root___eval_phase__act(vlSelf));
    } while (Vtop_module___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop_module___024root___eval_debug_assertions(Vtop_module___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_module___024root___eval_debug_assertions\n"); );
    Vtop_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.angleIn & 0xf000U)))) {
        Verilated::overWidthError("angleIn");
    }
    if (VL_UNLIKELY(((vlSelfRef.setPoint & 0xf000U)))) {
        Verilated::overWidthError("setPoint");
    }
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
}
#endif  // VL_DEBUG
