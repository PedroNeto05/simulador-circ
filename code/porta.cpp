#include "porta.h"

///
/// AS PORTAS
///

/// Porta NOT
bool PortaNOT::simular(const std::vector<bool3S>& in_port){
    if (in_port.size() != 1) return false;
    setOutput(~in_port.at(0));
    return true;
}

/// Porta AND
bool PortaAND::simular(const std::vector<bool3S>& in_port){
    if (Nin_port == 0 || in_port.size() != (unsigned long long)getNumInputs()) return false;
    if (Nin_port == 0 || in_port.size() != (unsigned long long)getNumInputs()) return false;
    bool3S output = in_port.at(0);
    for (int i = 1; i < getNumInputs(); ++i){
        output &= in_port.at(i);
    }
    setOutput(output);
    return true;
}

/// Porta NAND
bool PortaNAND::simular(const std::vector<bool3S>& in_port){
    if (Nin_port == 0 || in_port.size() != (unsigned long long)getNumInputs()) return false;
    bool3S output = in_port.at(0);
    for (int i = 1; i < getNumInputs(); ++i){
        output &= in_port.at(i) ;
    }
    output = ~output;
    setOutput(output);
    return true;
}
/// Porta OR
bool PortaOR::simular(const std::vector<bool3S>& in_port){
    if (Nin_port == 0 || in_port.size() != (unsigned long long)getNumInputs()) return false;
    bool3S output = in_port.at(0);
    for (int i = 1; i < getNumInputs(); ++i){
        output |= in_port.at(i);
    }
    setOutput(output);
    return true;
}

/// Porta NOR
bool PortaNOR::simular(const std::vector<bool3S>& in_port){
    if (Nin_port == 0 || in_port.size() != (unsigned long long)getNumInputs()) return false;
    bool3S output = in_port.at(0);
    for (int i = 1; i < getNumInputs(); ++i){
        output |= in_port.at(i);
    }
    output = ~output;
    setOutput(output);
    return true;
}

/// Porta XOR
bool PortaXOR::simular(const std::vector<bool3S>& in_port){
    if (Nin_port == 0 || in_port.size() != (unsigned long long)getNumInputs()) return false;
    bool3S output = in_port.at(0);
    for (int i = 1; i < getNumInputs(); ++i){
        output ^= in_port.at(i);
    }
    setOutput(output);
    return true;
}

/// Porta NXOR
bool PortaNXOR::simular(const std::vector<bool3S>& in_port){
    if (Nin_port == 0 || in_port.size() != (unsigned long long)getNumInputs()) return false;
    bool3S output = in_port.at(0);
    for (int i = 1; i < getNumInputs(); ++i){
        output ^= in_port.at(i);
    }
    output = ~output;
    setOutput(output);
    return true;
}
