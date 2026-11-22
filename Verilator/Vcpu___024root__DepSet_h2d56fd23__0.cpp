// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "Vcpu__pch.h"
#include "Vcpu___024root.h"

void Vcpu___024root___ico_sequent__TOP__0(Vcpu___024root* vlSelf);

void Vcpu___024root___eval_ico(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcpu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcpu___024root___ico_sequent__TOP__0(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ cpu__DOT__acc_input_sel;
    cpu__DOT__acc_input_sel = 0;
    CData/*7:0*/ cpu__DOT__alu_input_a;
    cpu__DOT__alu_input_a = 0;
    CData/*7:0*/ cpu__DOT__alu_input_b;
    cpu__DOT__alu_input_b = 0;
    CData/*3:0*/ cpu__DOT__alu_sel;
    cpu__DOT__alu_sel = 0;
    CData/*7:0*/ cpu__DOT__alu_output;
    cpu__DOT__alu_output = 0;
    CData/*7:0*/ cpu__DOT__ram_data_out;
    cpu__DOT__ram_data_out = 0;
    // Body
    vlSelfRef.cpu__DOT__ram_write_enable = 0U;
    vlSelfRef.cpu__DOT__acc_sel = 0U;
    vlSelfRef.cpu__DOT__acc_enable_shift = 0U;
    vlSelfRef.cpu__DOT__acc_write_enable = 0U;
    vlSelfRef.cpu__DOT__c_write = 0U;
    vlSelfRef.cpu__DOT__ram_data_in = 0U;
    cpu__DOT__acc_input_sel = 0U;
    cpu__DOT__alu_sel = 0U;
    cpu__DOT__alu_input_a = 0U;
    vlSelfRef.cpu__DOT__ram_address = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
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
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        vlSelfRef.cpu__DOT__c_write = 1U;
                                    }
                                }
                                cpu__DOT__alu_sel = 
                                    ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                      ? ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                          ? 0xbU : 0xaU)
                                      : ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                          ? 9U : 4U));
                                cpu__DOT__alu_input_a 
                                    = vlSelfRef.cpu__DOT__ACC__DOT__register;
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    vlSelfRef.cpu__DOT__c_write = 1U;
                                    cpu__DOT__alu_sel = 0U;
                                    cpu__DOT__alu_input_a 
                                        = vlSelfRef.cpu__DOT__ACC__DOT__register;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 0xaU)))) {
                                if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        vlSelfRef.cpu__DOT__c_write = 1U;
                                    }
                                } else if ((0x100U 
                                            & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    vlSelfRef.cpu__DOT__c_write = 1U;
                                }
                            }
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        cpu__DOT__alu_sel = 8U;
                                        cpu__DOT__alu_input_a 
                                            = vlSelfRef.cpu__DOT__ACC__DOT__register;
                                    }
                                } else {
                                    cpu__DOT__alu_sel 
                                        = ((0x100U 
                                            & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                            ? 0xbU : 0xaU);
                                    cpu__DOT__alu_input_a 
                                        = vlSelfRef.cpu__DOT__ACC__DOT__register;
                                }
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                cpu__DOT__alu_sel = 
                                    ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                      ? 9U : 4U);
                                cpu__DOT__alu_input_a 
                                    = vlSelfRef.cpu__DOT__ACC__DOT__register;
                            } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                cpu__DOT__alu_sel = 0U;
                                cpu__DOT__alu_input_a 
                                    = vlSelfRef.cpu__DOT__ACC__DOT__register;
                            }
                        }
                    }
                    if ((0x1000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                      >> 0xbU)))) {
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 9U)))) {
                                    vlSelfRef.cpu__DOT__acc_sel 
                                        = ((0x100U 
                                            & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                            ? 0U : 1U);
                                    vlSelfRef.cpu__DOT__acc_enable_shift = 1U;
                                }
                                if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                        cpu__DOT__acc_input_sel = 1U;
                                    }
                                } else {
                                    vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                }
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__acc_sel 
                                    = ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                        ? 3U : 2U);
                                vlSelfRef.cpu__DOT__acc_enable_shift = 1U;
                                vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            }
                        }
                    } else if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            cpu__DOT__acc_input_sel = 0U;
                        } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                cpu__DOT__acc_input_sel = 0U;
                            }
                        } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            cpu__DOT__acc_input_sel = 2U;
                        }
                    } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 8U)))) {
                                vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                cpu__DOT__acc_input_sel = 0U;
                            }
                        } else {
                            vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            cpu__DOT__acc_input_sel = 0U;
                        }
                    } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                        cpu__DOT__acc_input_sel = 0U;
                    } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                        cpu__DOT__acc_input_sel = 0U;
                    }
                }
                if ((0x2000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                  >> 0xcU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                      >> 0xbU)))) {
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        vlSelfRef.cpu__DOT__ram_address = 0U;
                                    }
                                }
                            } else {
                                vlSelfRef.cpu__DOT__ram_address = 0U;
                            }
                        }
                    }
                } else if ((0x1000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__ram_address = 0U;
                            } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__ram_address = 0U;
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 8U)))) {
                                vlSelfRef.cpu__DOT__ram_address 
                                    = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                            }
                        }
                    }
                } else if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        vlSelfRef.cpu__DOT__ram_address 
                            = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                    } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        vlSelfRef.cpu__DOT__ram_address 
                            = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                    }
                }
            }
        }
    }
    cpu__DOT__ram_data_out = ((0xfeU == (IData)(vlSelfRef.cpu__DOT__ram_address))
                               ? (IData)(vlSelfRef.port3)
                               : ((0xffU == (IData)(vlSelfRef.cpu__DOT__ram_address))
                                   ? (IData)(vlSelfRef.port4)
                                   : vlSelfRef.cpu__DOT__RAM__DOT__registers
                                  [vlSelfRef.cpu__DOT__ram_address]));
    vlSelfRef.cpu__DOT__pc_mode = 0U;
    vlSelfRef.cpu__DOT__activate_jmp = 0U;
    cpu__DOT__alu_input_b = 0U;
    if (vlSelfRef.enable) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                      >> 0xfU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                          >> 0xeU)))) {
                if ((0x2000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                  >> 0xcU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                      >> 0xbU)))) {
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                             < (IData)(cpu__DOT__ram_data_out))) {
                                            vlSelfRef.cpu__DOT__pc_mode = 1U;
                                            vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                        }
                                    }
                                }
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                         < (IData)(cpu__DOT__ram_data_out))) {
                                        vlSelfRef.cpu__DOT__pc_mode = 0U;
                                        vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                    }
                                } else if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                            > (IData)(cpu__DOT__ram_data_out))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 1U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                     > (IData)(cpu__DOT__ram_data_out))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 0U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            } else if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                        != (IData)(cpu__DOT__ram_data_out))) {
                                vlSelfRef.cpu__DOT__pc_mode = 1U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        }
                    }
                } else if ((0x1000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                         != (IData)(cpu__DOT__ram_data_out))) {
                                        vlSelfRef.cpu__DOT__pc_mode = 0U;
                                        vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                    }
                                } else if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                            == (IData)(cpu__DOT__ram_data_out))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 1U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                     == (IData)(cpu__DOT__ram_data_out))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 0U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            } else if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__c_flag)))) {
                                vlSelfRef.cpu__DOT__pc_mode = 1U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__c_flag)))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 0U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            } else if (vlSelfRef.cpu__DOT__c_flag) {
                                vlSelfRef.cpu__DOT__pc_mode = 1U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if (vlSelfRef.cpu__DOT__c_flag) {
                                vlSelfRef.cpu__DOT__pc_mode = 0U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        } else if ((0U != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register))) {
                            vlSelfRef.cpu__DOT__pc_mode = 1U;
                            vlSelfRef.cpu__DOT__activate_jmp = 1U;
                        }
                    } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0U != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 0U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                         >> 9U)))) {
                        if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register)))))) {
                                vlSelfRef.cpu__DOT__pc_mode = 1U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        } else if ((1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register)))))) {
                            vlSelfRef.cpu__DOT__pc_mode = 0U;
                            vlSelfRef.cpu__DOT__activate_jmp = 1U;
                        }
                    }
                } else if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 8U)))) {
                                vlSelfRef.cpu__DOT__pc_mode = 1U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        }
                    }
                } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            vlSelfRef.cpu__DOT__pc_mode = 0U;
                            vlSelfRef.cpu__DOT__activate_jmp = 1U;
                        }
                    }
                }
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
    vlSelfRef.cpu__DOT__carry_flag = 0U;
    if ((8U & (IData)(cpu__DOT__alu_sel))) {
        if ((4U & (IData)(cpu__DOT__alu_sel))) {
            vlSelfRef.cpu__DOT__carry_flag = 0U;
            cpu__DOT__alu_output = (0xffU & 0U);
        } else {
            cpu__DOT__alu_output = (0xffU & ((2U & (IData)(cpu__DOT__alu_sel))
                                              ? ((1U 
                                                  & (IData)(cpu__DOT__alu_sel))
                                                  ? 
                                                 ((IData)(cpu__DOT__alu_input_a) 
                                                  | (IData)(cpu__DOT__alu_input_b))
                                                  : 
                                                 ((IData)(cpu__DOT__alu_input_a) 
                                                  ^ (IData)(cpu__DOT__alu_input_b)))
                                              : ((1U 
                                                  & (IData)(cpu__DOT__alu_sel))
                                                  ? 
                                                 ((IData)(cpu__DOT__alu_input_a) 
                                                  & (IData)(cpu__DOT__alu_input_b))
                                                  : 
                                                 (~ (IData)(cpu__DOT__alu_input_a)))));
        }
    } else if ((4U & (IData)(cpu__DOT__alu_sel))) {
        vlSelfRef.cpu__DOT__carry_flag = ((1U & (~ 
                                                 ((IData)(cpu__DOT__alu_sel) 
                                                  >> 1U))) 
                                          && ((1U & 
                                               (~ (IData)(cpu__DOT__alu_sel))) 
                                              && ((IData)(cpu__DOT__alu_input_a) 
                                                  < (IData)(cpu__DOT__alu_input_b))));
        cpu__DOT__alu_output = (0xffU & ((2U & (IData)(cpu__DOT__alu_sel))
                                          ? 0U : ((1U 
                                                   & (IData)(cpu__DOT__alu_sel))
                                                   ? 0U
                                                   : 
                                                  ((IData)(cpu__DOT__alu_input_a) 
                                                   - (IData)(cpu__DOT__alu_input_b)))));
    } else {
        vlSelfRef.cpu__DOT__carry_flag = ((1U & (~ 
                                                 ((IData)(cpu__DOT__alu_sel) 
                                                  >> 1U))) 
                                          && ((1U & 
                                               (~ (IData)(cpu__DOT__alu_sel))) 
                                              && (1U 
                                                  & (((IData)(cpu__DOT__alu_input_a) 
                                                      + (IData)(cpu__DOT__alu_input_b)) 
                                                     >> 8U))));
        cpu__DOT__alu_output = (0xffU & ((2U & (IData)(cpu__DOT__alu_sel))
                                          ? 0U : ((1U 
                                                   & (IData)(cpu__DOT__alu_sel))
                                                   ? 0U
                                                   : 
                                                  ((IData)(cpu__DOT__alu_input_a) 
                                                   + (IData)(cpu__DOT__alu_input_b)))));
    }
    vlSelfRef.cpu__DOT__acc_data_in = (0xffU & ((0U 
                                                 == (IData)(cpu__DOT__acc_input_sel))
                                                 ? (IData)(cpu__DOT__alu_output)
                                                 : 
                                                ((1U 
                                                  == (IData)(cpu__DOT__acc_input_sel))
                                                  ? (IData)(cpu__DOT__ram_data_out)
                                                  : 
                                                 ((2U 
                                                   == (IData)(cpu__DOT__acc_input_sel))
                                                   ? (IData)(vlSelfRef.cpu__DOT__rom_data_out)
                                                   : 0U))));
}

void Vcpu___024root___eval_triggers__ico(Vcpu___024root* vlSelf);

bool Vcpu___024root___eval_phase__ico(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcpu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcpu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcpu___024root___eval_act(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcpu___024root___nba_sequent__TOP__0(Vcpu___024root* vlSelf);

void Vcpu___024root___eval_nba(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__0(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ cpu__DOT__acc_input_sel;
    cpu__DOT__acc_input_sel = 0;
    CData/*7:0*/ cpu__DOT__alu_input_a;
    cpu__DOT__alu_input_a = 0;
    CData/*7:0*/ cpu__DOT__alu_input_b;
    cpu__DOT__alu_input_b = 0;
    CData/*3:0*/ cpu__DOT__alu_sel;
    cpu__DOT__alu_sel = 0;
    CData/*7:0*/ cpu__DOT__alu_output;
    cpu__DOT__alu_output = 0;
    CData/*7:0*/ cpu__DOT__ram_data_out;
    cpu__DOT__ram_data_out = 0;
    CData/*7:0*/ __Vdly__cpu__DOT__ACC__DOT__register;
    __Vdly__cpu__DOT__ACC__DOT__register = 0;
    CData/*7:0*/ __VdlyVal__cpu__DOT__RAM__DOT__registers__v0;
    __VdlyVal__cpu__DOT__RAM__DOT__registers__v0 = 0;
    CData/*7:0*/ __VdlyDim0__cpu__DOT__RAM__DOT__registers__v0;
    __VdlyDim0__cpu__DOT__RAM__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu__DOT__RAM__DOT__registers__v0;
    __VdlySet__cpu__DOT__RAM__DOT__registers__v0 = 0;
    // Body
    __Vdly__cpu__DOT__ACC__DOT__register = vlSelfRef.cpu__DOT__ACC__DOT__register;
    __VdlySet__cpu__DOT__RAM__DOT__registers__v0 = 0U;
    if (((IData)(vlSelfRef.cpu__DOT__acc_write_enable) 
         & (~ (IData)(vlSelfRef.cpu__DOT__acc_enable_shift)))) {
        __Vdly__cpu__DOT__ACC__DOT__register = vlSelfRef.cpu__DOT__acc_data_in;
    }
    if (((IData)(vlSelfRef.cpu__DOT__acc_write_enable) 
         & (IData)(vlSelfRef.cpu__DOT__acc_enable_shift))) {
        __Vdly__cpu__DOT__ACC__DOT__register = ((2U 
                                                 & (IData)(vlSelfRef.cpu__DOT__acc_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.cpu__DOT__acc_sel))
                                                  ? 
                                                 ((0xfeU 
                                                   & ((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                                        >> 7U)))
                                                  : 
                                                 ((0x80U 
                                                   & ((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                                        >> 1U))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.cpu__DOT__acc_sel))
                                                  ? 
                                                 (0x7fU 
                                                  & ((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                                     >> 1U))
                                                  : 
                                                 (0xfeU 
                                                  & ((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                                     << 1U))));
    }
    if (vlSelfRef.cpu__DOT__ram_write_enable) {
        __VdlyVal__cpu__DOT__RAM__DOT__registers__v0 
            = vlSelfRef.cpu__DOT__ram_data_in;
        __VdlyDim0__cpu__DOT__RAM__DOT__registers__v0 
            = vlSelfRef.cpu__DOT__ram_address;
        __VdlySet__cpu__DOT__RAM__DOT__registers__v0 = 1U;
    }
    if (vlSelfRef.pc_clr) {
        vlSelfRef.cpu__DOT__PC__DOT__state = 0U;
        vlSelfRef.cpu__DOT__c_flag = 0U;
    } else {
        vlSelfRef.cpu__DOT__PC__DOT__state = (0xffffU 
                                              & ((IData)(vlSelfRef.cpu__DOT__activate_jmp)
                                                  ? 
                                                 ((IData)(vlSelfRef.cpu__DOT__pc_mode)
                                                   ? 
                                                  ((IData)(vlSelfRef.cpu__DOT__PC__DOT__state) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.cpu__DOT__rom_data_out)))
                                                   : 
                                                  ((IData)(vlSelfRef.cpu__DOT__PC__DOT__state) 
                                                   + 
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.cpu__DOT__rom_data_out))))
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.cpu__DOT__PC__DOT__state))));
        if (vlSelfRef.cpu__DOT__c_write) {
            vlSelfRef.cpu__DOT__c_flag = vlSelfRef.cpu__DOT__carry_flag;
        }
    }
    vlSelfRef.cpu__DOT__ACC__DOT__register = __Vdly__cpu__DOT__ACC__DOT__register;
    if (__VdlySet__cpu__DOT__RAM__DOT__registers__v0) {
        vlSelfRef.cpu__DOT__RAM__DOT__registers[__VdlyDim0__cpu__DOT__RAM__DOT__registers__v0] 
            = __VdlyVal__cpu__DOT__RAM__DOT__registers__v0;
    }
    vlSelfRef.accumulator = vlSelfRef.cpu__DOT__ACC__DOT__register;
    vlSelfRef.port1 = vlSelfRef.cpu__DOT__RAM__DOT__registers
        [0xfcU];
    vlSelfRef.port2 = vlSelfRef.cpu__DOT__RAM__DOT__registers
        [0xfdU];
    vlSelfRef.program_counter = vlSelfRef.cpu__DOT__PC__DOT__state;
    vlSelfRef.rom_output = vlSelfRef.cpu__DOT__ROM__DOT__read_only_mem
        [vlSelfRef.cpu__DOT__PC__DOT__state];
    vlSelfRef.cpu__DOT__rom_data_out = vlSelfRef.cpu__DOT__ROM__DOT__read_only_mem
        [vlSelfRef.cpu__DOT__PC__DOT__state];
    vlSelfRef.cpu__DOT__ram_write_enable = 0U;
    vlSelfRef.cpu__DOT__acc_sel = 0U;
    vlSelfRef.cpu__DOT__acc_enable_shift = 0U;
    vlSelfRef.cpu__DOT__acc_write_enable = 0U;
    vlSelfRef.cpu__DOT__c_write = 0U;
    vlSelfRef.cpu__DOT__ram_data_in = 0U;
    cpu__DOT__acc_input_sel = 0U;
    cpu__DOT__alu_sel = 0U;
    cpu__DOT__alu_input_a = 0U;
    vlSelfRef.cpu__DOT__ram_address = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
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
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        vlSelfRef.cpu__DOT__c_write = 1U;
                                    }
                                }
                                cpu__DOT__alu_sel = 
                                    ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                      ? ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                          ? 0xbU : 0xaU)
                                      : ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                          ? 9U : 4U));
                                cpu__DOT__alu_input_a 
                                    = vlSelfRef.cpu__DOT__ACC__DOT__register;
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    vlSelfRef.cpu__DOT__c_write = 1U;
                                    cpu__DOT__alu_sel = 0U;
                                    cpu__DOT__alu_input_a 
                                        = vlSelfRef.cpu__DOT__ACC__DOT__register;
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 0xaU)))) {
                                if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        vlSelfRef.cpu__DOT__c_write = 1U;
                                    }
                                } else if ((0x100U 
                                            & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    vlSelfRef.cpu__DOT__c_write = 1U;
                                }
                            }
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        cpu__DOT__alu_sel = 8U;
                                        cpu__DOT__alu_input_a 
                                            = vlSelfRef.cpu__DOT__ACC__DOT__register;
                                    }
                                } else {
                                    cpu__DOT__alu_sel 
                                        = ((0x100U 
                                            & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                            ? 0xbU : 0xaU);
                                    cpu__DOT__alu_input_a 
                                        = vlSelfRef.cpu__DOT__ACC__DOT__register;
                                }
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                cpu__DOT__alu_sel = 
                                    ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                      ? 9U : 4U);
                                cpu__DOT__alu_input_a 
                                    = vlSelfRef.cpu__DOT__ACC__DOT__register;
                            } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                cpu__DOT__alu_sel = 0U;
                                cpu__DOT__alu_input_a 
                                    = vlSelfRef.cpu__DOT__ACC__DOT__register;
                            }
                        }
                    }
                    if ((0x1000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                      >> 0xbU)))) {
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 9U)))) {
                                    vlSelfRef.cpu__DOT__acc_sel 
                                        = ((0x100U 
                                            & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                            ? 0U : 1U);
                                    vlSelfRef.cpu__DOT__acc_enable_shift = 1U;
                                }
                                if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                        cpu__DOT__acc_input_sel = 1U;
                                    }
                                } else {
                                    vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                }
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__acc_sel 
                                    = ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))
                                        ? 3U : 2U);
                                vlSelfRef.cpu__DOT__acc_enable_shift = 1U;
                                vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            }
                        }
                    } else if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            cpu__DOT__acc_input_sel = 0U;
                        } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                cpu__DOT__acc_input_sel = 0U;
                            }
                        } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            cpu__DOT__acc_input_sel = 2U;
                        }
                    } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 8U)))) {
                                vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                                cpu__DOT__acc_input_sel = 0U;
                            }
                        } else {
                            vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                            cpu__DOT__acc_input_sel = 0U;
                        }
                    } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                        cpu__DOT__acc_input_sel = 0U;
                    } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        vlSelfRef.cpu__DOT__acc_write_enable = 1U;
                        cpu__DOT__acc_input_sel = 0U;
                    }
                }
                if ((0x2000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                  >> 0xcU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                      >> 0xbU)))) {
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        vlSelfRef.cpu__DOT__ram_address = 0U;
                                    }
                                }
                            } else {
                                vlSelfRef.cpu__DOT__ram_address = 0U;
                            }
                        }
                    }
                } else if ((0x1000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__ram_address = 0U;
                            } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                vlSelfRef.cpu__DOT__ram_address = 0U;
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 8U)))) {
                                vlSelfRef.cpu__DOT__ram_address 
                                    = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                            }
                        }
                    }
                } else if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        vlSelfRef.cpu__DOT__ram_address 
                            = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                    } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        vlSelfRef.cpu__DOT__ram_address 
                            = (0xffU & (IData)(vlSelfRef.cpu__DOT__rom_data_out));
                    }
                }
            }
        }
    }
    cpu__DOT__ram_data_out = ((0xfeU == (IData)(vlSelfRef.cpu__DOT__ram_address))
                               ? (IData)(vlSelfRef.port3)
                               : ((0xffU == (IData)(vlSelfRef.cpu__DOT__ram_address))
                                   ? (IData)(vlSelfRef.port4)
                                   : vlSelfRef.cpu__DOT__RAM__DOT__registers
                                  [vlSelfRef.cpu__DOT__ram_address]));
    vlSelfRef.cpu__DOT__pc_mode = 0U;
    vlSelfRef.cpu__DOT__activate_jmp = 0U;
    cpu__DOT__alu_input_b = 0U;
    if (vlSelfRef.enable) {
        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                      >> 0xfU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                          >> 0xeU)))) {
                if ((0x2000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                  >> 0xcU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                      >> 0xbU)))) {
                            if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                              >> 9U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                                  >> 8U)))) {
                                        if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                             < (IData)(cpu__DOT__ram_data_out))) {
                                            vlSelfRef.cpu__DOT__pc_mode = 1U;
                                            vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                        }
                                    }
                                }
                            } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                         < (IData)(cpu__DOT__ram_data_out))) {
                                        vlSelfRef.cpu__DOT__pc_mode = 0U;
                                        vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                    }
                                } else if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                            > (IData)(cpu__DOT__ram_data_out))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 1U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                     > (IData)(cpu__DOT__ram_data_out))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 0U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            } else if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                        != (IData)(cpu__DOT__ram_data_out))) {
                                vlSelfRef.cpu__DOT__pc_mode = 1U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        }
                    }
                } else if ((0x1000U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                    if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                         != (IData)(cpu__DOT__ram_data_out))) {
                                        vlSelfRef.cpu__DOT__pc_mode = 0U;
                                        vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                    }
                                } else if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                            == (IData)(cpu__DOT__ram_data_out))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 1U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if (((IData)(vlSelfRef.cpu__DOT__ACC__DOT__register) 
                                     == (IData)(cpu__DOT__ram_data_out))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 0U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            } else if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__c_flag)))) {
                                vlSelfRef.cpu__DOT__pc_mode = 1U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        } else if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((1U & (~ (IData)(vlSelfRef.cpu__DOT__c_flag)))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 0U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            } else if (vlSelfRef.cpu__DOT__c_flag) {
                                vlSelfRef.cpu__DOT__pc_mode = 1U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        } else if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if (vlSelfRef.cpu__DOT__c_flag) {
                                vlSelfRef.cpu__DOT__pc_mode = 0U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        } else if ((0U != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register))) {
                            vlSelfRef.cpu__DOT__pc_mode = 1U;
                            vlSelfRef.cpu__DOT__activate_jmp = 1U;
                        }
                    } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                                if ((0U != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register))) {
                                    vlSelfRef.cpu__DOT__pc_mode = 0U;
                                    vlSelfRef.cpu__DOT__activate_jmp = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                         >> 9U)))) {
                        if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            if ((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register)))))) {
                                vlSelfRef.cpu__DOT__pc_mode = 1U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        } else if ((1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.cpu__DOT__ACC__DOT__register)))))) {
                            vlSelfRef.cpu__DOT__pc_mode = 0U;
                            vlSelfRef.cpu__DOT__activate_jmp = 1U;
                        }
                    }
                } else if ((0x800U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cpu__DOT__rom_data_out) 
                                          >> 8U)))) {
                                vlSelfRef.cpu__DOT__pc_mode = 1U;
                                vlSelfRef.cpu__DOT__activate_jmp = 1U;
                            }
                        }
                    }
                } else if ((0x400U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                    if ((0x200U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                        if ((0x100U & (IData)(vlSelfRef.cpu__DOT__rom_data_out))) {
                            vlSelfRef.cpu__DOT__pc_mode = 0U;
                            vlSelfRef.cpu__DOT__activate_jmp = 1U;
                        }
                    }
                }
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
    vlSelfRef.cpu__DOT__carry_flag = 0U;
    if ((8U & (IData)(cpu__DOT__alu_sel))) {
        if ((4U & (IData)(cpu__DOT__alu_sel))) {
            vlSelfRef.cpu__DOT__carry_flag = 0U;
            cpu__DOT__alu_output = (0xffU & 0U);
        } else {
            cpu__DOT__alu_output = (0xffU & ((2U & (IData)(cpu__DOT__alu_sel))
                                              ? ((1U 
                                                  & (IData)(cpu__DOT__alu_sel))
                                                  ? 
                                                 ((IData)(cpu__DOT__alu_input_a) 
                                                  | (IData)(cpu__DOT__alu_input_b))
                                                  : 
                                                 ((IData)(cpu__DOT__alu_input_a) 
                                                  ^ (IData)(cpu__DOT__alu_input_b)))
                                              : ((1U 
                                                  & (IData)(cpu__DOT__alu_sel))
                                                  ? 
                                                 ((IData)(cpu__DOT__alu_input_a) 
                                                  & (IData)(cpu__DOT__alu_input_b))
                                                  : 
                                                 (~ (IData)(cpu__DOT__alu_input_a)))));
        }
    } else if ((4U & (IData)(cpu__DOT__alu_sel))) {
        vlSelfRef.cpu__DOT__carry_flag = ((1U & (~ 
                                                 ((IData)(cpu__DOT__alu_sel) 
                                                  >> 1U))) 
                                          && ((1U & 
                                               (~ (IData)(cpu__DOT__alu_sel))) 
                                              && ((IData)(cpu__DOT__alu_input_a) 
                                                  < (IData)(cpu__DOT__alu_input_b))));
        cpu__DOT__alu_output = (0xffU & ((2U & (IData)(cpu__DOT__alu_sel))
                                          ? 0U : ((1U 
                                                   & (IData)(cpu__DOT__alu_sel))
                                                   ? 0U
                                                   : 
                                                  ((IData)(cpu__DOT__alu_input_a) 
                                                   - (IData)(cpu__DOT__alu_input_b)))));
    } else {
        vlSelfRef.cpu__DOT__carry_flag = ((1U & (~ 
                                                 ((IData)(cpu__DOT__alu_sel) 
                                                  >> 1U))) 
                                          && ((1U & 
                                               (~ (IData)(cpu__DOT__alu_sel))) 
                                              && (1U 
                                                  & (((IData)(cpu__DOT__alu_input_a) 
                                                      + (IData)(cpu__DOT__alu_input_b)) 
                                                     >> 8U))));
        cpu__DOT__alu_output = (0xffU & ((2U & (IData)(cpu__DOT__alu_sel))
                                          ? 0U : ((1U 
                                                   & (IData)(cpu__DOT__alu_sel))
                                                   ? 0U
                                                   : 
                                                  ((IData)(cpu__DOT__alu_input_a) 
                                                   + (IData)(cpu__DOT__alu_input_b)))));
    }
    vlSelfRef.cpu__DOT__acc_data_in = (0xffU & ((0U 
                                                 == (IData)(cpu__DOT__acc_input_sel))
                                                 ? (IData)(cpu__DOT__alu_output)
                                                 : 
                                                ((1U 
                                                  == (IData)(cpu__DOT__acc_input_sel))
                                                  ? (IData)(cpu__DOT__ram_data_out)
                                                  : 
                                                 ((2U 
                                                   == (IData)(cpu__DOT__acc_input_sel))
                                                   ? (IData)(vlSelfRef.cpu__DOT__rom_data_out)
                                                   : 0U))));
}

void Vcpu___024root___eval_triggers__act(Vcpu___024root* vlSelf);

bool Vcpu___024root___eval_phase__act(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcpu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu___024root___eval_phase__nba(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcpu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__ico(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vcpu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/cpu.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcpu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcpu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/cpu.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/cpu.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcpu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcpu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.pc_clr & 0xfeU))) {
        Verilated::overWidthError("pc_clr");}
}
#endif  // VL_DEBUG
