#ifndef __MAIN_H
#define __MAIN_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
class Main__ChallengeInput;
class WebNode;
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
class Solver;
class Main : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void main(x10::lang::Rail<x10::lang::String* >* args);
    static x10_double run_one_test(Main__ChallengeInput input);
    static x10_double median(x10_double v1, x10_double v2, x10_double v3);
    virtual Main* Main____this__Main();
    void _constructor();
    
    static Main* _make();
    
    virtual void __fieldInitializers_Main();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // MAIN_H

class Main;

#ifndef MAIN_H_NODEPS
#define MAIN_H_NODEPS
#ifndef MAIN_H_GENERICS
#define MAIN_H_GENERICS
#endif // MAIN_H_GENERICS
#endif // __MAIN_H_NODEPS
