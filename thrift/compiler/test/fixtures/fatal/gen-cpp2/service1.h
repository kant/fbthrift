/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <folly/futures/Future.h>


#include "thrift/test/fatal_custom_types.h"

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace test_cpp2 { namespace cpp_reflection {

class service1SvAsyncIf {
 public:
  virtual ~service1SvAsyncIf() {}
  virtual void async_tm_method1(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual void async_method1(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = delete;
  virtual folly::Future<folly::Unit> future_method1() = 0;
  virtual void async_tm_method2(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) = 0;
  virtual void async_method2(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) = delete;
  virtual folly::Future<folly::Unit> future_method2(int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) = 0;
  virtual void async_tm_method3(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) = 0;
  virtual void async_method3(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) = delete;
  virtual folly::Future<int32_t> future_method3() = 0;
  virtual void async_tm_method4(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) = 0;
  virtual void async_method4(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) = delete;
  virtual folly::Future<int32_t> future_method4(int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) = 0;
  virtual void async_tm_method5(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback) = 0;
  virtual void async_method5(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback) = delete;
  virtual folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_method5() = 0;
  virtual void async_tm_method6(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback, int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) = 0;
  virtual void async_method6(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback, int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) = delete;
  virtual folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_method6(int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) = 0;
};

class service1AsyncProcessor;

class service1SvIf : public service1SvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef service1AsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void method1();
  folly::Future<folly::Unit> future_method1() override;
  void async_tm_method1(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual void method2(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/);
  folly::Future<folly::Unit> future_method2(int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) override;
  void async_tm_method2(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) override;
  virtual int32_t method3();
  folly::Future<int32_t> future_method3() override;
  void async_tm_method3(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) override;
  virtual int32_t method4(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/);
  folly::Future<int32_t> future_method4(int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) override;
  void async_tm_method4(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) override;
  virtual void method5( ::test_cpp2::cpp_reflection::struct2& /*_return*/);
  folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_method5() override;
  void async_tm_method5(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback) override;
  virtual void method6( ::test_cpp2::cpp_reflection::struct2& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/);
  folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_method6(int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) override;
  void async_tm_method6(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback, int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) override;
};

class service1SvNull : public service1SvIf {
 public:
  void method1() override;
  void method2(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) override;
  int32_t method3() override;
  int32_t method4(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) override;
  void method5( ::test_cpp2::cpp_reflection::struct2& /*_return*/) override;
  void method6( ::test_cpp2::cpp_reflection::struct2& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) override;
};

class service1AsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  service1SvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<service1AsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const service1AsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static service1AsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<service1AsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const service1AsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static service1AsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_method1(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_method1(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_method1(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_method1(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_method1(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_method2(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_method2(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_method2(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_method2(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_method2(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_method3(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_method3(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_method3(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_method3(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_method3(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_method4(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_method4(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_method4(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_method4(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_method4(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_method5(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_method5(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_method5(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::test_cpp2::cpp_reflection::struct2 const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_method5(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_method5(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_method6(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_method6(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_method6(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::test_cpp2::cpp_reflection::struct2 const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_method6(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_method6(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  service1AsyncProcessor(service1SvIf* iface) :
      iface_(iface) {}

  virtual ~service1AsyncProcessor() {}
};

class service1AsyncClient : public apache::thrift::TClientBase {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, folly::DelayedDestruction::Destructor> channel_ptr;

  virtual ~service1AsyncClient() {}

  service1AsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_.reset(new apache::thrift::Cpp2ConnContext);
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }

  apache::thrift::HeaderChannel*  getHeaderChannel() {
    return dynamic_cast<apache::thrift::HeaderChannel*>(this->channel_.get());
  }
  virtual void method1(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void method1(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void sync_method1();
  virtual void sync_method1(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_method1();
  virtual folly::Future<folly::Unit> future_method1(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method1(apache::thrift::RpcOptions& rpcOptions);
  virtual void method1(std::function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_method1(::apache::thrift::ClientReceiveState& state);
  static void recv_method1(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_method1(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method1(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void method1T(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_method1T(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_method1T(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void method2(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual void method2(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual void sync_method2(int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual void sync_method2(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual folly::Future<folly::Unit> future_method2(int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual folly::Future<folly::Unit> future_method2(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method2(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual void method2(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  static folly::exception_wrapper recv_wrapped_method2(::apache::thrift::ClientReceiveState& state);
  static void recv_method2(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_method2(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method2(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void method2T(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_method2T(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_method2T(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void method3(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void method3(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual int32_t sync_method3();
  virtual int32_t sync_method3(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<int32_t> future_method3();
  virtual folly::Future<int32_t> future_method3(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method3(apache::thrift::RpcOptions& rpcOptions);
  virtual void method3(std::function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_method3(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static int32_t recv_method3(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual int32_t recv_instance_method3(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method3(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void method3T(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_method3T(Protocol_* prot, int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static int32_t recv_method3T(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void method4(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual void method4(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual int32_t sync_method4(int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual int32_t sync_method4(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual folly::Future<int32_t> future_method4(int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual folly::Future<int32_t> future_method4(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method4(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual void method4(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  static folly::exception_wrapper recv_wrapped_method4(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static int32_t recv_method4(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual int32_t recv_instance_method4(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method4(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void method4T(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_method4T(Protocol_* prot, int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static int32_t recv_method4T(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void method5(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void method5(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void sync_method5( ::test_cpp2::cpp_reflection::struct2& _return);
  virtual void sync_method5(apache::thrift::RpcOptions& rpcOptions,  ::test_cpp2::cpp_reflection::struct2& _return);
  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_method5();
  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_method5(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method5(apache::thrift::RpcOptions& rpcOptions);
  virtual void method5(std::function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_method5( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_method5( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_method5( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method5( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void method5T(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_method5T(Protocol_* prot,  ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_method5T(Protocol_* prot,  ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual void method6(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual void method6(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual void sync_method6( ::test_cpp2::cpp_reflection::struct2& _return, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual void sync_method6(apache::thrift::RpcOptions& rpcOptions,  ::test_cpp2::cpp_reflection::struct2& _return, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_method6(int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_method6(apache::thrift::RpcOptions& rpcOptions, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual folly::Future<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method6(apache::thrift::RpcOptions& rpcOptions, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual void method6(std::function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  static folly::exception_wrapper recv_wrapped_method6( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_method6( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_method6( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method6( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void method6T(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_method6T(Protocol_* prot,  ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_method6T(Protocol_* prot,  ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
 protected:
  std::unique_ptr<apache::thrift::Cpp2ConnContext> connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift