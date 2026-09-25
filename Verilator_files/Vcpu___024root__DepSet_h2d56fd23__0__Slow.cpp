// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu__pch.h"
#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___eval_static(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcpu___024root___eval_initial__TOP(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu__DOT__ram_write_enable__0 
        = vlSelfRef.cpu__DOT__ram_write_enable;
}

VL_ATTR_COLD void Vcpu___024root___eval_initial__TOP(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    vlSelfRef.cpu__DOT__acc_data_in = 0U;
    vlSelfRef.cpu__DOT__ACC__DOT__register = 0U;
    vlSelfRef.cpu__DOT__PC__DOT__state = 0U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x2f70726fU;
    __Vtemp_1[3U] = 0x72616d73U;
    __Vtemp_1[4U] = 0x70726f67U;
    VL_READMEM_N(true, 16, 256, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelfRef.cpu__DOT__ROM__DOT__read_only_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcpu___024root___eval_final(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu___024root___eval_phase__stl(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vcpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/cpu.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu___024root___stl_sequent__TOP__0(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_stl(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcpu___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcpu___024root___stl_sequent__TOP__0(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ cpu__DOT__alu_input_b;
    cpu__DOT__alu_input_b = 0;
    CData/*7:0*/ cpu__DOT__alu_output;
    cpu__DOT__alu_output = 0;
    CData/*7:0*/ cpu__DOT__ram_data_out;
    cpu__DOT__ram_data_out = 0;
    // Body
    vlSelfRef.accumulator = vlSelfRef.cpu__DOT__ACC__DOT__register;
    vlSelfRef.program_counter = vlSelfRef.cpu__DOT__PC__DOT__state;
    vlSelfRef.port1 = vlSelfRef.cpu__DOT__RAM__DOT__registers
        [0xfcU];
    vlSelfRef.port2 = vlSelfRef.cpu__DOT__RAM__DOT__registers
        [0xfdU];
    vlSelfRef.port3 = vlSelfRef.cpu__DOT__RAM__DOT__registers
        [0xfeU];
    vlSelfRef.port4 = vlSelfRef.cpu__DOT__RAM__DOT__registers
        [0xffU];
    vlSelfRef.rom_output = vlSelfRef.cpu__DOT__ROM__DOT__read_only_mem
        [vlSelfRef.cpu__DOT__PC__DOT__state];
    vlSelfRef.cpu__DOT__rom_data_out = vlSelfRef.cpu__DOT__ROM__DOT__read_only_mem
        [vlSelfRef.cpu__DOT__PC__DOT__state];
    vlSelfRef.cpu__DOT__acc_write_enable = 0U;
    vlSelfRef.cpu__DOT__acc_enable_shift = 0U;
    vlSelfRef.cpu__DOT__acc_sel = 0U;
    vlSelfRef.cpu__DOT__ram_write_enable = 0U;
    vlSelfRef.cpu__DOT__activate_jmp = 0U;
    vlSelfRef.cpu__DOT__pc_mode = 0U;
    vlSelfRef.cpu__DOT__ram_data_in = 0U;
    vlSelfRef.cpu__DOT__acc_input_sel = 0U;
    vlSelfRef.cpu__DOT__alu_sel = 0U;
    vlSelfRef.cpu__DOT__alu_input_a = 0U;
    vlSelfRef.cpu__DOT__ram_address = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
    if (vlSelfRef.enable) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                      >> 0xfU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                          >> 0xeU)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                              >> 0xdU)))) {
                    if ((0x1000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                      >> 0xbU)))) {
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                        vlSelfRef.cpu__DOT__acc_input_sel = 1U;
                                        vlSelfRef.cpu__DOT__ram_address 
                                            = (0xffU 
                                               & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                                    }
                                } else {
                                    vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                }
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 9U)))) {
                                    vlSelfRef.cpu__DOT__acc_enable_shift = 1U;
                                    vlSelfRef.cpu__DOT__acc_sel 
                                        = ((0x100U 
                                            & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                            ? 0U : 1U);
                                }
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                vlSelfRef.cpu__DOT__acc_enable_shift = 1U;
                                vlSelfRef.cpu__DOT__acc_sel 
                                    = ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                        ? 3U : 2U);
                            }
                        }
                        if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 0xaU)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        if ((0U != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register))) {
                                            vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                            vlSelfRef.cpu__DOT__pc_mode = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if ((0U != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register))) {
                                        vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                        vlSelfRef.cpu__DOT__pc_mode = 0U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                             >> 9U)))) {
                            if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((1U & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register)))))) {
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                    vlSelfRef.cpu__DOT__pc_mode = 1U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register)))))) {
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                vlSelfRef.cpu__DOT__pc_mode = 0U;
                            }
                        }
                    } else if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            vlSelfRef.cpu__DOT__acc_input_sel = 0U;
                            vlSelfRef.cpu__DOT__ram_address 
                                = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                        } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                vlSelfRef.cpu__DOT__acc_input_sel = 0U;
                            }
                            vlSelfRef.cpu__DOT__ram_address 
                                = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                        } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            vlSelfRef.cpu__DOT__acc_input_sel = 2U;
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                      >> 0xaU)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 9U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 8U)))) {
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                    vlSelfRef.cpu__DOT__pc_mode = 1U;
                                }
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 8U)))) {
                                vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                vlSelfRef.cpu__DOT__acc_input_sel = 0U;
                            }
                            if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                vlSelfRef.cpu__DOT__pc_mode = 0U;
                            }
                        } else {
                            vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            vlSelfRef.cpu__DOT__acc_input_sel = 0U;
                        }
                    } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                        vlSelfRef.cpu__DOT__acc_input_sel = 0U;
                    } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                        vlSelfRef.cpu__DOT__acc_input_sel = 0U;
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 0xaU)))) {
                                if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        vlSelfRef.cpu__DOT__ram_write_enable = 1U;
                                        vlSelfRef.cpu__DOT__ram_data_in 
                                            = vlSelfRef.cpu__DOT__ACC__DOT__register;
                                    }
                                }
                            }
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__alu_sel 
                                    = ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                        ? ((0x100U 
                                            & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                            ? 0xbU : 0xaU)
                                        : ((0x100U 
                                            & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                            ? 9U : 4U));
                                vlSelfRef.cpu__DOT__alu_input_a 
                                    = vlSelfRef.cpu__DOT__ACC__DOT__register;
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    vlSelfRef.cpu__DOT__alu_sel = 0U;
                                    vlSelfRef.cpu__DOT__alu_input_a 
                                        = vlSelfRef.cpu__DOT__ACC__DOT__register;
                                }
                            }
                        } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 8U)))) {
                                    vlSelfRef.cpu__DOT__alu_sel = 8U;
                                    vlSelfRef.cpu__DOT__alu_input_a 
                                        = vlSelfRef.cpu__DOT__ACC__DOT__register;
                                }
                            } else {
                                vlSelfRef.cpu__DOT__alu_sel 
                                    = ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                        ? 0xbU : 0xaU);
                                vlSelfRef.cpu__DOT__alu_input_a 
                                    = vlSelfRef.cpu__DOT__ACC__DOT__register;
                            }
                        } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            vlSelfRef.cpu__DOT__alu_sel 
                                = ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                    ? 9U : 4U);
                            vlSelfRef.cpu__DOT__alu_input_a 
                                = vlSelfRef.cpu__DOT__ACC__DOT__register;
                        } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            vlSelfRef.cpu__DOT__alu_sel = 0U;
                            vlSelfRef.cpu__DOT__alu_input_a 
                                = vlSelfRef.cpu__DOT__ACC__DOT__register;
                        }
                    }
                }
            }
        }
    }
    cpu__DOT__ram_data_out = vlSelfRef.cpu__DOT__RAM__DOT__registers
        [vlSelfRef.cpu__DOT__ram_address];
    cpu__DOT__alu_input_b = 0U;
    if (vlSelfRef.enable) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                      >> 0xfU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                          >> 0xeU)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                              >> 0xdU)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                  >> 0xcU)))) {
                        if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                cpu__DOT__alu_input_b 
                                    = cpu__DOT__ram_data_out;
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    cpu__DOT__alu_input_b 
                                        = cpu__DOT__ram_data_out;
                                }
                            }
                        } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 9U)))) {
                                cpu__DOT__alu_input_b 
                                    = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                            }
                        } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            cpu__DOT__alu_input_b = 
                                (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                        } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            cpu__DOT__alu_input_b = 
                                (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                        }
                    }
                }
            }
        }
    }
    cpu__DOT__alu_output = (0xffU & ((8U & (IData)(vlSelfRef.cpu__DOT__alu_sel))
                                      ? ((4U & (IData)(vlSelfRef.cpu__DOT__alu_sel))
                                          ? 0U : ((2U 
                                                   & (IData)(vlSelfRef.cpu__DOT__alu_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu__DOT__alu_sel))
                                                    ? 
                                                   ((IData)(vlSelfRef.cpu__DOT__alu_input_a) 
                                                    | (IData)(cpu__DOT__alu_input_b))
                                                    : 
                                                   ((IData)(vlSelfRef.cpu__DOT__alu_input_a) 
                                                    ^ (IData)(cpu__DOT__alu_input_b)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cpu__DOT__alu_sel))
                                                    ? 
                                                   ((IData)(vlSelfRef.cpu__DOT__alu_input_a) 
                                                    & (IData)(cpu__DOT__alu_input_b))
                                                    : 
                                                   (~ (IData)(vlSelfRef.cpu__DOT__alu_input_a)))))
                                      : ((4U & (IData)(vlSelfRef.cpu__DOT__alu_sel))
                                          ? ((2U & (IData)(vlSelfRef.cpu__DOT__alu_sel))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelfRef.cpu__DOT__alu_sel))
                                               ? 0U
                                               : ((IData)(vlSelfRef.cpu__DOT__alu_input_a) 
                                                  - (IData)(cpu__DOT__alu_input_b))))
                                          : ((2U & (IData)(vlSelfRef.cpu__DOT__alu_sel))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelfRef.cpu__DOT__alu_sel))
                                               ? 0U
                                               : ((IData)(vlSelfRef.cpu__DOT__alu_input_a) 
                                                  + (IData)(cpu__DOT__alu_input_b)))))));
    vlSelfRef.cpu__DOT__acc_data_in = (0xffU & ((0U 
                                                 == (IData)(vlSelfRef.cpu__DOT__acc_input_sel))
                                                 ? (IData)(cpu__DOT__alu_output)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.cpu__DOT__acc_input_sel))
                                                  ? (IData)(cpu__DOT__ram_data_out)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.cpu__DOT__acc_input_sel))
                                                   ? (IData)(vlSelfRef.cpu__DOT__rom_data_out)
                                                   : 0U))));
}

VL_ATTR_COLD void Vcpu___024root___eval_triggers__stl(Vcpu___024root* vlSelf);

VL_ATTR_COLD bool Vcpu___024root___eval_phase__stl(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__ico(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge cpu.ram_write_enable)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge cpu.ram_write_enable)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->pc_clr = VL_RAND_RESET_I(1);
    vlSelf->accumulator = VL_RAND_RESET_I(8);
    vlSelf->program_counter = VL_RAND_RESET_I(8);
    vlSelf->rom_output = VL_RAND_RESET_I(16);
    vlSelf->port1 = VL_RAND_RESET_I(8);
    vlSelf->port2 = VL_RAND_RESET_I(8);
    vlSelf->port3 = VL_RAND_RESET_I(8);
    vlSelf->port4 = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__acc_data_in = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__acc_write_enable = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__acc_enable_shift = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__acc_sel = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__acc_input_sel = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__alu_input_a = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__alu_sel = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__activate_jmp = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc_mode = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ram_address = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__ram_data_in = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__ram_write_enable = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rom_data_out = VL_RAND_RESET_I(16);
    vlSelf->cpu__DOT__ACC__DOT__register = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__PC__DOT__state = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->cpu__DOT__RAM__DOT__registers[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->cpu__DOT__ROM__DOT__read_only_mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cpu__DOT__ram_write_enable__0 = VL_RAND_RESET_I(1);
}
