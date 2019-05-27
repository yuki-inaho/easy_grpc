// This code was generated by the easy_grpc protoc plugin.

#include "hello.egrpc.pb.h"

namespace pkg {

// ********** HelloService ********** //

namespace {
const char* kHelloService_SayHello_name = "/pkg.HelloService/SayHello";
const char* kHelloService_SayBye_name = "/pkg.HelloService/SayBye";
}

HelloService::HelloService() 
  : SayHello_method(kHelloService_SayHello_name)
  , SayBye_method(kHelloService_SayBye_name) {}

HelloService::Stub::Stub(::easy_grpc::client::Channel* c, ::easy_grpc::Completion_queue* default_pool)
  : channel_(c), default_queue_(default_pool ? default_pool : c->default_pool())
  , SayHello_tag_(c->register_method(kHelloService_SayHello_name))
  , SayBye_tag_(c->register_method(kHelloService_SayBye_name)) {}

// SayHello
::easy_grpc::Future<::pkg::HelloReply> HelloService::Stub::SayHello(::pkg::HelloRequest req, ::easy_grpc::client::Call_options options) {
  if(!options.completion_queue) { options.completion_queue = default_queue_; }
  return ::easy_grpc::client::start_unary_call<::pkg::HelloReply>(channel_, SayHello_tag_, std::move(req), std::move(options));
};

::easy_grpc::Future<::pkg::HelloReply> HelloService::handle_SayHello() {return {};}

// SayBye
::easy_grpc::Future<::pkg::HelloReply> HelloService::Stub::SayBye(::pkg::HelloRequest req, ::easy_grpc::client::Call_options options) {
  if(!options.completion_queue) { options.completion_queue = default_queue_; }
  return ::easy_grpc::client::start_unary_call<::pkg::HelloReply>(channel_, SayBye_tag_, std::move(req), std::move(options));
};

::easy_grpc::Future<::pkg::HelloReply> HelloService::handle_SayBye() {return {};}

void HelloService::visit_methods(::easy_grpc::server::detail::Method_visitor& visitor) {
  visitor.visit(SayHello_method);
  visitor.visit(SayBye_method);
}
void HelloService::start_listening_(const char* method_name, ::easy_grpc::Completion_queue* queue) {}
} // namespacepkg

