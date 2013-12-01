/*************************************************/
/* START of Main */
#include <Main.h>

#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/io/File.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/Long.h>
#include <x10/util/ArrayList.h>
#include <Main__ChallengeInput.h>
#include <x10/lang/Int.h>
#include <WebNode.h>
#include <x10/lang/Double.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Char.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Exception.h>
#include <x10/util/ListIterator.h>
#include <x10/lang/Math.h>
#include <x10/util/Timer.h>
#include <Solver.h>
#ifndef MAIN__CLOSURE__1_CLOSURE
#define MAIN__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class Main__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, WebNode*>::itable<Main__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    WebNode* __apply(x10_long i) {
        
        //#line 84 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
        WebNode* alloc7673 =  ((new (memset(x10aux::alloc<WebNode>(), 0, sizeof(WebNode))) WebNode()))
        ;
        
        //#line 6 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10LocalDecl_c
        x10_int id7670 = ((x10_int) (((x10_long) ((i) + (((x10_long)1ll))))));
        
        //#line 6 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10LocalDecl_c
        x10::util::ArrayList<WebNode*>* links7671 = (__extension__ ({
            
            //#line 84 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
            x10::util::ArrayList<WebNode*>* alloc7672 =  ((new (memset(x10aux::alloc<x10::util::ArrayList<WebNode*> >(), 0, sizeof(x10::util::ArrayList<WebNode*>))) x10::util::ArrayList<WebNode*>()))
            ;
            
            //#line 84 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10ConstructorCall_c
            (alloc7672)->::x10::util::ArrayList<WebNode*>::_constructor();
            alloc7672;
        }))
        ;
        
        //#line 7 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": Eval of x10.ast.X10FieldAssign_c
        alloc7673->FMGL(id) = id7670;
        
        //#line 8 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": Eval of x10.ast.X10FieldAssign_c
        alloc7673->FMGL(links) = links7671;
        
        //#line 84 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
        return alloc7673;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        Main__closure__1* storage = x10aux::alloc<Main__closure__1>();
        buf.record_reference(storage);
        Main__closure__1* this_ = new (storage) Main__closure__1();
        return this_;
    }
    
    Main__closure__1() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, WebNode*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, WebNode*> >(); }
    
    const char* toNativeString() {
        return "/home/pwn2107/PP/PR/MatrixMult/Main.x10:84";
    }

};

#endif // MAIN__CLOSURE__1_CLOSURE

//#line 43 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
void Main::main(x10::lang::Rail<x10::lang::String* >* args) {
    
    //#line 45 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10::io::File* F;
    
    //#line 46 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals((x10_long)(x10aux::nullCheck(args)->FMGL(size)),
                                ((x10_long)1ll)))) {
        
        //#line 47 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(ERR__get)()->x10::io::Printer::println(reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::nullCheck(args)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                                                                                                    ((x10_long)0ll)), x10aux::makeStringLit(" is not a valid file"))));
        
        //#line 48 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10::lang::String::__plus(x10aux::nullCheck(args)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                                                                                        ((x10_long)0ll)), x10aux::makeStringLit(" is not a valid file")))));
    }
    
    //#line 50 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* filename = x10aux::nullCheck(args)->x10::lang::Rail<x10::lang::String* >::__apply(
                                    ((x10_long) (((x10_int)0))));
    
    //#line 51 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
    F = (__extension__ ({
        
        //#line 51 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
        x10::io::File* alloc3821 =  ((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
        ;
        
        //#line 51 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10ConstructorCall_c
        (alloc3821)->::x10::io::File::_constructor(filename);
        alloc3821;
    }))
    ;
    
    //#line 53 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10::util::ArrayList<Main__ChallengeInput>* challengeInputs =
       ((new (memset(x10aux::alloc<x10::util::ArrayList<Main__ChallengeInput> >(), 0, sizeof(x10::util::ArrayList<Main__ChallengeInput>))) x10::util::ArrayList<Main__ChallengeInput>()))
    ;
    
    //#line 53 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10ConstructorCall_c
    (challengeInputs)->::x10::util::ArrayList<Main__ChallengeInput>::_constructor();
    
    //#line 56 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10_int lineCount = ((x10_int)0);
    
    //#line 57 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10_int n = ((x10_int)0);
    
    //#line 58 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    Main__ChallengeInput thisChallengeInput =  Main__ChallengeInput::_alloc();
    
    //#line 58 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10ConstructorCall_c
    (thisChallengeInput)->::Main__ChallengeInput::_constructor(
      x10::lang::Rail<WebNode* >::_make(((x10_long)0ll)),
      1.0, ((x10_double) (((x10_int)0))), (__extension__ ({
          
          //#line 58 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
          x10::util::ArrayList<x10_double>* alloc3822 =  ((new (memset(x10aux::alloc<x10::util::ArrayList<x10_double> >(), 0, sizeof(x10::util::ArrayList<x10_double>))) x10::util::ArrayList<x10_double>()))
          ;
          
          //#line 58 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10ConstructorCall_c
          (alloc3822)->::x10::util::ArrayList<x10_double>::_constructor();
          alloc3822;
      }))
      , ((x10_double) (((x10_long)0ll))));
    
    //#line 59 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::lang::String*>* line3865;
        for (
             //#line 59 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
             line3865 = x10aux::nullCheck(x10aux::nullCheck(F)->lines())->iterator();
             x10::lang::Iterator<x10::lang::String*>::hasNext(x10aux::nullCheck(line3865));
             ) {
            
            //#line 59 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* line = x10::lang::Iterator<x10::lang::String*>::next(x10aux::nullCheck(line3865));
            
            //#line 61 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(((line)->trim())->length(),
                                       ((x10_int)0)))) {
                
                //#line 62 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.Branch_c
                continue;
            }
            
            //#line 65 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals((line)->charAt(((x10_int)0)),
                                       ((x10_char)'/'))))
            {
                
                //#line 66 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
                x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(line));
                
                //#line 67 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.Branch_c
                continue;
            }
            
            //#line 70 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(lineCount, ((x10_int)0))))
            {
                
                //#line 74 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                x10::lang::Rail<x10::lang::String* >* splitFirstLine =
                  x10::lang::StringHelper::split(x10aux::makeStringLit(" "), line);
                
                //#line 76 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
                n = x10::lang::IntNatives::parseInt(x10aux::nullCheck(splitFirstLine)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                      ((x10_long)0ll)));
                
                //#line 78 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                x10_double dampingFactor = x10::lang::DoubleNatives::parseDouble(x10aux::nullCheck(splitFirstLine)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                                                   ((x10_long)1ll)));
                
                //#line 80 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                x10_double epsilon = x10::lang::DoubleNatives::parseDouble(x10aux::nullCheck(splitFirstLine)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                                             ((x10_long)2ll)));
                
                //#line 82 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                x10_double baseline_time = x10::lang::DoubleNatives::parseDouble(x10aux::nullCheck(splitFirstLine)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                                                   ((x10_long)3ll)));
                
                //#line 84 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
                thisChallengeInput = (__extension__ ({
                    
                    //#line 84 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                    Main__ChallengeInput alloc3826 =  Main__ChallengeInput::_alloc();
                    
                    //#line 84 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10ConstructorCall_c
                    (alloc3826)->::Main__ChallengeInput::_constructor(
                      x10::lang::Rail<WebNode* >::_make(((x10_long) (n)),
                                                        reinterpret_cast<x10::lang::Fun_0_1<x10_long, WebNode*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, WebNode*> >(sizeof(Main__closure__1)))Main__closure__1()))),
                      dampingFactor, epsilon, (__extension__ ({
                          
                          //#line 84 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                          x10::util::ArrayList<x10_double>* alloc3825 =
                             ((new (memset(x10aux::alloc<x10::util::ArrayList<x10_double> >(), 0, sizeof(x10::util::ArrayList<x10_double>))) x10::util::ArrayList<x10_double>()))
                          ;
                          
                          //#line 84 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10ConstructorCall_c
                          (alloc3825)->::x10::util::ArrayList<x10_double>::_constructor();
                          alloc3825;
                      }))
                      , baseline_time);
                    alloc3826;
                }))
                ;
                
                //#line 85 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
                lineCount = ((x10_int) ((lineCount) + (((x10_int)1))));
            } else 
            //#line 86 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
            if (((lineCount) <= (n))) {
                
                //#line 91 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                x10::lang::Rail<x10::lang::String* >* splitContinuingLine =
                  x10::lang::StringHelper::split(x10aux::makeStringLit(":"), line);
                
                //#line 92 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                x10::lang::Rail<x10::lang::String* >* splitContinuingLineLeft =
                  x10::lang::StringHelper::split(x10aux::makeStringLit(" "), (x10aux::nullCheck(splitContinuingLine)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                                                ((x10_long)0ll)))->trim());
                
                //#line 93 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                x10::lang::Rail<x10::lang::String* >* splitContinuingLineRight =
                  (((x10_long)(x10aux::nullCheck(splitContinuingLine)->FMGL(size))) > (((x10_long)1ll)))
                  ? (x10::lang::StringHelper::split(x10aux::makeStringLit(" "), (x10aux::nullCheck(splitContinuingLine)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                                                   ((x10_long)1ll)))->trim()))
                  : (x10::lang::Rail<x10::lang::String* >::_make(((x10_long)0ll)));
                
                //#line 95 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                x10_double pagerankSolution = x10::lang::DoubleNatives::parseDouble(x10aux::nullCheck(splitContinuingLineLeft)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                                                      ((x10_long)0ll)));
                
                //#line 97 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                x10_int nodeNumber = x10::lang::IntNatives::parseInt(x10aux::nullCheck(splitContinuingLineLeft)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                                       ((x10_long)1ll)));
                
                //#line 98 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(nodeNumber, lineCount)))
                {
                    
                    //#line 99 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make(x10aux::makeStringLit("Websites must be labeled 1, 2, 3, ..., n"))));
                }
                
                //#line 102 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.For_c
                {
                    x10_int i;
                    for (
                         //#line 102 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                         i = ((x10_int)0); ((((x10_long) (i))) < ((x10_long)(x10aux::nullCheck(splitContinuingLineRight)->FMGL(size))));
                         
                         //#line 102 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
                         i = ((x10_int) ((i) + (((x10_int)1)))))
                    {
                        
                        //#line 103 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                        x10_long linkIndex = ((x10_long) ((((x10_long) (x10::lang::IntNatives::parseInt(x10aux::nullCheck(splitContinuingLineRight)->x10::lang::Rail<x10::lang::String* >::__apply(
                                                                                                          ((x10_long) (i))))))) - (((x10_long)1ll))));
                        
                        //#line 104 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
                        if (((linkIndex) >= (((x10_long)0ll))) &&
                            ((linkIndex) < (((x10_long) (n)))))
                        {
                            
                            //#line 106 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
                            x10aux::nullCheck(x10aux::nullCheck(x10aux::nullCheck(thisChallengeInput->
                                                                                    FMGL(webGraph))->x10::lang::Rail<WebNode* >::__apply(
                                                                  ((x10_long) ((((x10_long) (lineCount))) - (((x10_long)1ll))))))->
                                                FMGL(links))->add(
                              x10aux::nullCheck(thisChallengeInput->
                                                  FMGL(webGraph))->x10::lang::Rail<WebNode* >::__apply(
                                linkIndex));
                        }
                        
                    }
                }
                
                //#line 110 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(thisChallengeInput->FMGL(solutions))->add(
                  pagerankSolution);
                
                //#line 112 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
                if (((lineCount) < (n))) {
                    
                    //#line 113 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
                    lineCount = ((x10_int) ((lineCount) + (((x10_int)1))));
                } else {
                    
                    //#line 116 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
                    challengeInputs->add(thisChallengeInput);
                    
                    //#line 117 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
                    lineCount = ((x10_int)0);
                }
                
            }
            
        }
    }
    
    //#line 122 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("")));
    
    //#line 123 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.Try_c
    try {
        
        //#line 124 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
        x10_double prod = 1.0;
        
        //#line 125 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.For_c
        {
            x10::util::ListIterator<Main__ChallengeInput>* input3867;
            for (
                 //#line 125 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                 input3867 = reinterpret_cast<x10::util::ListIterator<Main__ChallengeInput>*>(challengeInputs->iterator());
                 x10::util::ListIterator<Main__ChallengeInput>::hasNext(x10aux::nullCheck(input3867));
                 ) {
                
                //#line 125 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                Main__ChallengeInput input = x10::util::ListIterator<Main__ChallengeInput>::next(x10aux::nullCheck(input3867));
                
                //#line 126 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
                prod = ((prod) * (Main::run_one_test(input)));
            }
        }
        
        //#line 127 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
        x10_double geom_mean = x10::lang::MathNatives::pow(prod,((1.0) / (((x10_double) (challengeInputs->size())))));
        
        //#line 129 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
        x10::lang::String* geom_mean_String = x10::lang::String::format(x10aux::makeStringLit("%.2f"),x10::lang::Rail<x10::lang::Any* >::_make(((x10_long)1ll),
                                                                                                                                               x10aux::class_cast_unchecked<x10::lang::Any*>(geom_mean)));
        
        //#line 130 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->println();
        
        //#line 131 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("Geometric Mean Speedup: "), geom_mean_String)));
    }
    catch (x10::lang::CheckedThrowable* __exc1) {
        if (x10aux::instanceof<x10::lang::Exception*>(__exc1)) {
            x10::lang::Exception* id__0 = static_cast<x10::lang::Exception*>(__exc1);
            {
                
                //#line 133 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
                x10::io::Console::FMGL(OUT__get)()->println();
                
                //#line 134 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
                x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("Geometric Mean Speedup: "), x10aux::makeStringLit("None ... answer was wrong."))));
            }
        } else
        throw;
    }
}

//#line 144 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
x10_double Main::run_one_test(Main__ChallengeInput input) {
    
    //#line 145 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10::lang::Rail<x10_double >* speedups = x10::lang::Rail<x10_double >::_make(((x10_long)3ll));
    
    //#line 147 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("Baseline time: "), input->
                                                                                                              FMGL(baseline_time))));
    
    //#line 148 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.For_c
    {
        x10_int index;
        for (
             //#line 148 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
             index = ((x10_int)0); ((((x10_long) (index))) < (((x10_long)3ll)));
             
             //#line 148 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
             index = ((x10_int) ((index) + (((x10_int)1)))))
        {
            
            //#line 149 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
            x10_long start = x10::lang::RuntimeNatives::currentTimeMillis();
            
            //#line 151 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
            Solver* solver =  ((new (memset(x10aux::alloc<Solver>(), 0, sizeof(Solver))) Solver()))
            ;
            
            //#line 153 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
            x10::lang::Rail<x10_double >* solutions = x10aux::nullCheck(solver)->solve(
                                                        input->
                                                          FMGL(webGraph),
                                                        input->
                                                          FMGL(dampingFactor),
                                                        input->
                                                          FMGL(epsilon));
            
            //#line 154 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
            x10_long end = x10::lang::RuntimeNatives::currentTimeMillis();
            
            //#line 155 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
            x10_long time_in_millis = ((x10_long) ((end) - (start)));
            
            //#line 157 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(x10aux::nullCheck(input->
                                                            FMGL(solutions))->size(),
                                        (x10_long)(x10aux::nullCheck(solutions)->FMGL(size)))))
            {
                
                //#line 158 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
                x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("Wrong output size")));
                
                //#line 159 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make(x10aux::makeStringLit("Wrong answer"))));
            }
            
            //#line 161 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
            x10_double deltaSquared = ((x10_double) (((x10_long)0ll)));
            
            //#line 162 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
            x10_boolean isWrong = false;
            
            //#line 163 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.For_c
            {
                x10_int i;
                for (
                     //#line 163 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                     i = ((x10_int)0); ((((x10_long) (i))) < (x10aux::nullCheck(input->
                                                                                  FMGL(solutions))->size()));
                     
                     //#line 163 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
                     i = ((x10_int) ((i) + (((x10_int)1)))))
                {
                    
                    //#line 164 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
                    deltaSquared = ((deltaSquared) + (((((x10aux::nullCheck(solutions)->x10::lang::Rail<x10_double >::__apply(
                                                            ((x10_long) (i)))) - (x10aux::nullCheck(input->
                                                                                                      FMGL(solutions))->get(
                                                                                    ((x10_long) (i)))))) * (((x10aux::nullCheck(solutions)->x10::lang::Rail<x10_double >::__apply(
                                                                                                                ((x10_long) (i)))) - (x10aux::nullCheck(input->
                                                                                                                                                          FMGL(solutions))->get(
                                                                                                                                        ((x10_long) (i)))))))));
                    
                    //#line 165 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
                    x10::lang::String* givenAnswer = x10aux::to_string(x10aux::nullCheck(solutions)->x10::lang::Rail<x10_double >::__apply(
                                                                         ((x10_long) (i))));
                    
                }
            }
            
            //#line 168 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
            if (((x10::lang::MathNatives::sqrt(deltaSquared)) > (input->
                                                                   FMGL(epsilon))))
            {
                
                //#line 169 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
                x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Error was too large. Delta ("), x10::lang::MathNatives::sqrt(deltaSquared)), x10aux::makeStringLit(") was greater than epsilon (")), input->
                                                                                                                                                                                                                                                                                                                          FMGL(epsilon)), x10aux::makeStringLit(")"))));
                
                //#line 170 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make(x10aux::makeStringLit("Wrong answer"))));
            }
            
            //#line 172 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("Correct!")));
            
            //#line 178 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(time_in_millis, ((x10_long)0ll))))
            {
                
                //#line 179 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
                time_in_millis = ((x10_long)1ll);
            }
            
            //#line 182 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
            speedups->x10::lang::Rail<x10_double >::__set(
              ((x10_long) (index)), ((input->FMGL(baseline_time)) / (((x10_double) (time_in_millis)))));
            
            //#line 183 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10aux::makeStringLit("Time taken: "), time_in_millis)));
        }
    }
    
    //#line 186 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10_double med = Main::median(speedups->x10::lang::Rail<x10_double >::__apply(
                                    ((x10_long)0ll)), speedups->x10::lang::Rail<x10_double >::__apply(
                                                        ((x10_long)1ll)),
                                  speedups->x10::lang::Rail<x10_double >::__apply(
                                    ((x10_long)2ll)));
    
    //#line 188 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* speedup_0_String = x10::lang::String::format(x10aux::makeStringLit("%.2f"),x10::lang::Rail<x10::lang::Any* >::_make(((x10_long)1ll),
                                                                                                                                           x10aux::class_cast_unchecked<x10::lang::Any*>(speedups->x10::lang::Rail<x10_double >::__apply(
                                                                                                                                                                                           ((x10_long)0ll)))));
    
    //#line 189 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* speedup_1_String = x10::lang::String::format(x10aux::makeStringLit("%.2f"),x10::lang::Rail<x10::lang::Any* >::_make(((x10_long)1ll),
                                                                                                                                           x10aux::class_cast_unchecked<x10::lang::Any*>(speedups->x10::lang::Rail<x10_double >::__apply(
                                                                                                                                                                                           ((x10_long)1ll)))));
    
    //#line 190 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* speedup_2_String = x10::lang::String::format(x10aux::makeStringLit("%.2f"),x10::lang::Rail<x10::lang::Any* >::_make(((x10_long)1ll),
                                                                                                                                           x10aux::class_cast_unchecked<x10::lang::Any*>(speedups->x10::lang::Rail<x10_double >::__apply(
                                                                                                                                                                                           ((x10_long)2ll)))));
    
    //#line 191 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* median_speedup_String = x10::lang::String::format(x10aux::makeStringLit("%.2f"),x10::lang::Rail<x10::lang::Any* >::_make(((x10_long)1ll),
                                                                                                                                                x10aux::class_cast_unchecked<x10::lang::Any*>(med)));
    
    //#line 196 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("    Speedups: ["), speedup_0_String), x10aux::makeStringLit(", ")), speedup_1_String), x10aux::makeStringLit(", ")), speedup_2_String), x10aux::makeStringLit("] ... median: ")), median_speedup_String), x10aux::makeStringLit("\n"))));
    
    //#line 200 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
    return med;
    
}

//#line 206 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
x10_double Main::median(x10_double v1, x10_double v2, x10_double v3) {
    
    //#line 208 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
    if (((v1) > (v2))) {
        
        //#line 210 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
        if (((v3) > (v1))) {
            
            //#line 211 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
            return v1;
            
        } else 
        //#line 212 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
        if (((v3) > (v2))) {
            
            //#line 213 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
            return v3;
            
        } else {
            
            //#line 215 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
            return v2;
            
        }
        
    } else 
    //#line 219 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
    if (((v3) > (v2))) {
        
        //#line 220 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
        return v2;
        
    } else 
    //#line 221 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
    if (((v3) > (v1))) {
        
        //#line 222 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
        return v3;
        
    } else {
        
        //#line 224 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
        return v1;
        
    }
    
}

//#line 21 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
Main* Main::Main____this__Main() {
    
    //#line 21 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 21 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10ConstructorDecl_c
void Main::_constructor() {
    
    //#line 21 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.AssignPropertyCall_c
    
    //#line 21 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    Main* this7674 = this;
    
}
Main* Main::_make() {
    Main* this_ = new (memset(x10aux::alloc<Main>(), 0, sizeof(Main))) Main();
    this_->_constructor();
    return this_;
}



//#line 21 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
void Main::__fieldInitializers_Main() {
 
}
const x10aux::serialization_id_t Main::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Main::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void Main::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* Main::_deserializer(x10aux::deserialization_buffer& buf) {
    Main* this_ = new (memset(x10aux::alloc<Main>(), 0, sizeof(Main))) Main();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Main::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType Main::rtt;
void Main::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Main",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::Fun_0_1<x10_long, WebNode*>::itable<Main__closure__1>Main__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &Main__closure__1::__apply, &Main__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry Main__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, WebNode*> >, &Main__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t Main__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(Main__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of Main */
/*************************************************/
/*************************************************/
/* START of Main$ChallengeInput */
#include <Main__ChallengeInput.h>

#include <x10/lang/Any.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <WebNode.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
class Main__ChallengeInput_ibox0 : public x10::lang::IBox<Main__ChallengeInput> {
public:
    static x10::lang::Any::itable<Main__ChallengeInput_ibox0 > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
x10::lang::Any::itable<Main__ChallengeInput_ibox0 >  Main__ChallengeInput_ibox0::itable(&Main__ChallengeInput_ibox0::equals, &Main__ChallengeInput_ibox0::hashCode, &Main__ChallengeInput_ibox0::toString, &Main__ChallengeInput_ibox0::typeName);
x10::lang::Any::itable<Main__ChallengeInput >  Main__ChallengeInput::_itable_0(&Main__ChallengeInput::equals, &Main__ChallengeInput::hashCode, &Main__ChallengeInput::toString, &Main__ChallengeInput::typeName);
x10aux::itable_entry Main__ChallengeInput::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &Main__ChallengeInput::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<Main__ChallengeInput>())};
x10aux::itable_entry Main__ChallengeInput::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &Main__ChallengeInput_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<Main__ChallengeInput>())};

//#line 27 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10FieldDecl_c

//#line 28 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10FieldDecl_c

//#line 29 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10FieldDecl_c

//#line 30 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10FieldDecl_c

//#line 31 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10FieldDecl_c

//#line 34 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10ConstructorDecl_c
void Main__ChallengeInput::_constructor(x10::lang::Rail<WebNode* >* webGraph,
                                        x10_double dampingFactor, x10_double epsilon,
                                        x10::util::ArrayList<x10_double>* solutions,
                                        x10_double time) {
    
    //#line 34 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.AssignPropertyCall_c
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    Main__ChallengeInput this7669 = (*this);
    
    //#line 35 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(webGraph) = webGraph;
    
    //#line 36 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(dampingFactor) = dampingFactor;
    
    //#line 37 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(epsilon) = epsilon;
    
    //#line 38 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(solutions) = solutions;
    
    //#line 39 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(baseline_time) = time;
}
Main__ChallengeInput Main__ChallengeInput::_make(x10::lang::Rail<WebNode* >* webGraph,
                                                 x10_double dampingFactor,
                                                 x10_double epsilon,
                                                 x10::util::ArrayList<x10_double>* solutions,
                                                 x10_double time)
{
    Main__ChallengeInput this_; 
    this_->_constructor(webGraph, dampingFactor, epsilon,
    solutions, time);
    return this_;
}



//#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
x10::lang::String* Main__ChallengeInput::typeName(){
    return x10aux::type_name((*this));
}

//#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
x10::lang::String* Main__ChallengeInput::toString() {
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct Main.ChallengeInput:"), x10aux::makeStringLit(" webGraph=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                             FMGL(webGraph)), x10aux::makeStringLit(" dampingFactor=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                           FMGL(dampingFactor)), x10aux::makeStringLit(" epsilon=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        FMGL(epsilon)), x10aux::makeStringLit(" solutions=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 FMGL(solutions)), x10aux::makeStringLit(" baseline_time=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                FMGL(baseline_time));
    
}

//#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
x10_int Main__ChallengeInput::hashCode() {
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(webGraph)))));
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(dampingFactor)))));
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(epsilon)))));
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(solutions)))));
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(baseline_time)))));
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
x10_boolean Main__ChallengeInput::equals(x10::lang::Any* other) {
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<Main__ChallengeInput>(other)))
    {
        
        //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
    return (*this)->Main__ChallengeInput::equals(x10aux::class_cast<Main__ChallengeInput>(other));
    
}

//#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
x10_boolean Main__ChallengeInput::_struct_equals(x10::lang::Any* other) {
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<Main__ChallengeInput>(other)))
    {
        
        //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10Return_c
    return (*this)->Main__ChallengeInput::_struct_equals(
             x10aux::class_cast<Main__ChallengeInput>(other));
    
}

//#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/pwn2107/PP/PR/MatrixMult/Main.x10": x10.ast.X10MethodDecl_c
void Main__ChallengeInput::_serialize(Main__ChallengeInput this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(webGraph));
    buf.write(this_->FMGL(dampingFactor));
    buf.write(this_->FMGL(epsilon));
    buf.write(this_->FMGL(solutions));
    buf.write(this_->FMGL(baseline_time));
    
}

void Main__ChallengeInput::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(webGraph) = buf.read<x10::lang::Rail<WebNode* >*>();
    FMGL(dampingFactor) = buf.read<x10_double>();
    FMGL(epsilon) = buf.read<x10_double>();
    FMGL(solutions) = buf.read<x10::util::ArrayList<x10_double>*>();
    FMGL(baseline_time) = buf.read<x10_double>();
}


x10aux::RuntimeType Main__ChallengeInput::rtt;
void Main__ChallengeInput::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("Main.ChallengeInput",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

/* END of Main$ChallengeInput */
/*************************************************/
