// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"


class Vcpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ cpu__DOT__ram_write_enable;
    VL_IN8(enable,0,0);
    VL_IN8(pc_clr,0,0);
    VL_OUT8(accumulator,7,0);
    VL_OUT8(program_counter,7,0);
    VL_OUT8(port1,7,0);
    VL_OUT8(port2,7,0);
    VL_OUT8(port3,7,0);
    VL_OUT8(port4,7,0);
    CData/*7:0*/ cpu__DOT__acc_data_in;
    CData/*0:0*/ cpu__DOT__acc_write_enable;
    CData/*0:0*/ cpu__DOT__acc_enable_shift;
    CData/*1:0*/ cpu__DOT__acc_sel;
    CData/*1:0*/ cpu__DOT__acc_input_sel;
    CData/*7:0*/ cpu__DOT__alu_input_a;
    CData/*3:0*/ cpu__DOT__alu_sel;
    CData/*0:0*/ cpu__DOT__activate_jmp;
    CData/*0:0*/ cpu__DOT__pc_mode;
    CData/*7:0*/ cpu__DOT__ram_address;
    CData/*7:0*/ cpu__DOT__ram_data_in;
    CData/*7:0*/ cpu__DOT__ACC__DOT__register;
    CData/*7:0*/ cpu__DOT__PC__DOT__state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu__DOT__ram_write_enable__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(rom_output,15,0);
    SData/*15:0*/ cpu__DOT__rom_data_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 256> cpu__DOT__RAM__DOT__registers;
    VlUnpacked<SData/*15:0*/, 256> cpu__DOT__ROM__DOT__read_only_mem;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* v__name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
