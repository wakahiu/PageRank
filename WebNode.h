#ifndef __WEBNODE_H
#define __WEBNODE_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class String;
} } 
class WebNode : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(id);
    
    x10::util::ArrayList<WebNode*>* FMGL(links);
    
    void _constructor(x10_int id, x10::util::ArrayList<WebNode*>* links);
    
    static WebNode* _make(x10_int id, x10::util::ArrayList<WebNode*>* links);
    
    virtual x10::lang::String* toString();
    virtual WebNode* WebNode____this__WebNode();
    virtual void __fieldInitializers_WebNode();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // WEBNODE_H

class WebNode;

#ifndef WEBNODE_H_NODEPS
#define WEBNODE_H_NODEPS
#ifndef WEBNODE_H_GENERICS
#define WEBNODE_H_GENERICS
#endif // WEBNODE_H_GENERICS
#endif // __WEBNODE_H_NODEPS
