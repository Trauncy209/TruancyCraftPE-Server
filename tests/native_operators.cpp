#include "network/NativeOperators.h"
#include <cassert>
int main(){assert(!NativeOperators::allowed("Probe"));assert(!NativeOperators::change("../Probe",true));assert(NativeOperators::change("Probe",true));assert(NativeOperators::allowed("Probe"));assert(NativeOperators::change("Probe",false));assert(!NativeOperators::allowed("Probe"));}
