#ifndef __SOLVER__MATRIXROW_H
#define __SOLVER__MATRIXROW_H

#include <x10rt.h>


class Solver;
class Solver__NodeProb;
class Solver__MatrixRow : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    Solver* FMGL(out__);
    
    Solver__NodeProb* FMGL(last);
    
    void _constructor(Solver* out__);
    
    static Solver__MatrixRow* _make(Solver* out__);
    
    virtual Solver__MatrixRow* Solver__MatrixRow____this__Solver__MatrixRow(
      );
    virtual Solver* Solver__MatrixRow____this__Solver();
    virtual void __fieldInitializers_Solver_MatrixRow();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // SOLVER__MATRIXROW_H

class Solver__MatrixRow;

#ifndef SOLVER__MATRIXROW_H_NODEPS
#define SOLVER__MATRIXROW_H_NODEPS
#ifndef SOLVER__MATRIXROW_H_GENERICS
#define SOLVER__MATRIXROW_H_GENERICS
#endif // SOLVER__MATRIXROW_H_GENERICS
#endif // __SOLVER__MATRIXROW_H_NODEPS
