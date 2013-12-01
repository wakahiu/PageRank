#ifndef __SOLVER_H
#define __SOLVER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
class Solver__MatrixRow;
class Solver__NodeProb;
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
class WebNode;
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
class String;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class PlaceGroup__SimplePlaceGroup;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class Error;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace util { namespace concurrent { 
class AtomicDouble;
} } } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
class Solver : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual x10::lang::Rail<x10_double >* makeSolutionFragment(x10_long size);
    virtual x10::lang::Rail<Solver__MatrixRow* >* makeFragment(x10_long size);
    virtual x10::util::HashMap<x10_long, x10_long>* makeIndexMap(x10_long offset,
                                                                 x10_long numItems);
    virtual x10::lang::Rail<x10_double >* solve(x10::lang::Rail<WebNode* >* webGraph,
                                                x10_double dampingFactor,
                                                x10_double epsilon);
    virtual x10::lang::Rail<Solver__MatrixRow* >* graphToMatrix(
      x10::lang::Rail<WebNode* >* webGraph);
    virtual void prettyFragmentPrint(x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >* sparseMatrix,
                                     x10_long n);
    virtual void prettyPrint(x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >* sparseMatrix);
    virtual x10_double distance(x10::lang::Rail<x10_double >* v1,
                                x10::lang::Rail<x10_double >* v2);
    virtual Solver* Solver____this__Solver();
    void _constructor();
    
    static Solver* _make();
    
    virtual void __fieldInitializers_Solver();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // SOLVER_H

class Solver;

#ifndef SOLVER_H_NODEPS
#define SOLVER_H_NODEPS
#ifndef SOLVER_H_GENERICS
#define SOLVER_H_GENERICS
#endif // SOLVER_H_GENERICS
#endif // __SOLVER_H_NODEPS
