/*************************************************/
/* START of WebNode */
#include <WebNode.h>

#include <x10/lang/Int.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/String.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>

//#line 4 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10FieldDecl_c

//#line 5 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10FieldDecl_c

//#line 6 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10ConstructorDecl_c
void WebNode::_constructor(x10_int id, x10::util::ArrayList<WebNode*>* links) {
    
    //#line 6 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.AssignPropertyCall_c
    
    //#line 3 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10LocalDecl_c
    WebNode* this9267 = this;
    
    //#line 7 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(id) = id;
    
    //#line 8 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(links) = links;
}
WebNode* WebNode::_make(x10_int id, x10::util::ArrayList<WebNode*>* links)
{
    WebNode* this_ = new (memset(x10aux::alloc<WebNode>(), 0, sizeof(WebNode))) WebNode();
    this_->_constructor(id, links);
    return this_;
}



//#line 10 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10MethodDecl_c
x10::lang::String* WebNode::toString() {
    
    //#line 11 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* result = x10aux::makeStringLit(": ");
    
    //#line 12 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 12 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((((x10_long) (i))) < (x10aux::nullCheck(this->
                                                                          FMGL(links))->size()));
             
             //#line 12 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": Eval of x10.ast.X10LocalAssign_c
             i = ((x10_int) ((i) + (((x10_int)1))))) {
            
            //#line 13 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": Eval of x10.ast.X10LocalAssign_c
            result = x10::lang::String::__plus(result, x10::lang::String::__plus(x10aux::nullCheck(x10aux::nullCheck(this->
                                                                                                                       FMGL(links))->__apply(
                                                                                                     ((x10_long) (i))))->
                                                                                   FMGL(id), x10aux::makeStringLit(" ")));
        }
    }
    
    //#line 15 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 3 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10MethodDecl_c
WebNode* WebNode::WebNode____this__WebNode() {
    
    //#line 3 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 3 "/home/pwn2107/PP/PR/MatrixMult/WebNode.x10": x10.ast.X10MethodDecl_c
void WebNode::__fieldInitializers_WebNode() {
 
}
const x10aux::serialization_id_t WebNode::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(WebNode::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void WebNode::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(id));
    buf.write(this->FMGL(links));
    
}

x10::lang::Reference* WebNode::_deserializer(x10aux::deserialization_buffer& buf) {
    WebNode* this_ = new (memset(x10aux::alloc<WebNode>(), 0, sizeof(WebNode))) WebNode();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void WebNode::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(id) = buf.read<x10_int>();
    FMGL(links) = buf.read<x10::util::ArrayList<WebNode*>*>();
}

x10aux::RuntimeType WebNode::rtt;
void WebNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("WebNode",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of WebNode */
/*************************************************/
