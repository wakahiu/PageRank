#ifndef __SOLVER__MATRIX_H
#define __SOLVER__MATRIX_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
class Solver;
class Solver__NodeProb;
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
class Solver__Matrix : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    Solver* FMGL(out__);
    
    Solver__NodeProb* FMGL(last);
    
    x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >* FMGL(pages);
    
    void _constructor(Solver* out__, x10_long n);
    
    static Solver__Matrix* _make(Solver* out__, x10_long n);
    
    virtual void setPages(x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >* pg);
    virtual Solver__Matrix* Solver__Matrix____this__Solver__Matrix();
    virtual Solver* Solver__Matrix____this__Solver();
    virtual void __fieldInitializers_Solver_Matrix();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // SOLVER__MATRIX_H

class Solver__Matrix;

#ifndef SOLVER__MATRIX_H_NODEPS
#define SOLVER__MATRIX_H_NODEPS
#ifndef SOLVER__MATRIX_H_GENERICS
#define SOLVER__MATRIX_H_GENERICS
#endif // SOLVER__MATRIX_H_GENERICS
#endif // __SOLVER__MATRIX_H_NODEPS
