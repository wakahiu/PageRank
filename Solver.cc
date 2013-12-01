/*************************************************/
/* START of Solver */
#include <Solver.h>

#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Double.h>
#include <x10/lang/Fun_0_1.h>
#include <Solver__MatrixRow.h>
#include <Solver__NodeProb.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Box.h>
#include <WebNode.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/PlaceGroup__SimplePlaceGroup.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Error.h>
#include <x10/lang/Int.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/util/concurrent/AtomicDouble.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Math.h>
#include <x10/util/ArrayList.h>
#include <x10/util/ListIterator.h>
#include <x10/lang/LongRange.h>
#ifndef SOLVER__CLOSURE__1_CLOSURE
#define SOLVER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class Solver__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, x10_double>::itable<Solver__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_double __apply(x10_long i) {
        
        //#line 24 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return 0.0;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__1* storage = x10aux::alloc<Solver__closure__1>();
        buf.record_reference(storage);
        Solver__closure__1* this_ = new (storage) Solver__closure__1();
        return this_;
    }
    
    Solver__closure__1() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:24";
    }

};

#endif // SOLVER__CLOSURE__1_CLOSURE
#ifndef SOLVER__CLOSURE__2_CLOSURE
#define SOLVER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class Solver__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*>::itable<Solver__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    Solver__MatrixRow* __apply(x10_long i) {
        
        //#line 36 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        Solver__MatrixRow* alloc9169 =  ((new (memset(x10aux::alloc<Solver__MatrixRow>(), 0, sizeof(Solver__MatrixRow))) Solver__MatrixRow()))
        ;
        
        //#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        Solver* out__9168 = saved_this;
        
        //#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
        alloc9169->FMGL(out__) = out__9168;
        
        //#line 330 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
        alloc9169->FMGL(last) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
        
        //#line 334 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
        alloc9169->FMGL(last) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
        
        //#line 36 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return alloc9169;
        
    }
    
    // captured environment
    Solver* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__2* storage = x10aux::alloc<Solver__closure__2>();
        buf.record_reference(storage);
        Solver* that_saved_this = buf.read<Solver*>();
        Solver__closure__2* this_ = new (storage) Solver__closure__2(that_saved_this);
        return this_;
    }
    
    Solver__closure__2(Solver* saved_this) : saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:36";
    }

};

#endif // SOLVER__CLOSURE__2_CLOSURE
#ifndef SOLVER__CLOSURE__3_CLOSURE
#define SOLVER__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class Solver__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<x10::util::HashMap<x10_long, x10_long>*>::itable<Solver__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::util::HashMap<x10_long, x10_long>* __apply() {
        
        //#line 95 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals(place1->FMGL(id), x10::lang::Place::_make(x10aux::here)->
                                                          FMGL(id)))
          ? (saved_this->makeIndexMap(((x10_long)0ll), size1)) : (saved_this->makeIndexMap(
                                                                    size1,
                                                                    size2));
        
    }
    
    // captured environment
    x10::lang::Place place1;
    Solver* saved_this;
    x10_long size1;
    x10_long size2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->place1);
        buf.write(this->saved_this);
        buf.write(this->size1);
        buf.write(this->size2);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__3* storage = x10aux::alloc<Solver__closure__3>();
        buf.record_reference(storage);
        x10::lang::Place that_place1 = buf.read<x10::lang::Place>();
        Solver* that_saved_this = buf.read<Solver*>();
        x10_long that_size1 = buf.read<x10_long>();
        x10_long that_size2 = buf.read<x10_long>();
        Solver__closure__3* this_ = new (storage) Solver__closure__3(that_place1, that_saved_this, that_size1, that_size2);
        return this_;
    }
    
    Solver__closure__3(x10::lang::Place place1, Solver* saved_this, x10_long size1, x10_long size2) : place1(place1), saved_this(saved_this), size1(size1), size2(size2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10::util::HashMap<x10_long, x10_long>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10::util::HashMap<x10_long, x10_long>*> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:95";
    }

};

#endif // SOLVER__CLOSURE__3_CLOSURE
#ifndef SOLVER__CLOSURE__4_CLOSURE
#define SOLVER__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class Solver__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<x10::lang::Rail<Solver__MatrixRow* >*>::itable<Solver__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Rail<Solver__MatrixRow* >* __apply() {
        
        //#line 101 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals(place1->FMGL(id), x10::lang::Place::_make(x10aux::here)->
                                                          FMGL(id)))
          ? (saved_this->makeFragment(size1)) : (saved_this->makeFragment(
                                                   size2));
        
    }
    
    // captured environment
    x10::lang::Place place1;
    Solver* saved_this;
    x10_long size1;
    x10_long size2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->place1);
        buf.write(this->saved_this);
        buf.write(this->size1);
        buf.write(this->size2);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__4* storage = x10aux::alloc<Solver__closure__4>();
        buf.record_reference(storage);
        x10::lang::Place that_place1 = buf.read<x10::lang::Place>();
        Solver* that_saved_this = buf.read<Solver*>();
        x10_long that_size1 = buf.read<x10_long>();
        x10_long that_size2 = buf.read<x10_long>();
        Solver__closure__4* this_ = new (storage) Solver__closure__4(that_place1, that_saved_this, that_size1, that_size2);
        return this_;
    }
    
    Solver__closure__4(x10::lang::Place place1, Solver* saved_this, x10_long size1, x10_long size2) : place1(place1), saved_this(saved_this), size1(size1), size2(size2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Rail<Solver__MatrixRow* >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Rail<Solver__MatrixRow* >*> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:101";
    }

};

#endif // SOLVER__CLOSURE__4_CLOSURE
#ifndef SOLVER__CLOSURE__5_CLOSURE
#define SOLVER__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class Solver__closure__5 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, x10_double>::itable<Solver__closure__5> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_double __apply(x10_long i) {
        
        //#line 105 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return ((1.0) / (n));
        
    }
    
    // captured environment
    x10_double n;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->n);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__5* storage = x10aux::alloc<Solver__closure__5>();
        buf.record_reference(storage);
        x10_double that_n = buf.read<x10_double>();
        Solver__closure__5* this_ = new (storage) Solver__closure__5(that_n);
        return this_;
    }
    
    Solver__closure__5(x10_double n) : n(n) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:105";
    }

};

#endif // SOLVER__CLOSURE__5_CLOSURE
#ifndef SOLVER__CLOSURE__6_CLOSURE
#define SOLVER__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class Solver__closure__6 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*>::itable<Solver__closure__6> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Rail<x10_double >* __apply() {
        
        //#line 108 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return solutions;
        
    }
    
    // captured environment
    x10::lang::Rail<x10_double >* solutions;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->solutions);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__6* storage = x10aux::alloc<Solver__closure__6>();
        buf.record_reference(storage);
        x10::lang::Rail<x10_double >* that_solutions = buf.read<x10::lang::Rail<x10_double >*>();
        Solver__closure__6* this_ = new (storage) Solver__closure__6(that_solutions);
        return this_;
    }
    
    Solver__closure__6(x10::lang::Rail<x10_double >* solutions) : solutions(solutions) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:108";
    }

};

#endif // SOLVER__CLOSURE__6_CLOSURE
#ifndef SOLVER__CLOSURE__7_CLOSURE
#define SOLVER__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class Solver__closure__7 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, x10_double>::itable<Solver__closure__7> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_double __apply(x10_long i) {
        
        //#line 113 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return 0.0;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__7* storage = x10aux::alloc<Solver__closure__7>();
        buf.record_reference(storage);
        Solver__closure__7* this_ = new (storage) Solver__closure__7();
        return this_;
    }
    
    Solver__closure__7() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:113";
    }

};

#endif // SOLVER__CLOSURE__7_CLOSURE
#ifndef SOLVER__CLOSURE__8_CLOSURE
#define SOLVER__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class Solver__closure__8 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*>::itable<Solver__closure__8> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Rail<x10_double >* __apply() {
        
        //#line 116 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return newSolutions;
        
    }
    
    // captured environment
    x10::lang::Rail<x10_double >* newSolutions;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->newSolutions);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__8* storage = x10aux::alloc<Solver__closure__8>();
        buf.record_reference(storage);
        x10::lang::Rail<x10_double >* that_newSolutions = buf.read<x10::lang::Rail<x10_double >*>();
        Solver__closure__8* this_ = new (storage) Solver__closure__8(that_newSolutions);
        return this_;
    }
    
    Solver__closure__8(x10::lang::Rail<x10_double >* newSolutions) : newSolutions(newSolutions) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:116";
    }

};

#endif // SOLVER__CLOSURE__8_CLOSURE
#ifndef SOLVER__CLOSURE__9_CLOSURE
#define SOLVER__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class Solver__closure__9 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<x10::util::concurrent::AtomicDouble*>::itable<Solver__closure__9> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::util::concurrent::AtomicDouble* __apply() {
        
        //#line 119 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        x10::util::concurrent::AtomicDouble* alloc9170 =  ((new (memset(x10aux::alloc<x10::util::concurrent::AtomicDouble>(), 0, sizeof(x10::util::concurrent::AtomicDouble))) x10::util::concurrent::AtomicDouble()))
        ;
        
        //#line 119 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10ConstructorCall_c
        (alloc9170)->::x10::util::concurrent::AtomicDouble::_constructor(
          0.0);
        
        //#line 119 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return alloc9170;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__9* storage = x10aux::alloc<Solver__closure__9>();
        buf.record_reference(storage);
        Solver__closure__9* this_ = new (storage) Solver__closure__9();
        return this_;
    }
    
    Solver__closure__9() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10::util::concurrent::AtomicDouble*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10::util::concurrent::AtomicDouble*> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:119";
    }

};

#endif // SOLVER__CLOSURE__9_CLOSURE
#ifndef SOLVER__CLOSURE__11_CLOSURE
#define SOLVER__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Solver__closure__11 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<Solver__closure__11> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 132 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
        try {
            
            //#line 133 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(matrixFragments->x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*>::__apply())->x10::lang::Rail<Solver__MatrixRow* >::__set(
              kVal, row);
        }
        catch (x10::lang::CheckedThrowable* __exc19) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc19);
                {
                    
                    //#line 132 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_int __lowerer__var__1__ = x10aux::class_cast_unchecked<x10_int>(x10::lang::Runtime::wrapAtChecked<x10_int >(
                                                                                          __lowerer__var__0__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments;
    x10_long kVal;
    Solver__MatrixRow* row;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->matrixFragments);
        buf.write(this->kVal);
        buf.write(this->row);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__11* storage = x10aux::alloc<Solver__closure__11>();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> that_matrixFragments = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> >();
        x10_long that_kVal = buf.read<x10_long>();
        Solver__MatrixRow* that_row = buf.read<Solver__MatrixRow*>();
        Solver__closure__11* this_ = new (storage) Solver__closure__11(that_matrixFragments, that_kVal, that_row);
        return this_;
    }
    
    Solver__closure__11(x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments, x10_long kVal, Solver__MatrixRow* row) : matrixFragments(matrixFragments), kVal(kVal), row(row) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:132-134";
    }

};

#endif // SOLVER__CLOSURE__11_CLOSURE
#ifndef SOLVER__CLOSURE__12_CLOSURE
#define SOLVER__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Solver__closure__12 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<Solver__closure__12> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 136 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
        try {
            
            //#line 137 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(matrixFragments->x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*>::__apply())->x10::lang::Rail<Solver__MatrixRow* >::__set(
              ((x10_long) ((kVal) - (size1))), row);
        }
        catch (x10::lang::CheckedThrowable* __exc20) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc20);
                {
                    
                    //#line 136 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_int __lowerer__var__1__ = x10aux::class_cast_unchecked<x10_int>(x10::lang::Runtime::wrapAtChecked<x10_int >(
                                                                                          __lowerer__var__0__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments;
    x10_long kVal;
    x10_long size1;
    Solver__MatrixRow* row;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->matrixFragments);
        buf.write(this->kVal);
        buf.write(this->size1);
        buf.write(this->row);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__12* storage = x10aux::alloc<Solver__closure__12>();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> that_matrixFragments = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> >();
        x10_long that_kVal = buf.read<x10_long>();
        x10_long that_size1 = buf.read<x10_long>();
        Solver__MatrixRow* that_row = buf.read<Solver__MatrixRow*>();
        Solver__closure__12* this_ = new (storage) Solver__closure__12(that_matrixFragments, that_kVal, that_size1, that_row);
        return this_;
    }
    
    Solver__closure__12(x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments, x10_long kVal, x10_long size1, Solver__MatrixRow* row) : matrixFragments(matrixFragments), kVal(kVal), size1(size1), row(row) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:136-138";
    }

};

#endif // SOLVER__CLOSURE__12_CLOSURE
#ifndef SOLVER__CLOSURE__10_CLOSURE
#define SOLVER__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Solver__closure__10 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<Solver__closure__10> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 127 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
        try {
            
            //#line 128 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
            {
                x10_long k;
                for (
                     //#line 128 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                     k = iVal; ((k) < (end)); 
                                              //#line 128 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                                              k = ((x10_long) ((k) + (((x10_long)1ll)))))
                {
                    
                    //#line 129 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_long kVal = k;
                    
                    //#line 130 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    Solver__MatrixRow* row = x10aux::nullCheck(sparseMatrix)->x10::lang::Rail<Solver__MatrixRow* >::__apply(
                                               k);
                    
                    //#line 131 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                    if (((k) < (size1))) {
                        {
                            
                            //#line 132 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::runAt(place1,
                                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Solver__closure__11)))Solver__closure__11(matrixFragments, kVal, row))),
                                                      x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
                        }
                    } else {
                        {
                            
                            //#line 136 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::runAt(place2,
                                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Solver__closure__12)))Solver__closure__12(matrixFragments, kVal, size1, row))),
                                                      x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc21) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc21)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc21);
                {
                    
                    //#line 127 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc21);
                {
                    
                    //#line 127 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long iVal;
    x10_long end;
    x10::lang::Rail<Solver__MatrixRow* >* sparseMatrix;
    x10_long size1;
    x10::lang::Place place1;
    x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments;
    x10::lang::Place place2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->iVal);
        buf.write(this->end);
        buf.write(this->sparseMatrix);
        buf.write(this->size1);
        buf.write(this->place1);
        buf.write(this->matrixFragments);
        buf.write(this->place2);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__10* storage = x10aux::alloc<Solver__closure__10>();
        buf.record_reference(storage);
        x10_long that_iVal = buf.read<x10_long>();
        x10_long that_end = buf.read<x10_long>();
        x10::lang::Rail<Solver__MatrixRow* >* that_sparseMatrix = buf.read<x10::lang::Rail<Solver__MatrixRow* >*>();
        x10_long that_size1 = buf.read<x10_long>();
        x10::lang::Place that_place1 = buf.read<x10::lang::Place>();
        x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> that_matrixFragments = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> >();
        x10::lang::Place that_place2 = buf.read<x10::lang::Place>();
        Solver__closure__10* this_ = new (storage) Solver__closure__10(that_iVal, that_end, that_sparseMatrix, that_size1, that_place1, that_matrixFragments, that_place2);
        return this_;
    }
    
    Solver__closure__10(x10_long iVal, x10_long end, x10::lang::Rail<Solver__MatrixRow* >* sparseMatrix, x10_long size1, x10::lang::Place place1, x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments, x10::lang::Place place2) : iVal(iVal), end(end), sparseMatrix(sparseMatrix), size1(size1), place1(place1), matrixFragments(matrixFragments), place2(place2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:127-141";
    }

};

#endif // SOLVER__CLOSURE__10_CLOSURE
#ifndef SOLVER__CLOSURE__15_CLOSURE
#define SOLVER__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Solver__closure__15 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<Solver__closure__15> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 212 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
        try {
            
            //#line 213 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
            {
                x10_long i;
                for (
                     //#line 213 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                     i = gstart; ((i) <= (gend)); 
                                                  //#line 213 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                                                  i = ((x10_long) ((i) + (((x10_long)1ll)))))
                {
                    
                    //#line 214 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(gNewSolution->x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*>::__apply())->x10::lang::Rail<x10_double >::__set(
                      i, x10aux::nullCheck(blkUpdate)->x10::lang::Rail<x10_double >::__apply(
                           ((x10_long) ((i) - (gstart)))));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc24) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc24);
                {
                    
                    //#line 212 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_int __lowerer__var__2__ = x10aux::class_cast_unchecked<x10_int>(x10::lang::Runtime::wrapAtChecked<x10_int >(
                                                                                          __lowerer__var__1__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long gstart;
    x10_long gend;
    x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gNewSolution;
    x10::lang::Rail<x10_double >* blkUpdate;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->gstart);
        buf.write(this->gend);
        buf.write(this->gNewSolution);
        buf.write(this->blkUpdate);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__15* storage = x10aux::alloc<Solver__closure__15>();
        buf.record_reference(storage);
        x10_long that_gstart = buf.read<x10_long>();
        x10_long that_gend = buf.read<x10_long>();
        x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> that_gNewSolution = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> >();
        x10::lang::Rail<x10_double >* that_blkUpdate = buf.read<x10::lang::Rail<x10_double >*>();
        Solver__closure__15* this_ = new (storage) Solver__closure__15(that_gstart, that_gend, that_gNewSolution, that_blkUpdate);
        return this_;
    }
    
    Solver__closure__15(x10_long gstart, x10_long gend, x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gNewSolution, x10::lang::Rail<x10_double >* blkUpdate) : gstart(gstart), gend(gend), gNewSolution(gNewSolution), blkUpdate(blkUpdate) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:212-216";
    }

};

#endif // SOLVER__CLOSURE__15_CLOSURE
#ifndef SOLVER__CLOSURE__14_CLOSURE
#define SOLVER__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Solver__closure__14 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<Solver__closure__14> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 172 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
        try {
            
            //#line 174 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_double locDist = 0.0;
            
            //#line 176 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10::lang::Rail<x10_double >* blkUpdate = x10::lang::Rail<x10_double >::_make(chunkSize);
            
            //#line 177 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10::lang::Place otherPlace = (x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                                                   FMGL(id),
                                                                 place1->
                                                                   FMGL(id)))
              ? (place2) : (place1);
            
            //#line 178 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long oldPlace = x10::lang::Place::_make(x10aux::here)->
                                  FMGL(id);
            
            //#line 179 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_double sum = 0.0;
            
            //#line 182 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10::lang::Rail<x10_double >* rail9171 = gSolution->x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*>::__apply();
            
            //#line 182 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long i7519max9172 = (x10_long)(x10aux::nullCheck(rail9171)->FMGL(size));
            
            //#line 182 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
            {
                x10_long i9173;
                for (
                     //#line 182 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                     i9173 = ((x10_long)0ll); ((i9173) < (i7519max9172));
                     
                     //#line 182 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                     i9173 = ((x10_long) ((i9173) + (((x10_long)1ll)))))
                {
                    
                    //#line 182 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_long j9174 = i9173;
                    
                    //#line 183 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                    sum = ((sum) + (x10aux::nullCheck(gSolution->x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*>::__apply())->x10::lang::Rail<x10_double >::__apply(
                                      j9174)));
                }
            }
            
            //#line 185 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
            sum = ((sum) * (beta));
            
            //#line 188 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
            {
                x10_long i;
                for (
                     //#line 188 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                     i = start; ((i) < (end)); 
                                               //#line 188 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                                               i = ((x10_long) ((i) + (((x10_long)1ll)))))
                {
                    
                    //#line 189 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_double rowUpdate = 0.0;
                    
                    //#line 190 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    Solver__NodeProb* curr = x10aux::nullCheck(x10aux::nullCheck(matrixFragments->x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*>::__apply())->x10::lang::Rail<Solver__MatrixRow* >::__apply(
                                                                 i))->
                                               FMGL(last);
                    
                    //#line 191 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_double total = sum;
                    
                    //#line 194 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10While_c
                    while ((!x10aux::struct_equals(curr, reinterpret_cast<x10::lang::NullType*>(X10_NULL))))
                    {
                        
                        //#line 195 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                        total = ((total) + (((((x10aux::nullCheck(gSolution->x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*>::__apply())->x10::lang::Rail<x10_double >::__apply(
                                                  x10aux::nullCheck(curr)->
                                                    FMGL(id))) * (dampingFactor))) * (x10aux::nullCheck(curr)->
                                                                                        FMGL(prob)))));
                        
                        //#line 196 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                        curr = x10aux::nullCheck(curr)->FMGL(next);
                    }
                    
                    //#line 199 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_long gIndex = x10aux::nullCheck(x10aux::nullCheck(indexMap->x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*>::__apply())->get(
                                                          i))->
                                        FMGL(value);
                    
                    //#line 200 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(blkUpdate)->x10::lang::Rail<x10_double >::__set(
                      ((x10_long) ((i) % x10aux::zeroCheck(chunkSize))),
                      total);
                    
                    //#line 201 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(gNewSolution->x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*>::__apply())->x10::lang::Rail<x10_double >::__set(
                      gIndex, total);
                    
                    //#line 202 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                    locDist = ((locDist) + (x10::lang::MathNatives::pow(((total) - (x10aux::nullCheck(gSolution->x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*>::__apply())->x10::lang::Rail<x10_double >::__apply(
                                                                                      gIndex))),((x10_double) (((x10_long)2ll))))));
                }
            }
            
            //#line 207 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(gDist->x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*>::__apply())->x10::util::concurrent::AtomicDouble::addAndGet(
              locDist);
            
            //#line 209 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long gstart = x10aux::nullCheck(x10aux::nullCheck(indexMap->x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*>::__apply())->get(
                                                  start))->
                                FMGL(value);
            
            //#line 210 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long gend = x10aux::nullCheck(x10aux::nullCheck(indexMap->x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*>::__apply())->get(
                                                ((x10_long) ((end) - (((x10_long)1ll))))))->
                              FMGL(value);
            {
                
                //#line 212 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::runAt(otherPlace, reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Solver__closure__15)))Solver__closure__15(gstart, gend, gNewSolution, blkUpdate))),
                                          x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
            }
        }
        catch (x10::lang::CheckedThrowable* __exc25) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc25)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc25);
                {
                    
                    //#line 172 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc25);
                {
                    
                    //#line 172 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long chunkSize;
    x10::lang::Place place1;
    x10::lang::Place place2;
    x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gSolution;
    x10_double beta;
    x10_long start;
    x10_long end;
    x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments;
    x10_double dampingFactor;
    x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*> indexMap;
    x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gNewSolution;
    x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> gDist;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->chunkSize);
        buf.write(this->place1);
        buf.write(this->place2);
        buf.write(this->gSolution);
        buf.write(this->beta);
        buf.write(this->start);
        buf.write(this->end);
        buf.write(this->matrixFragments);
        buf.write(this->dampingFactor);
        buf.write(this->indexMap);
        buf.write(this->gNewSolution);
        buf.write(this->gDist);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__14* storage = x10aux::alloc<Solver__closure__14>();
        buf.record_reference(storage);
        x10_long that_chunkSize = buf.read<x10_long>();
        x10::lang::Place that_place1 = buf.read<x10::lang::Place>();
        x10::lang::Place that_place2 = buf.read<x10::lang::Place>();
        x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> that_gSolution = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> >();
        x10_double that_beta = buf.read<x10_double>();
        x10_long that_start = buf.read<x10_long>();
        x10_long that_end = buf.read<x10_long>();
        x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> that_matrixFragments = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> >();
        x10_double that_dampingFactor = buf.read<x10_double>();
        x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*> that_indexMap = buf.read<x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*> >();
        x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> that_gNewSolution = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> >();
        x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> that_gDist = buf.read<x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> >();
        Solver__closure__14* this_ = new (storage) Solver__closure__14(that_chunkSize, that_place1, that_place2, that_gSolution, that_beta, that_start, that_end, that_matrixFragments, that_dampingFactor, that_indexMap, that_gNewSolution, that_gDist);
        return this_;
    }
    
    Solver__closure__14(x10_long chunkSize, x10::lang::Place place1, x10::lang::Place place2, x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gSolution, x10_double beta, x10_long start, x10_long end, x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments, x10_double dampingFactor, x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*> indexMap, x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gNewSolution, x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> gDist) : chunkSize(chunkSize), place1(place1), place2(place2), gSolution(gSolution), beta(beta), start(start), end(end), matrixFragments(matrixFragments), dampingFactor(dampingFactor), indexMap(indexMap), gNewSolution(gNewSolution), gDist(gDist) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:172-217";
    }

};

#endif // SOLVER__CLOSURE__14_CLOSURE
#ifndef SOLVER__CLOSURE__13_CLOSURE
#define SOLVER__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Solver__closure__13 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<Solver__closure__13> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 159 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
        try {
            
            //#line 161 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(gDist->x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*>::__apply())->x10::util::concurrent::AtomicDouble::set(
              0.0);
            
            //#line 163 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long fragSize = (x10_long)(x10aux::nullCheck(matrixFragments->x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*>::__apply())->FMGL(size));
            
            //#line 165 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long chunkSize = ((x10_long) ((((x10_long) ((fragSize) / x10aux::zeroCheck(((x10_long) (nthreads)))))) + (((x10_long)1ll))));
            {
                
                //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var1 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable9258 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
                    
                    //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
                                {
                                    x10_long k;
                                    for (
                                         //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                                         k = ((x10_long)0ll); ((k) < (fragSize));
                                         
                                         //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                                         k = ((x10_long) ((k) + (chunkSize))))
                                    {
                                        
                                        //#line 169 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                                        x10_long start = k;
                                        
                                        //#line 170 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                                        x10_long end = ((((x10_long) ((start) + (chunkSize)))) > (fragSize))
                                          ? (fragSize) : (((x10_long) ((start) + (chunkSize))));
                                        
                                        //#line 172 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Solver__closure__14)))Solver__closure__14(chunkSize, place1, place2, gSolution, beta, start, end, matrixFragments, dampingFactor, indexMap, gNewSolution, gDist))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc26) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc26);
                                {
                                    
                                    //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__1__);
                                    
                                    //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc27) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal9259 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc27);
                            {
                                
                                //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable9258 = formal9259;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                                throwable9258)))
                    {
                        
                        //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable9258))
                        {
                            
                            //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable9258));
                        }
                        
                    }
                    
                    //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var1);
                    }
                    
                    //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                                throwable9258)))
                    {
                        
                        //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable9258)))
                        {
                            
                            //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable9258));
                        }
                        
                    }
                    
                }
            }
        }
        catch (x10::lang::CheckedThrowable* __exc28) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc28)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc28);
                {
                    
                    //#line 159 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc28);
                {
                    
                    //#line 159 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> gDist;
    x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments;
    x10_int nthreads;
    x10::lang::Place place1;
    x10::lang::Place place2;
    x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gSolution;
    x10_double beta;
    x10_double dampingFactor;
    x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*> indexMap;
    x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gNewSolution;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->gDist);
        buf.write(this->matrixFragments);
        buf.write(this->nthreads);
        buf.write(this->place1);
        buf.write(this->place2);
        buf.write(this->gSolution);
        buf.write(this->beta);
        buf.write(this->dampingFactor);
        buf.write(this->indexMap);
        buf.write(this->gNewSolution);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__13* storage = x10aux::alloc<Solver__closure__13>();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> that_gDist = buf.read<x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> >();
        x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> that_matrixFragments = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> >();
        x10_int that_nthreads = buf.read<x10_int>();
        x10::lang::Place that_place1 = buf.read<x10::lang::Place>();
        x10::lang::Place that_place2 = buf.read<x10::lang::Place>();
        x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> that_gSolution = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> >();
        x10_double that_beta = buf.read<x10_double>();
        x10_double that_dampingFactor = buf.read<x10_double>();
        x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*> that_indexMap = buf.read<x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*> >();
        x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> that_gNewSolution = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> >();
        Solver__closure__13* this_ = new (storage) Solver__closure__13(that_gDist, that_matrixFragments, that_nthreads, that_place1, that_place2, that_gSolution, that_beta, that_dampingFactor, that_indexMap, that_gNewSolution);
        return this_;
    }
    
    Solver__closure__13(x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> gDist, x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments, x10_int nthreads, x10::lang::Place place1, x10::lang::Place place2, x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gSolution, x10_double beta, x10_double dampingFactor, x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*> indexMap, x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gNewSolution) : gDist(gDist), matrixFragments(matrixFragments), nthreads(nthreads), place1(place1), place2(place2), gSolution(gSolution), beta(beta), dampingFactor(dampingFactor), indexMap(indexMap), gNewSolution(gNewSolution) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:159-220";
    }

};

#endif // SOLVER__CLOSURE__13_CLOSURE
#ifndef SOLVER__CLOSURE__17_CLOSURE
#define SOLVER__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Solver__closure__17 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<Solver__closure__17> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 231 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
        try {
            
            //#line 231 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(gDist->x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*>::__apply())->x10::util::concurrent::AtomicDouble::addAndGet(
              otherDist);
        }
        catch (x10::lang::CheckedThrowable* __exc31) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc31);
                {
                    
                    //#line 231 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_int __lowerer__var__3__ = x10aux::class_cast_unchecked<x10_int>(x10::lang::Runtime::wrapAtChecked<x10_int >(
                                                                                          __lowerer__var__2__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> gDist;
    x10_double otherDist;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->gDist);
        buf.write(this->otherDist);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__17* storage = x10aux::alloc<Solver__closure__17>();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> that_gDist = buf.read<x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> >();
        x10_double that_otherDist = buf.read<x10_double>();
        Solver__closure__17* this_ = new (storage) Solver__closure__17(that_gDist, that_otherDist);
        return this_;
    }
    
    Solver__closure__17(x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> gDist, x10_double otherDist) : gDist(gDist), otherDist(otherDist) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:231";
    }

};

#endif // SOLVER__CLOSURE__17_CLOSURE
#ifndef SOLVER__CLOSURE__16_CLOSURE
#define SOLVER__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class Solver__closure__16 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<Solver__closure__16> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 229 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
        try {
            
            //#line 230 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_double otherDist = x10aux::nullCheck(gDist->x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*>::__apply())->x10::util::concurrent::AtomicDouble::get();
            {
                
                //#line 231 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::runAt(thisPlace, reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Solver__closure__17)))Solver__closure__17(gDist, otherDist))),
                                          x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
            }
        }
        catch (x10::lang::CheckedThrowable* __exc32) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc32);
                {
                    
                    //#line 229 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_int __lowerer__var__3__ = x10aux::class_cast_unchecked<x10_int>(x10::lang::Runtime::wrapAtChecked<x10_int >(
                                                                                          __lowerer__var__2__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> gDist;
    x10::lang::Place thisPlace;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->gDist);
        buf.write(this->thisPlace);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__16* storage = x10aux::alloc<Solver__closure__16>();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> that_gDist = buf.read<x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> >();
        x10::lang::Place that_thisPlace = buf.read<x10::lang::Place>();
        Solver__closure__16* this_ = new (storage) Solver__closure__16(that_gDist, that_thisPlace);
        return this_;
    }
    
    Solver__closure__16(x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> gDist, x10::lang::Place thisPlace) : gDist(gDist), thisPlace(thisPlace) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:229-233";
    }

};

#endif // SOLVER__CLOSURE__16_CLOSURE
#ifndef SOLVER__CLOSURE__18_CLOSURE
#define SOLVER__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class Solver__closure__18 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*>::itable<Solver__closure__18> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    Solver__MatrixRow* __apply(x10_long i) {
        
        //#line 258 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        Solver__MatrixRow* alloc9176 =  ((new (memset(x10aux::alloc<Solver__MatrixRow>(), 0, sizeof(Solver__MatrixRow))) Solver__MatrixRow()))
        ;
        
        //#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        Solver* out__9175 = saved_this;
        
        //#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
        alloc9176->FMGL(out__) = out__9175;
        
        //#line 330 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
        alloc9176->FMGL(last) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
        
        //#line 334 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
        alloc9176->FMGL(last) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
        
        //#line 258 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return alloc9176;
        
    }
    
    // captured environment
    Solver* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__18* storage = x10aux::alloc<Solver__closure__18>();
        buf.record_reference(storage);
        Solver* that_saved_this = buf.read<Solver*>();
        Solver__closure__18* this_ = new (storage) Solver__closure__18(that_saved_this);
        return this_;
    }
    
    Solver__closure__18(Solver* saved_this) : saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:258";
    }

};

#endif // SOLVER__CLOSURE__18_CLOSURE
#ifndef SOLVER__CLOSURE__20_CLOSURE
#define SOLVER__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class Solver__closure__20 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, x10_double>::itable<Solver__closure__20> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_double __apply(x10_long c9194) {
        
        //#line 298 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return prob9193;
        
    }
    
    // captured environment
    x10_double prob9193;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->prob9193);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__20* storage = x10aux::alloc<Solver__closure__20>();
        buf.record_reference(storage);
        x10_double that_prob9193 = buf.read<x10_double>();
        Solver__closure__20* this_ = new (storage) Solver__closure__20(that_prob9193);
        return this_;
    }
    
    Solver__closure__20(x10_double prob9193) : prob9193(prob9193) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:298";
    }

};

#endif // SOLVER__CLOSURE__20_CLOSURE
#ifndef SOLVER__CLOSURE__19_CLOSURE
#define SOLVER__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class Solver__closure__19 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, x10::lang::Any*>::itable<Solver__closure__19> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Any* __apply(x10_long arg9321) {
        
        //#line 298 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
        return x10aux::class_cast_unchecked<x10::lang::Any*>(Solver__closure__20(prob9193).__apply(arg9321));
        
    }
    
    // captured environment
    x10_double prob9193;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->prob9193);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Solver__closure__19* storage = x10aux::alloc<Solver__closure__19>();
        buf.record_reference(storage);
        x10_double that_prob9193 = buf.read<x10_double>();
        Solver__closure__19* this_ = new (storage) Solver__closure__19(that_prob9193);
        return this_;
    }
    
    Solver__closure__19(x10_double prob9193) : prob9193(prob9193) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10::lang::Any*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10::lang::Any*> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Solver.x10:298";
    }

};

#endif // SOLVER__CLOSURE__19_CLOSURE

//#line 23 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
x10::lang::Rail<x10_double >* Solver::makeSolutionFragment(x10_long size) {
    
    //#line 24 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return x10::lang::Rail<x10_double >::_make(size, reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_double>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_double> >(sizeof(Solver__closure__1)))Solver__closure__1())));
    
}

//#line 35 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
x10::lang::Rail<Solver__MatrixRow* >* Solver::makeFragment(x10_long size) {
    
    //#line 36 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return x10::lang::Rail<Solver__MatrixRow* >::_make(size, reinterpret_cast<x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*> >(sizeof(Solver__closure__2)))Solver__closure__2(this))));
    
}

//#line 49 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
x10::util::HashMap<x10_long, x10_long>* Solver::makeIndexMap(x10_long offset,
                                                             x10_long numItems) {
    
    //#line 50 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::util::HashMap<x10_long, x10_long>* map =  ((new (memset(x10aux::alloc<x10::util::HashMap<x10_long, x10_long> >(), 0, sizeof(x10::util::HashMap<x10_long, x10_long>))) x10::util::HashMap<x10_long, x10_long>()))
    ;
    
    //#line 50 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10ConstructorCall_c
    (map)->::x10::util::HashMap<x10_long, x10_long>::_constructor();
    
    //#line 51 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
    {
        x10_long i;
        for (
             //#line 51 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
             i = ((x10_long)0ll); ((i) < (numItems)); 
                                                      //#line 51 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                                                      i = ((x10_long) ((i) + (((x10_long)1ll)))))
        {
            
            //#line 52 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(map)->put(i, ((x10_long) ((offset) + (i))));
        }
    }
    
    //#line 53 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return map;
    
}

//#line 61 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
x10::lang::Rail<x10_double >* Solver::solve(x10::lang::Rail<WebNode* >* webGraph,
                                            x10_double dampingFactor,
                                            x10_double epsilon) {
    
    //#line 63 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("Number of pages: "), (x10_long)(x10aux::nullCheck(webGraph)->FMGL(size)))));
    
    //#line 64 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("Damping Factor: "), dampingFactor)));
    
    //#line 65 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("Number of Threads: "), x10::lang::Runtime::
                                                                                                                  FMGL(NTHREADS__get)())));
    
    //#line 66 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(x10::lang::PlaceGroup::FMGL(WORLD__get)()->numPlaces(),
                                ((x10_long)2ll)))) {
        
        //#line 67 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("FATAL ERROR: Solver must have two places to run. Currently there are "), x10::lang::PlaceGroup::
                                                                                                                                                                                                  FMGL(WORLD__get)()->numPlaces()), x10aux::makeStringLit(" place(s)"))));
        
        //#line 69 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::Error::_make(x10aux::makeStringLit("X10_NPLACES must be set to 2."))));
    }
    
    //#line 72 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_double n = ((x10_double) ((x10_long)(x10aux::nullCheck(webGraph)->FMGL(size))));
    
    //#line 73 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_double beta = ((((1.0) - (dampingFactor))) / (n));
    
    //#line 78 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 81 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<Solver__MatrixRow* >* sparseMatrix = this->graphToMatrix(
                                                           webGraph);
    
    //#line 85 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_long size1 = ((x10_long) (((x10_long)(x10aux::nullCheck(webGraph)->FMGL(size))) / x10aux::zeroCheck(((x10_long)2ll))));
    
    //#line 86 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_long size2 = ((x10_long) (((x10_long)(x10aux::nullCheck(webGraph)->FMGL(size))) - (size1)));
    
    //#line 89 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::Place place1 = x10::lang::PlaceGroup::FMGL(WORLD__get)()->__apply(
                                ((x10_long)0ll));
    
    //#line 90 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::Place place2 = x10::lang::PlaceGroup::FMGL(WORLD__get)()->__apply(
                                ((x10_long)1ll));
    
    //#line 93 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<x10::util::HashMap<x10_long, x10_long>*> indexMap =
      x10::lang::PlaceLocalHandle<void>::make<x10::util::HashMap<x10_long, x10_long>* >(
        reinterpret_cast<x10::lang::PlaceGroup*>(x10::lang::PlaceGroup::
                                                   FMGL(WORLD__get)()),
        reinterpret_cast<x10::lang::Fun_0_0<x10::util::HashMap<x10_long, x10_long>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::util::HashMap<x10_long, x10_long>*> >(sizeof(Solver__closure__3)))Solver__closure__3(place1, this, size1, size2))));
    
    //#line 99 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<x10::lang::Rail<Solver__MatrixRow* >*> matrixFragments =
      x10::lang::PlaceLocalHandle<void>::make<x10::lang::Rail<Solver__MatrixRow* >* >(
        reinterpret_cast<x10::lang::PlaceGroup*>(x10::lang::PlaceGroup::
                                                   FMGL(WORLD__get)()),
        reinterpret_cast<x10::lang::Fun_0_0<x10::lang::Rail<Solver__MatrixRow* >*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::lang::Rail<Solver__MatrixRow* >*> >(sizeof(Solver__closure__4)))Solver__closure__4(place1, this, size1, size2))));
    
    //#line 105 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<x10_double >* solutions = x10::lang::Rail<x10_double >::_make((x10_long)(x10aux::nullCheck(webGraph)->FMGL(size)),
                                                                                  reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_double>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_double> >(sizeof(Solver__closure__5)))Solver__closure__5(n))));
    
    //#line 106 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gSolutionVar =
      x10::lang::PlaceLocalHandle<void>::make<x10::lang::Rail<x10_double >* >(
        reinterpret_cast<x10::lang::PlaceGroup*>(x10::lang::PlaceGroup::
                                                   FMGL(WORLD__get)()),
        reinterpret_cast<x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*> >(sizeof(Solver__closure__6)))Solver__closure__6(solutions))));
    
    //#line 113 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<x10_double >* newSolutions = x10::lang::Rail<x10_double >::_make((x10_long)(x10aux::nullCheck(webGraph)->FMGL(size)),
                                                                                     reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_double>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_double> >(sizeof(Solver__closure__7)))Solver__closure__7())));
    
    //#line 114 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gNewSolutionVar =
      x10::lang::PlaceLocalHandle<void>::make<x10::lang::Rail<x10_double >* >(
        reinterpret_cast<x10::lang::PlaceGroup*>(x10::lang::PlaceGroup::
                                                   FMGL(WORLD__get)()),
        reinterpret_cast<x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*> >(sizeof(Solver__closure__8)))Solver__closure__8(newSolutions))));
    
    //#line 118 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*> gDist =
      x10::lang::PlaceLocalHandle<void>::make<x10::util::concurrent::AtomicDouble* >(
        reinterpret_cast<x10::lang::PlaceGroup*>(x10::lang::PlaceGroup::
                                                   FMGL(WORLD__get)()),
        reinterpret_cast<x10::lang::Fun_0_0<x10::util::concurrent::AtomicDouble*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::util::concurrent::AtomicDouble*> >(sizeof(Solver__closure__9)))Solver__closure__9())));
    
    //#line 122 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_long blockSize = ((x10_long) ((((x10_long) (((x10_long)(x10aux::nullCheck(sparseMatrix)->FMGL(size))) / x10aux::zeroCheck(((x10_long) (nthreads)))))) + (((x10_long)1ll))));
    {
        
        //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var0 = x10::lang::Runtime::startFinish();
        {
            
            //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable9255 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
            
            //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
            try {
                
                //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
                        {
                            x10_long i;
                            for (
                                 //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                                 i = ((x10_long)0ll); ((i) < ((x10_long)(x10aux::nullCheck(sparseMatrix)->FMGL(size))));
                                 
                                 //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                                 i = ((x10_long) ((i) + (blockSize))))
                            {
                                
                                //#line 125 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                                x10_long iVal = i;
                                
                                //#line 126 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                                x10_long end = ((((x10_long) ((iVal) + (blockSize)))) > ((x10_long)(x10aux::nullCheck(sparseMatrix)->FMGL(size))))
                                  ? ((x10_long)(x10aux::nullCheck(sparseMatrix)->FMGL(size)))
                                  : (((x10_long) ((iVal) + (blockSize))));
                                
                                //#line 127 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Solver__closure__10)))Solver__closure__10(iVal, end, sparseMatrix, size1, place1, matrixFragments, place2))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc22) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc22);
                        {
                            
                            //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc23) {
                if (true) {
                    x10::lang::CheckedThrowable* formal9256 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc23);
                    {
                        
                        //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable9255 = formal9256;
                    }
                } else
                throw;
            }
            
            //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable9255))) {
                
                //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable9255))
                {
                    
                    //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable9255));
                }
                
            }
            
            //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var0);
            }
            
            //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                        throwable9255))) {
                
                //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable9255)))
                {
                    
                    //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable9255));
                }
                
            }
            
        }
    }
    
    //#line 146 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_long iter = ((x10_long)0ll);
    
    //#line 147 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_double eps = ((epsilon) / (10.0));
    
    //#line 149 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 151 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gSolution =
          gSolutionVar;
        
        //#line 152 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> gNewSolution =
          gNewSolutionVar;
        {
            
            //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var2 = x10::lang::Runtime::startFinish();
            {
                
                //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable9261 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL));
                
                //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 156 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
                            {
                                x10::lang::Iterator<x10::lang::Place>* p7536;
                                for (
                                     //#line 156 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                                     p7536 = x10::lang::PlaceGroup::
                                               FMGL(WORLD__get)()->iterator();
                                     x10::lang::Iterator<x10::lang::Place>::hasNext(p7536);
                                     ) {
                                    
                                    //#line 156 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::Place p = x10::lang::Iterator<x10::lang::Place>::next(p7536);
                                    
                                    //#line 159 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      p, reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Solver__closure__13)))Solver__closure__13(gDist, matrixFragments, nthreads, place1, place2, gSolution, beta, dampingFactor, indexMap, gNewSolution))),
                                      x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc29) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__1__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc29);
                            {
                                
                                //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__1__);
                                
                                //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc30) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal9262 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc30);
                        {
                            
                            //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable9261 = formal9262;
                        }
                    } else
                    throw;
                }
                
                //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                            throwable9261)))
                {
                    
                    //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable9261))
                    {
                        
                        //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable9261));
                    }
                    
                }
                
                //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var2);
                }
                
                //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(reinterpret_cast<x10::lang::CheckedThrowable*>(X10_NULL),
                                            throwable9261)))
                {
                    
                    //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable9261)))
                    {
                        
                        //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable9261));
                    }
                    
                }
                
            }
        }
        
        //#line 228 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        x10::lang::Place thisPlace = x10::lang::Place::_make(x10aux::here);
        {
            
            //#line 229 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::runAt((__extension__ ({
                                          
                                          //#line 229 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                                          x10::lang::Place this9051 =
                                            x10::lang::Place::_make(x10aux::here);
                                          this9051->x10::lang::Place::next(
                                            ((x10_long)1ll));
                                      }))
                                      , reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(Solver__closure__16)))Solver__closure__16(gDist, thisPlace))),
                                      x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
        }
        
        //#line 236 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*> swap =
          gSolutionVar;
        
        //#line 237 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
        gSolutionVar = gNewSolutionVar;
        
        //#line 238 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
        gNewSolutionVar = swap;
        
        //#line 241 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
        x10_double dist = x10::lang::MathNatives::sqrt(x10aux::nullCheck(gDist->x10::lang::PlaceLocalHandle<x10::util::concurrent::AtomicDouble*>::__apply())->x10::util::concurrent::AtomicDouble::get());
        
        //#line 242 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("Old Solution vctr: "), gSolution->x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*>::__apply())));
        
        //#line 243 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("New Solution vctr: "), gNewSolution->x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*>::__apply())));
        
        //#line 245 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
        if (((dist) < (eps))) {
            
            //#line 246 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.Branch_c
            break;
        }
        
        //#line 250 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Distance: "), dist), x10aux::makeStringLit(" > ")), epsilon), x10aux::makeStringLit("\n"))));
    }
    
    //#line 253 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return gSolutionVar->x10::lang::PlaceLocalHandle<x10::lang::Rail<x10_double >*>::__apply();
    
}

//#line 256 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
x10::lang::Rail<Solver__MatrixRow* >* Solver::graphToMatrix(
  x10::lang::Rail<WebNode* >* webGraph) {
    
    //#line 258 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<Solver__MatrixRow* >* SMatrix = x10::lang::Rail<Solver__MatrixRow* >::_make((x10_long)(x10aux::nullCheck(webGraph)->FMGL(size)),
                                                                                                reinterpret_cast<x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*> >(sizeof(Solver__closure__18)))Solver__closure__18(this))));
    
    //#line 260 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_double totalLinks = ((x10_double) ((x10_long)(x10aux::nullCheck(webGraph)->FMGL(size))));
    
    //#line 262 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<WebNode* >* rail9188 = webGraph;
    
    //#line 262 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_long size9189 = (x10_long)(x10aux::nullCheck(rail9188)->FMGL(size));
    
    //#line 262 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
    {
        x10_long idx9190;
        for (
             //#line 262 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
             idx9190 = ((x10_long)0ll); ((idx9190) < (size9189));
             
             //#line 262 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
             idx9190 = ((x10_long) ((idx9190) + (((x10_long)1ll)))))
        {
            
            //#line 262 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            WebNode* wn9191 = x10aux::nullCheck(rail9188)->x10::lang::Rail<WebNode* >::__apply(
                                idx9190);
            
            //#line 264 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_double numLinks9183 = ((x10_double) (x10aux::nullCheck(x10aux::nullCheck(wn9191)->
                                                                         FMGL(links))->size()));
            
            //#line 266 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
            if (((numLinks9183) > (((x10_double) (((x10_long)0ll))))))
            {
                
                //#line 268 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
                {
                    x10::util::ListIterator<WebNode*>* lwn9184;
                    for (
                         //#line 268 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                         lwn9184 = reinterpret_cast<x10::util::ListIterator<WebNode*>*>(x10aux::nullCheck(x10aux::nullCheck(wn9191)->
                                                                                                            FMGL(links))->iterator());
                         x10::util::ListIterator<WebNode*>::hasNext(x10aux::nullCheck(lwn9184));
                         ) {
                        
                        //#line 268 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                        WebNode* lwn9185 = x10::util::ListIterator<WebNode*>::next(x10aux::nullCheck(lwn9184));
                        
                        //#line 269 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                        x10_double prob9186 = ((1.0) / (numLinks9183));
                        
                        //#line 270 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                        Solver__NodeProb* newNode9187 =  ((new (memset(x10aux::alloc<Solver__NodeProb>(), 0, sizeof(Solver__NodeProb))) Solver__NodeProb()))
                        ;
                        
                        //#line 270 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10ConstructorCall_c
                        (newNode9187)->::Solver__NodeProb::_constructor(
                          this, ((x10_long) ((((x10_long) (x10aux::nullCheck(wn9191)->
                                                             FMGL(id)))) - (((x10_long)1ll)))),
                          prob9186, x10aux::nullCheck(x10aux::nullCheck(SMatrix)->x10::lang::Rail<Solver__MatrixRow* >::__apply(
                                                        ((x10_long) ((((x10_long) (x10aux::nullCheck(lwn9185)->
                                                                                     FMGL(id)))) - (((x10_long)1ll))))))->
                                      FMGL(last));
                        
                        //#line 271 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
                        x10aux::nullCheck(x10aux::nullCheck(SMatrix)->x10::lang::Rail<Solver__MatrixRow* >::__apply(
                                            ((x10_long) ((((x10_long) (x10aux::nullCheck(lwn9185)->
                                                                         FMGL(id)))) - (((x10_long)1ll))))))->
                          FMGL(last) = newNode9187;
                    }
                }
                
            } else {
                
                //#line 275 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                x10::lang::Rail<WebNode* >* rail9179 = webGraph;
                
                //#line 275 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                x10_long i7540max9180 = (x10_long)(x10aux::nullCheck(rail9179)->FMGL(size));
                
                //#line 275 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
                {
                    x10_long i9181;
                    for (
                         //#line 275 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                         i9181 = ((x10_long)0ll); ((i9181) < (i7540max9180));
                         
                         //#line 275 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                         i9181 = ((x10_long) ((i9181) + (((x10_long)1ll)))))
                    {
                        
                        //#line 275 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                        x10_long i9182 = i9181;
                        
                        //#line 276 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                        x10_double prob9177 = ((1.0) / (totalLinks));
                        
                        //#line 277 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                        Solver__NodeProb* newNode9178 =  ((new (memset(x10aux::alloc<Solver__NodeProb>(), 0, sizeof(Solver__NodeProb))) Solver__NodeProb()))
                        ;
                        
                        //#line 277 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10ConstructorCall_c
                        (newNode9178)->::Solver__NodeProb::_constructor(
                          this, ((x10_long) ((((x10_long) (x10aux::nullCheck(wn9191)->
                                                             FMGL(id)))) - (((x10_long)1ll)))),
                          prob9177, x10aux::nullCheck(x10aux::nullCheck(SMatrix)->x10::lang::Rail<Solver__MatrixRow* >::__apply(
                                                        i9182))->
                                      FMGL(last));
                        
                        //#line 278 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
                        x10aux::nullCheck(x10aux::nullCheck(SMatrix)->x10::lang::Rail<Solver__MatrixRow* >::__apply(
                                            i9182))->FMGL(last) =
                          newNode9178;
                    }
                }
                
            }
            
        }
    }
    
    //#line 285 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return SMatrix;
    
}

//#line 291 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
void Solver::prettyFragmentPrint(x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >* sparseMatrix,
                                 x10_long n) {
    
    //#line 293 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >* rail9200 =
      sparseMatrix;
    
    //#line 293 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_long i7596max9201 = (x10_long)(x10aux::nullCheck(rail9200)->FMGL(size));
    
    //#line 293 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
    {
        x10_long i9202;
        for (
             //#line 293 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
             i9202 = ((x10_long)0ll); ((i9202) < (i7596max9201));
             
             //#line 293 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
             i9202 = ((x10_long) ((i9202) + (((x10_long)1ll)))))
        {
            
            //#line 293 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long i9203 = i9202;
            
            //#line 295 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i7579domain9195 = (__extension__ ({
                
                //#line 295 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange alloc9196 =  x10::lang::LongRange::_alloc();
                
                //#line 34 "/opt/x10/stdlib/x10.jar:x10/lang/LongRange.x10": polyglot.ast.Empty_c
                ;
                
                //#line 34 "/opt/x10/stdlib/x10.jar:x10/lang/LongRange.x10": x10.ast.X10LocalDecl_c
                x10_long max9192 = ((x10_long) ((n) - (((x10_long)1ll))));
                
                //#line 35 "/opt/x10/stdlib/x10.jar:x10/lang/LongRange.x10": Eval of x10.ast.X10FieldAssign_c
                alloc9196->FMGL(min) = ((x10_long)0ll);
                
                //#line 35 "/opt/x10/stdlib/x10.jar:x10/lang/LongRange.x10": Eval of x10.ast.X10FieldAssign_c
                alloc9196->FMGL(max) = max9192;
                alloc9196;
            }))
            ;
            
            //#line 295 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long i7579max9197 = i7579domain9195->FMGL(max);
            
            //#line 295 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
            {
                x10_long i9198;
                for (
                     //#line 295 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                     i9198 = ((x10_long)0ll); ((i9198) <= (i7579max9197));
                     
                     //#line 295 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                     i9198 = ((x10_long) ((i9198) + (((x10_long)1ll)))))
                {
                    
                    //#line 295 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_long j9199 = i9198;
                    
                    //#line 296 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(x10aux::nullCheck(sparseMatrix)->x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >::__apply(
                                            i9203))->containsKey(
                          j9199)) {
                        
                        //#line 297 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                        x10_double prob9193 = x10aux::nullCheck(x10aux::nullCheck(x10aux::nullCheck(x10aux::nullCheck(sparseMatrix)->x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >::__apply(
                                                                                                      i9203))->get(
                                                                                    j9199))->
                                                                  FMGL(value))->
                                                FMGL(prob);
                        
                        //#line 298 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                        x10::io::Console::FMGL(OUT__get)()->print(
                          x10::lang::String::format(x10aux::makeStringLit("%0.3f "),x10::lang::Rail<x10::lang::Any* >::_make(((x10_long)1ll),
                                                                                                                             reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10::lang::Any*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10::lang::Any*> >(sizeof(Solver__closure__19)))Solver__closure__19(prob9193))))));
                    } else {
                        
                        //#line 301 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                        x10::io::Console::FMGL(OUT__get)()->print(
                          x10aux::makeStringLit("0.000 "));
                    }
                    
                }
            }
            
            //#line 304 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
}

//#line 310 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
void Solver::prettyPrint(x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >* sparseMatrix) {
    
    //#line 312 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >* rail9209 =
      sparseMatrix;
    
    //#line 312 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_long i7630max9210 = (x10_long)(x10aux::nullCheck(rail9209)->FMGL(size));
    
    //#line 312 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
    {
        x10_long i9211;
        for (
             //#line 312 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
             i9211 = ((x10_long)0ll); ((i9211) < (i7630max9210));
             
             //#line 312 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
             i9211 = ((x10_long) ((i9211) + (((x10_long)1ll)))))
        {
            
            //#line 312 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long i9212 = i9211;
            
            //#line 314 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >* rail9205 =
              sparseMatrix;
            
            //#line 314 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long i7613max9206 = (x10_long)(x10aux::nullCheck(rail9205)->FMGL(size));
            
            //#line 314 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
            {
                x10_long i9207;
                for (
                     //#line 314 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                     i9207 = ((x10_long)0ll); ((i9207) < (i7613max9206));
                     
                     //#line 314 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
                     i9207 = ((x10_long) ((i9207) + (((x10_long)1ll)))))
                {
                    
                    //#line 314 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                    x10_long j9208 = i9207;
                    
                    //#line 315 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(x10aux::nullCheck(sparseMatrix)->x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >::__apply(
                                            i9212))->containsKey(
                          j9208)) {
                        
                        //#line 316 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
                        x10_double prob9204 = x10aux::nullCheck(x10aux::nullCheck(x10aux::nullCheck(x10aux::nullCheck(sparseMatrix)->x10::lang::Rail<x10::util::HashMap<x10_long, Solver__NodeProb*>* >::__apply(
                                                                                                      i9212))->get(
                                                                                    j9208))->
                                                                  FMGL(value))->
                                                FMGL(prob);
                        
                    } else {
                        
                        //#line 318 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
                        x10::io::Console::FMGL(OUT__get)()->print(
                          x10aux::makeStringLit("0.000 "));
                    }
                    
                }
            }
            
            //#line 321 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
}

//#line 362 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
x10_double Solver::distance(x10::lang::Rail<x10_double >* v1,
                            x10::lang::Rail<x10_double >* v2) {
    
    //#line 364 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_double sum = 0.0;
    
    //#line 366 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<x10_double >* rail9216 = v1;
    
    //#line 366 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    x10_long i7647max9217 = (x10_long)(x10aux::nullCheck(rail9216)->FMGL(size));
    
    //#line 366 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": polyglot.ast.For_c
    {
        x10_long i9218;
        for (
             //#line 366 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
             i9218 = ((x10_long)0ll); ((i9218) < (i7647max9217));
             
             //#line 366 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
             i9218 = ((x10_long) ((i9218) + (((x10_long)1ll)))))
        {
            
            //#line 366 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
            x10_long i9219 = i9218;
            
            //#line 367 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10LocalAssign_c
            sum = ((sum) + (x10::lang::MathNatives::pow(((x10aux::nullCheck(v1)->x10::lang::Rail<x10_double >::__apply(
                                                            i9219)) - (x10aux::nullCheck(v2)->x10::lang::Rail<x10_double >::__apply(
                                                                         i9219))),((x10_double) (((x10_long)2ll))))));
        }
    }
    
    //#line 370 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return x10::lang::MathNatives::sqrt(sum);
    
}

//#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
Solver* Solver::Solver____this__Solver() {
    
    //#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10ConstructorDecl_c
void Solver::_constructor() {
    
    //#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.AssignPropertyCall_c
    
    //#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    Solver* this9220 = this;
    
}
Solver* Solver::_make() {
    Solver* this_ = new (memset(x10aux::alloc<Solver>(), 0, sizeof(Solver))) Solver();
    this_->_constructor();
    return this_;
}



//#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
void Solver::__fieldInitializers_Solver() {
 
}
const x10aux::serialization_id_t Solver::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void Solver::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* Solver::_deserializer(x10aux::deserialization_buffer& buf) {
    Solver* this_ = new (memset(x10aux::alloc<Solver>(), 0, sizeof(Solver))) Solver();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Solver::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType Solver::rtt;
void Solver::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Solver",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::Fun_0_1<x10_long, x10_double>::itable<Solver__closure__1>Solver__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__1::__apply, &Solver__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >, &Solver__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*>::itable<Solver__closure__2>Solver__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__2::__apply, &Solver__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*> >, &Solver__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<x10::util::HashMap<x10_long, x10_long>*>::itable<Solver__closure__3>Solver__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__3::__apply, &Solver__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10::util::HashMap<x10_long, x10_long>*> >, &Solver__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<x10::lang::Rail<Solver__MatrixRow* >*>::itable<Solver__closure__4>Solver__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__4::__apply, &Solver__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Rail<Solver__MatrixRow* >*> >, &Solver__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_long, x10_double>::itable<Solver__closure__5>Solver__closure__5::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__5::__apply, &Solver__closure__5::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__5::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >, &Solver__closure__5::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__5::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__5::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*>::itable<Solver__closure__6>Solver__closure__6::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__6::__apply, &Solver__closure__6::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__6::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*> >, &Solver__closure__6::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__6::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__6::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_long, x10_double>::itable<Solver__closure__7>Solver__closure__7::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__7::__apply, &Solver__closure__7::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__7::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >, &Solver__closure__7::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__7::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__7::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*>::itable<Solver__closure__8>Solver__closure__8::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__8::__apply, &Solver__closure__8::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__8::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10::lang::Rail<x10_double >*> >, &Solver__closure__8::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__8::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__8::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<x10::util::concurrent::AtomicDouble*>::itable<Solver__closure__9>Solver__closure__9::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__9::__apply, &Solver__closure__9::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__9::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10::util::concurrent::AtomicDouble*> >, &Solver__closure__9::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__9::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__9::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<Solver__closure__11>Solver__closure__11::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__11::__apply, &Solver__closure__11::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__11::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &Solver__closure__11::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__11::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__11::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<Solver__closure__12>Solver__closure__12::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__12::__apply, &Solver__closure__12::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__12::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &Solver__closure__12::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__12::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__12::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<Solver__closure__10>Solver__closure__10::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__10::__apply, &Solver__closure__10::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__10::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &Solver__closure__10::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__10::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__10::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<Solver__closure__15>Solver__closure__15::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__15::__apply, &Solver__closure__15::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__15::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &Solver__closure__15::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__15::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__15::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<Solver__closure__14>Solver__closure__14::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__14::__apply, &Solver__closure__14::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__14::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &Solver__closure__14::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__14::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__14::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<Solver__closure__13>Solver__closure__13::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__13::__apply, &Solver__closure__13::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__13::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &Solver__closure__13::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__13::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__13::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<Solver__closure__17>Solver__closure__17::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__17::__apply, &Solver__closure__17::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__17::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &Solver__closure__17::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__17::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__17::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<Solver__closure__16>Solver__closure__16::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__16::__apply, &Solver__closure__16::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__16::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &Solver__closure__16::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__16::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__16::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*>::itable<Solver__closure__18>Solver__closure__18::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__18::__apply, &Solver__closure__18::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__18::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, Solver__MatrixRow*> >, &Solver__closure__18::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__18::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__18::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_long, x10_double>::itable<Solver__closure__20>Solver__closure__20::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__20::__apply, &Solver__closure__20::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__20::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >, &Solver__closure__20::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__20::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__20::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_long, x10::lang::Any*>::itable<Solver__closure__19>Solver__closure__19::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Solver__closure__19::__apply, &Solver__closure__19::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Solver__closure__19::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10::lang::Any*> >, &Solver__closure__19::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Solver__closure__19::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__closure__19::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of Solver */
/*************************************************/
/*************************************************/
/* START of Solver$MatrixRow */
#include <Solver__MatrixRow.h>

#include <Solver.h>
#include <Solver__NodeProb.h>

//#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10FieldDecl_c

//#line 331 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10FieldDecl_c

//#line 333 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10ConstructorDecl_c
void Solver__MatrixRow::_constructor(Solver* out__) {
    
    //#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(out__) = out__;
    
    //#line 333 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.AssignPropertyCall_c
    
    //#line 330 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    Solver__MatrixRow* this9213 = this;
    
    //#line 330 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this9213)->FMGL(last) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 334 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(last) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
}
Solver__MatrixRow* Solver__MatrixRow::_make(Solver* out__) {
    Solver__MatrixRow* this_ = new (memset(x10aux::alloc<Solver__MatrixRow>(), 0, sizeof(Solver__MatrixRow))) Solver__MatrixRow();
    this_->_constructor(out__);
    return this_;
}



//#line 330 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
Solver__MatrixRow* Solver__MatrixRow::Solver__MatrixRow____this__Solver__MatrixRow(
  ) {
    
    //#line 330 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 330 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
Solver* Solver__MatrixRow::Solver__MatrixRow____this__Solver() {
    
    //#line 330 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return this->FMGL(out__);
    
}

//#line 330 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
void Solver__MatrixRow::__fieldInitializers_Solver_MatrixRow() {
    
    //#line 330 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(last) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
}
const x10aux::serialization_id_t Solver__MatrixRow::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__MatrixRow::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void Solver__MatrixRow::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(last));
    buf.write(this->FMGL(out__));
    
}

x10::lang::Reference* Solver__MatrixRow::_deserializer(x10aux::deserialization_buffer& buf) {
    Solver__MatrixRow* this_ = new (memset(x10aux::alloc<Solver__MatrixRow>(), 0, sizeof(Solver__MatrixRow))) Solver__MatrixRow();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Solver__MatrixRow::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(last) = buf.read<Solver__NodeProb*>();
    FMGL(out__) = buf.read<Solver*>();
}

x10aux::RuntimeType Solver__MatrixRow::rtt;
void Solver__MatrixRow::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Solver.MatrixRow",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Solver$MatrixRow */
/*************************************************/
/*************************************************/
/* START of Solver$NodeProb */
#include <Solver__NodeProb.h>

#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <Solver.h>

//#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10FieldDecl_c

//#line 341 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10FieldDecl_c

//#line 343 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10FieldDecl_c

//#line 345 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10FieldDecl_c

//#line 347 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10ConstructorDecl_c
void Solver__NodeProb::_constructor(Solver* out__, x10_long id, x10_double prob) {
    
    //#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(out__) = out__;
    
    //#line 347 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.AssignPropertyCall_c
    
    //#line 339 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    Solver__NodeProb* this9214 = this;
    
    //#line 339 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this9214)->FMGL(next) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 348 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(id) = id;
    
    //#line 349 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(prob) = prob;
    
    //#line 350 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(next) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
}
Solver__NodeProb* Solver__NodeProb::_make(Solver* out__, x10_long id, x10_double prob)
{
    Solver__NodeProb* this_ = new (memset(x10aux::alloc<Solver__NodeProb>(), 0, sizeof(Solver__NodeProb))) Solver__NodeProb();
    this_->_constructor(out__, id, prob);
    return this_;
}



//#line 353 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10ConstructorDecl_c
void Solver__NodeProb::_constructor(Solver* out__, x10_long id, x10_double prob,
                                    Solver__NodeProb* next) {
    
    //#line 14 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(out__) = out__;
    
    //#line 353 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.AssignPropertyCall_c
    
    //#line 339 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10LocalDecl_c
    Solver__NodeProb* this9215 = this;
    
    //#line 339 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this9215)->FMGL(next) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
    
    //#line 354 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(id) = id;
    
    //#line 355 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(prob) = prob;
    
    //#line 356 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(next) = next;
}
Solver__NodeProb* Solver__NodeProb::_make(Solver* out__, x10_long id,
                                          x10_double prob, Solver__NodeProb* next)
{
    Solver__NodeProb* this_ = new (memset(x10aux::alloc<Solver__NodeProb>(), 0, sizeof(Solver__NodeProb))) Solver__NodeProb();
    this_->_constructor(out__, id, prob, next);
    return this_;
}



//#line 339 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
Solver__NodeProb* Solver__NodeProb::Solver__NodeProb____this__Solver__NodeProb(
  ) {
    
    //#line 339 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 339 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
Solver* Solver__NodeProb::Solver__NodeProb____this__Solver(
  ) {
    
    //#line 339 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10Return_c
    return this->FMGL(out__);
    
}

//#line 339 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": x10.ast.X10MethodDecl_c
void Solver__NodeProb::__fieldInitializers_Solver_NodeProb(
  ) {
    
    //#line 339 "/home/pwn2107/PP/PR/MatrixMult/Solver.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(next) = (x10aux::class_cast_unchecked<Solver__NodeProb*>(reinterpret_cast<x10::lang::NullType*>(X10_NULL)));
}
const x10aux::serialization_id_t Solver__NodeProb::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Solver__NodeProb::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void Solver__NodeProb::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(id));
    buf.write(this->FMGL(prob));
    buf.write(this->FMGL(next));
    buf.write(this->FMGL(out__));
    
}

x10::lang::Reference* Solver__NodeProb::_deserializer(x10aux::deserialization_buffer& buf) {
    Solver__NodeProb* this_ = new (memset(x10aux::alloc<Solver__NodeProb>(), 0, sizeof(Solver__NodeProb))) Solver__NodeProb();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Solver__NodeProb::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(id) = buf.read<x10_long>();
    FMGL(prob) = buf.read<x10_double>();
    FMGL(next) = buf.read<Solver__NodeProb*>();
    FMGL(out__) = buf.read<Solver*>();
}

x10aux::RuntimeType Solver__NodeProb::rtt;
void Solver__NodeProb::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Solver.NodeProb",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Solver$NodeProb */
/*************************************************/
