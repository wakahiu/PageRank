#ifndef __MAIN__CHALLENGEINPUT_H
#define __MAIN__CHALLENGEINPUT_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
class WebNode;
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
class Main__ChallengeInput   {
    public:
    RTT_H_DECLS_STRUCT
    
    Main__ChallengeInput* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<Main__ChallengeInput > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static Main__ChallengeInput _alloc(){Main__ChallengeInput t; return t; }
    
    x10::lang::Rail<WebNode* >* FMGL(webGraph);
    
    x10_double FMGL(dampingFactor);
    
    x10_double FMGL(epsilon);
    
    x10::util::ArrayList<x10_double>* FMGL(solutions);
    
    x10_double FMGL(baseline_time);
    
    void _constructor(x10::lang::Rail<WebNode* >* webGraph, x10_double dampingFactor,
                      x10_double epsilon, x10::util::ArrayList<x10_double>* solutions,
                      x10_double time);
    
    static Main__ChallengeInput _make(x10::lang::Rail<WebNode* >* webGraph,
                                      x10_double dampingFactor,
                                      x10_double epsilon,
                                      x10::util::ArrayList<x10_double>* solutions,
                                      x10_double time);
    
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(Main__ChallengeInput other) {
        
        //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(webGraph),
                                      other->FMGL(webGraph))) &&
        (x10aux::struct_equals((*this)->FMGL(dampingFactor),
                               other->FMGL(dampingFactor))) &&
        (x10aux::struct_equals((*this)->FMGL(epsilon), other->
                                                         FMGL(epsilon))) &&
        (x10aux::struct_equals((*this)->FMGL(solutions), other->
                                                           FMGL(solutions))) &&
        (x10aux::struct_equals((*this)->FMGL(baseline_time),
                               other->FMGL(baseline_time)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(Main__ChallengeInput other) {
        
        //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(webGraph),
                                      other->FMGL(webGraph))) &&
        (x10aux::struct_equals((*this)->FMGL(dampingFactor),
                               other->FMGL(dampingFactor))) &&
        (x10aux::struct_equals((*this)->FMGL(epsilon), other->
                                                         FMGL(epsilon))) &&
        (x10aux::struct_equals((*this)->FMGL(solutions), other->
                                                           FMGL(solutions))) &&
        (x10aux::struct_equals((*this)->FMGL(baseline_time),
                               other->FMGL(baseline_time)));
        
    }
    Main__ChallengeInput Main__ChallengeInput____this__Main__ChallengeInput(
      ) {
        
        //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    void __fieldInitializers_Main_ChallengeInput() {
     
    }
    
    static void _serialize(Main__ChallengeInput this_, x10aux::serialization_buffer& buf);
    
    static Main__ChallengeInput _deserialize(x10aux::deserialization_buffer& buf) {
        Main__ChallengeInput this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // MAIN__CHALLENGEINPUT_H

class Main__ChallengeInput;

#ifndef MAIN__CHALLENGEINPUT_H_NODEPS
#define MAIN__CHALLENGEINPUT_H_NODEPS
#ifndef MAIN__CHALLENGEINPUT_H_GENERICS
#define MAIN__CHALLENGEINPUT_H_GENERICS
#endif // MAIN__CHALLENGEINPUT_H_GENERICS
#endif // __MAIN__CHALLENGEINPUT_H_NODEPS
