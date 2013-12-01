#ifndef __SOLVER__NODEPROB_H
#define __SOLVER__NODEPROB_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
class Solver;
class Solver__NodeProb : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    Solver* FMGL(out__);
    
    x10_long FMGL(id);
    
    x10_double FMGL(prob);
    
    Solver__NodeProb* FMGL(next);
    
    void _constructor(Solver* out__, x10_long id, x10_double prob);
    
    static Solver__NodeProb* _make(Solver* out__, x10_long id, x10_double prob);
    
    void _constructor(Solver* out__, x10_long id, x10_double prob, Solver__NodeProb* next);
    
    static Solver__NodeProb* _make(Solver* out__, x10_long id, x10_double prob,
                                   Solver__NodeProb* next);
    
    virtual Solver__NodeProb* Solver__NodeProb____this__Solver__NodeProb(
      );
    virtual Solver* Solver__NodeProb____this__Solver();
    virtual void __fieldInitializers_Solver_NodeProb();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // SOLVER__NODEPROB_H

class Solver__NodeProb;

#ifndef SOLVER__NODEPROB_H_NODEPS
#define SOLVER__NODEPROB_H_NODEPS
#ifndef SOLVER__NODEPROB_H_GENERICS
#define SOLVER__NODEPROB_H_GENERICS
#endif // SOLVER__NODEPROB_H_GENERICS
#endif // __SOLVER__NODEPROB_H_NODEPS
