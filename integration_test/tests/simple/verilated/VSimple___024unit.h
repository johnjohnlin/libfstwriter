// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimple.h for the primary calling header

#ifndef VERILATED_VSIMPLE___024UNIT_H_
#define VERILATED_VSIMPLE___024UNIT_H_  // guard

#include "verilated.h"


class VSimple__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSimple___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VSimple__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSimple___024unit(VSimple__Syms* symsp, const char* v__name);
    ~VSimple___024unit();
    VL_UNCOPYABLE(VSimple___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
