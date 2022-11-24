// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: company_stock_price.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_company_5fstock_5fprice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_company_5fstock_5fprice_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_company_5fstock_5fprice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_company_5fstock_5fprice_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_company_5fstock_5fprice_2eproto;
class company_stock_price;
struct company_stock_priceDefaultTypeInternal;
extern company_stock_priceDefaultTypeInternal _company_stock_price_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::company_stock_price* Arena::CreateMaybeMessage<::company_stock_price>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class company_stock_price final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:company_stock_price) */ {
 public:
  inline company_stock_price() : company_stock_price(nullptr) {}
  ~company_stock_price() override;
  explicit PROTOBUF_CONSTEXPR company_stock_price(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  company_stock_price(const company_stock_price& from);
  company_stock_price(company_stock_price&& from) noexcept
    : company_stock_price() {
    *this = ::std::move(from);
  }

  inline company_stock_price& operator=(const company_stock_price& from) {
    CopyFrom(from);
    return *this;
  }
  inline company_stock_price& operator=(company_stock_price&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const company_stock_price& default_instance() {
    return *internal_default_instance();
  }
  static inline const company_stock_price* internal_default_instance() {
    return reinterpret_cast<const company_stock_price*>(
               &_company_stock_price_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(company_stock_price& a, company_stock_price& b) {
    a.Swap(&b);
  }
  inline void Swap(company_stock_price* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(company_stock_price* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  company_stock_price* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<company_stock_price>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const company_stock_price& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const company_stock_price& from) {
    company_stock_price::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(company_stock_price* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "company_stock_price";
  }
  protected:
  explicit company_stock_price(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTryBytesFieldNumber = 6,
    kTryVarcharFieldNumber = 11,
    kTryCharFieldNumber = 12,
    kTryBigtextFieldNumber = 14,
    kTradingDateFieldNumber = 4,
    kLastLoginTimeFieldNumber = 5,
    kTryTimeFieldNumber = 13,
    kIdFieldNumber = 1,
    kCompanyIdFieldNumber = 2,
    kStockPriceFieldNumber = 3,
    kTryFloatFieldNumber = 8,
    kTryBoolFieldNumber = 7,
    kTryBitFieldNumber = 10,
    kTryDecFieldNumber = 9,
  };
  // bytes try_bytes = 6;
  void clear_try_bytes();
  const std::string& try_bytes() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_try_bytes(ArgT0&& arg0, ArgT... args);
  std::string* mutable_try_bytes();
  PROTOBUF_NODISCARD std::string* release_try_bytes();
  void set_allocated_try_bytes(std::string* try_bytes);
  private:
  const std::string& _internal_try_bytes() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_try_bytes(const std::string& value);
  std::string* _internal_mutable_try_bytes();
  public:

  // string try_varchar = 11;
  void clear_try_varchar();
  const std::string& try_varchar() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_try_varchar(ArgT0&& arg0, ArgT... args);
  std::string* mutable_try_varchar();
  PROTOBUF_NODISCARD std::string* release_try_varchar();
  void set_allocated_try_varchar(std::string* try_varchar);
  private:
  const std::string& _internal_try_varchar() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_try_varchar(const std::string& value);
  std::string* _internal_mutable_try_varchar();
  public:

  // string try_char = 12;
  void clear_try_char();
  const std::string& try_char() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_try_char(ArgT0&& arg0, ArgT... args);
  std::string* mutable_try_char();
  PROTOBUF_NODISCARD std::string* release_try_char();
  void set_allocated_try_char(std::string* try_char);
  private:
  const std::string& _internal_try_char() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_try_char(const std::string& value);
  std::string* _internal_mutable_try_char();
  public:

  // string try_bigtext = 14;
  void clear_try_bigtext();
  const std::string& try_bigtext() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_try_bigtext(ArgT0&& arg0, ArgT... args);
  std::string* mutable_try_bigtext();
  PROTOBUF_NODISCARD std::string* release_try_bigtext();
  void set_allocated_try_bigtext(std::string* try_bigtext);
  private:
  const std::string& _internal_try_bigtext() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_try_bigtext(const std::string& value);
  std::string* _internal_mutable_try_bigtext();
  public:

  // .google.protobuf.Timestamp trading_date = 4;
  bool has_trading_date() const;
  private:
  bool _internal_has_trading_date() const;
  public:
  void clear_trading_date();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& trading_date() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_trading_date();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_trading_date();
  void set_allocated_trading_date(::PROTOBUF_NAMESPACE_ID::Timestamp* trading_date);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_trading_date() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_trading_date();
  public:
  void unsafe_arena_set_allocated_trading_date(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* trading_date);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_trading_date();

  // .google.protobuf.Timestamp last_login_time = 5;
  bool has_last_login_time() const;
  private:
  bool _internal_has_last_login_time() const;
  public:
  void clear_last_login_time();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& last_login_time() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_last_login_time();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_last_login_time();
  void set_allocated_last_login_time(::PROTOBUF_NAMESPACE_ID::Timestamp* last_login_time);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_last_login_time() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_last_login_time();
  public:
  void unsafe_arena_set_allocated_last_login_time(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* last_login_time);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_last_login_time();

  // .google.protobuf.Timestamp try_time = 13;
  bool has_try_time() const;
  private:
  bool _internal_has_try_time() const;
  public:
  void clear_try_time();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& try_time() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_try_time();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_try_time();
  void set_allocated_try_time(::PROTOBUF_NAMESPACE_ID::Timestamp* try_time);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_try_time() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_try_time();
  public:
  void unsafe_arena_set_allocated_try_time(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* try_time);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_try_time();

  // int64 id = 1;
  void clear_id();
  int64_t id() const;
  void set_id(int64_t value);
  private:
  int64_t _internal_id() const;
  void _internal_set_id(int64_t value);
  public:

  // uint64 company_id = 2;
  void clear_company_id();
  uint64_t company_id() const;
  void set_company_id(uint64_t value);
  private:
  uint64_t _internal_company_id() const;
  void _internal_set_company_id(uint64_t value);
  public:

  // double stock_price = 3;
  void clear_stock_price();
  double stock_price() const;
  void set_stock_price(double value);
  private:
  double _internal_stock_price() const;
  void _internal_set_stock_price(double value);
  public:

  // float try_float = 8;
  void clear_try_float();
  float try_float() const;
  void set_try_float(float value);
  private:
  float _internal_try_float() const;
  void _internal_set_try_float(float value);
  public:

  // bool try_bool = 7;
  void clear_try_bool();
  bool try_bool() const;
  void set_try_bool(bool value);
  private:
  bool _internal_try_bool() const;
  void _internal_set_try_bool(bool value);
  public:

  // bool try_bit = 10;
  void clear_try_bit();
  bool try_bit() const;
  void set_try_bit(bool value);
  private:
  bool _internal_try_bit() const;
  void _internal_set_try_bit(bool value);
  public:

  // double try_dec = 9;
  void clear_try_dec();
  double try_dec() const;
  void set_try_dec(double value);
  private:
  double _internal_try_dec() const;
  void _internal_set_try_dec(double value);
  public:

  // @@protoc_insertion_point(class_scope:company_stock_price)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr try_bytes_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr try_varchar_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr try_char_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr try_bigtext_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* trading_date_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* last_login_time_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* try_time_;
    int64_t id_;
    uint64_t company_id_;
    double stock_price_;
    float try_float_;
    bool try_bool_;
    bool try_bit_;
    double try_dec_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_company_5fstock_5fprice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// company_stock_price

// int64 id = 1;
inline void company_stock_price::clear_id() {
  _impl_.id_ = int64_t{0};
}
inline int64_t company_stock_price::_internal_id() const {
  return _impl_.id_;
}
inline int64_t company_stock_price::id() const {
  // @@protoc_insertion_point(field_get:company_stock_price.id)
  return _internal_id();
}
inline void company_stock_price::_internal_set_id(int64_t value) {
  
  _impl_.id_ = value;
}
inline void company_stock_price::set_id(int64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:company_stock_price.id)
}

// uint64 company_id = 2;
inline void company_stock_price::clear_company_id() {
  _impl_.company_id_ = uint64_t{0u};
}
inline uint64_t company_stock_price::_internal_company_id() const {
  return _impl_.company_id_;
}
inline uint64_t company_stock_price::company_id() const {
  // @@protoc_insertion_point(field_get:company_stock_price.company_id)
  return _internal_company_id();
}
inline void company_stock_price::_internal_set_company_id(uint64_t value) {
  
  _impl_.company_id_ = value;
}
inline void company_stock_price::set_company_id(uint64_t value) {
  _internal_set_company_id(value);
  // @@protoc_insertion_point(field_set:company_stock_price.company_id)
}

// double stock_price = 3;
inline void company_stock_price::clear_stock_price() {
  _impl_.stock_price_ = 0;
}
inline double company_stock_price::_internal_stock_price() const {
  return _impl_.stock_price_;
}
inline double company_stock_price::stock_price() const {
  // @@protoc_insertion_point(field_get:company_stock_price.stock_price)
  return _internal_stock_price();
}
inline void company_stock_price::_internal_set_stock_price(double value) {
  
  _impl_.stock_price_ = value;
}
inline void company_stock_price::set_stock_price(double value) {
  _internal_set_stock_price(value);
  // @@protoc_insertion_point(field_set:company_stock_price.stock_price)
}

// .google.protobuf.Timestamp trading_date = 4;
inline bool company_stock_price::_internal_has_trading_date() const {
  return this != internal_default_instance() && _impl_.trading_date_ != nullptr;
}
inline bool company_stock_price::has_trading_date() const {
  return _internal_has_trading_date();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& company_stock_price::_internal_trading_date() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.trading_date_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& company_stock_price::trading_date() const {
  // @@protoc_insertion_point(field_get:company_stock_price.trading_date)
  return _internal_trading_date();
}
inline void company_stock_price::unsafe_arena_set_allocated_trading_date(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* trading_date) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.trading_date_);
  }
  _impl_.trading_date_ = trading_date;
  if (trading_date) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:company_stock_price.trading_date)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::release_trading_date() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.trading_date_;
  _impl_.trading_date_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::unsafe_arena_release_trading_date() {
  // @@protoc_insertion_point(field_release:company_stock_price.trading_date)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.trading_date_;
  _impl_.trading_date_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::_internal_mutable_trading_date() {
  
  if (_impl_.trading_date_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.trading_date_ = p;
  }
  return _impl_.trading_date_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::mutable_trading_date() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_trading_date();
  // @@protoc_insertion_point(field_mutable:company_stock_price.trading_date)
  return _msg;
}
inline void company_stock_price::set_allocated_trading_date(::PROTOBUF_NAMESPACE_ID::Timestamp* trading_date) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.trading_date_);
  }
  if (trading_date) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(trading_date));
    if (message_arena != submessage_arena) {
      trading_date = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, trading_date, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.trading_date_ = trading_date;
  // @@protoc_insertion_point(field_set_allocated:company_stock_price.trading_date)
}

// .google.protobuf.Timestamp last_login_time = 5;
inline bool company_stock_price::_internal_has_last_login_time() const {
  return this != internal_default_instance() && _impl_.last_login_time_ != nullptr;
}
inline bool company_stock_price::has_last_login_time() const {
  return _internal_has_last_login_time();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& company_stock_price::_internal_last_login_time() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.last_login_time_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& company_stock_price::last_login_time() const {
  // @@protoc_insertion_point(field_get:company_stock_price.last_login_time)
  return _internal_last_login_time();
}
inline void company_stock_price::unsafe_arena_set_allocated_last_login_time(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* last_login_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.last_login_time_);
  }
  _impl_.last_login_time_ = last_login_time;
  if (last_login_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:company_stock_price.last_login_time)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::release_last_login_time() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.last_login_time_;
  _impl_.last_login_time_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::unsafe_arena_release_last_login_time() {
  // @@protoc_insertion_point(field_release:company_stock_price.last_login_time)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.last_login_time_;
  _impl_.last_login_time_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::_internal_mutable_last_login_time() {
  
  if (_impl_.last_login_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.last_login_time_ = p;
  }
  return _impl_.last_login_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::mutable_last_login_time() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_last_login_time();
  // @@protoc_insertion_point(field_mutable:company_stock_price.last_login_time)
  return _msg;
}
inline void company_stock_price::set_allocated_last_login_time(::PROTOBUF_NAMESPACE_ID::Timestamp* last_login_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.last_login_time_);
  }
  if (last_login_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(last_login_time));
    if (message_arena != submessage_arena) {
      last_login_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, last_login_time, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.last_login_time_ = last_login_time;
  // @@protoc_insertion_point(field_set_allocated:company_stock_price.last_login_time)
}

// bytes try_bytes = 6;
inline void company_stock_price::clear_try_bytes() {
  _impl_.try_bytes_.ClearToEmpty();
}
inline const std::string& company_stock_price::try_bytes() const {
  // @@protoc_insertion_point(field_get:company_stock_price.try_bytes)
  return _internal_try_bytes();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void company_stock_price::set_try_bytes(ArgT0&& arg0, ArgT... args) {
 
 _impl_.try_bytes_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:company_stock_price.try_bytes)
}
inline std::string* company_stock_price::mutable_try_bytes() {
  std::string* _s = _internal_mutable_try_bytes();
  // @@protoc_insertion_point(field_mutable:company_stock_price.try_bytes)
  return _s;
}
inline const std::string& company_stock_price::_internal_try_bytes() const {
  return _impl_.try_bytes_.Get();
}
inline void company_stock_price::_internal_set_try_bytes(const std::string& value) {
  
  _impl_.try_bytes_.Set(value, GetArenaForAllocation());
}
inline std::string* company_stock_price::_internal_mutable_try_bytes() {
  
  return _impl_.try_bytes_.Mutable(GetArenaForAllocation());
}
inline std::string* company_stock_price::release_try_bytes() {
  // @@protoc_insertion_point(field_release:company_stock_price.try_bytes)
  return _impl_.try_bytes_.Release();
}
inline void company_stock_price::set_allocated_try_bytes(std::string* try_bytes) {
  if (try_bytes != nullptr) {
    
  } else {
    
  }
  _impl_.try_bytes_.SetAllocated(try_bytes, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.try_bytes_.IsDefault()) {
    _impl_.try_bytes_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:company_stock_price.try_bytes)
}

// bool try_bool = 7;
inline void company_stock_price::clear_try_bool() {
  _impl_.try_bool_ = false;
}
inline bool company_stock_price::_internal_try_bool() const {
  return _impl_.try_bool_;
}
inline bool company_stock_price::try_bool() const {
  // @@protoc_insertion_point(field_get:company_stock_price.try_bool)
  return _internal_try_bool();
}
inline void company_stock_price::_internal_set_try_bool(bool value) {
  
  _impl_.try_bool_ = value;
}
inline void company_stock_price::set_try_bool(bool value) {
  _internal_set_try_bool(value);
  // @@protoc_insertion_point(field_set:company_stock_price.try_bool)
}

// float try_float = 8;
inline void company_stock_price::clear_try_float() {
  _impl_.try_float_ = 0;
}
inline float company_stock_price::_internal_try_float() const {
  return _impl_.try_float_;
}
inline float company_stock_price::try_float() const {
  // @@protoc_insertion_point(field_get:company_stock_price.try_float)
  return _internal_try_float();
}
inline void company_stock_price::_internal_set_try_float(float value) {
  
  _impl_.try_float_ = value;
}
inline void company_stock_price::set_try_float(float value) {
  _internal_set_try_float(value);
  // @@protoc_insertion_point(field_set:company_stock_price.try_float)
}

// double try_dec = 9;
inline void company_stock_price::clear_try_dec() {
  _impl_.try_dec_ = 0;
}
inline double company_stock_price::_internal_try_dec() const {
  return _impl_.try_dec_;
}
inline double company_stock_price::try_dec() const {
  // @@protoc_insertion_point(field_get:company_stock_price.try_dec)
  return _internal_try_dec();
}
inline void company_stock_price::_internal_set_try_dec(double value) {
  
  _impl_.try_dec_ = value;
}
inline void company_stock_price::set_try_dec(double value) {
  _internal_set_try_dec(value);
  // @@protoc_insertion_point(field_set:company_stock_price.try_dec)
}

// bool try_bit = 10;
inline void company_stock_price::clear_try_bit() {
  _impl_.try_bit_ = false;
}
inline bool company_stock_price::_internal_try_bit() const {
  return _impl_.try_bit_;
}
inline bool company_stock_price::try_bit() const {
  // @@protoc_insertion_point(field_get:company_stock_price.try_bit)
  return _internal_try_bit();
}
inline void company_stock_price::_internal_set_try_bit(bool value) {
  
  _impl_.try_bit_ = value;
}
inline void company_stock_price::set_try_bit(bool value) {
  _internal_set_try_bit(value);
  // @@protoc_insertion_point(field_set:company_stock_price.try_bit)
}

// string try_varchar = 11;
inline void company_stock_price::clear_try_varchar() {
  _impl_.try_varchar_.ClearToEmpty();
}
inline const std::string& company_stock_price::try_varchar() const {
  // @@protoc_insertion_point(field_get:company_stock_price.try_varchar)
  return _internal_try_varchar();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void company_stock_price::set_try_varchar(ArgT0&& arg0, ArgT... args) {
 
 _impl_.try_varchar_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:company_stock_price.try_varchar)
}
inline std::string* company_stock_price::mutable_try_varchar() {
  std::string* _s = _internal_mutable_try_varchar();
  // @@protoc_insertion_point(field_mutable:company_stock_price.try_varchar)
  return _s;
}
inline const std::string& company_stock_price::_internal_try_varchar() const {
  return _impl_.try_varchar_.Get();
}
inline void company_stock_price::_internal_set_try_varchar(const std::string& value) {
  
  _impl_.try_varchar_.Set(value, GetArenaForAllocation());
}
inline std::string* company_stock_price::_internal_mutable_try_varchar() {
  
  return _impl_.try_varchar_.Mutable(GetArenaForAllocation());
}
inline std::string* company_stock_price::release_try_varchar() {
  // @@protoc_insertion_point(field_release:company_stock_price.try_varchar)
  return _impl_.try_varchar_.Release();
}
inline void company_stock_price::set_allocated_try_varchar(std::string* try_varchar) {
  if (try_varchar != nullptr) {
    
  } else {
    
  }
  _impl_.try_varchar_.SetAllocated(try_varchar, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.try_varchar_.IsDefault()) {
    _impl_.try_varchar_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:company_stock_price.try_varchar)
}

// string try_char = 12;
inline void company_stock_price::clear_try_char() {
  _impl_.try_char_.ClearToEmpty();
}
inline const std::string& company_stock_price::try_char() const {
  // @@protoc_insertion_point(field_get:company_stock_price.try_char)
  return _internal_try_char();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void company_stock_price::set_try_char(ArgT0&& arg0, ArgT... args) {
 
 _impl_.try_char_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:company_stock_price.try_char)
}
inline std::string* company_stock_price::mutable_try_char() {
  std::string* _s = _internal_mutable_try_char();
  // @@protoc_insertion_point(field_mutable:company_stock_price.try_char)
  return _s;
}
inline const std::string& company_stock_price::_internal_try_char() const {
  return _impl_.try_char_.Get();
}
inline void company_stock_price::_internal_set_try_char(const std::string& value) {
  
  _impl_.try_char_.Set(value, GetArenaForAllocation());
}
inline std::string* company_stock_price::_internal_mutable_try_char() {
  
  return _impl_.try_char_.Mutable(GetArenaForAllocation());
}
inline std::string* company_stock_price::release_try_char() {
  // @@protoc_insertion_point(field_release:company_stock_price.try_char)
  return _impl_.try_char_.Release();
}
inline void company_stock_price::set_allocated_try_char(std::string* try_char) {
  if (try_char != nullptr) {
    
  } else {
    
  }
  _impl_.try_char_.SetAllocated(try_char, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.try_char_.IsDefault()) {
    _impl_.try_char_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:company_stock_price.try_char)
}

// .google.protobuf.Timestamp try_time = 13;
inline bool company_stock_price::_internal_has_try_time() const {
  return this != internal_default_instance() && _impl_.try_time_ != nullptr;
}
inline bool company_stock_price::has_try_time() const {
  return _internal_has_try_time();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& company_stock_price::_internal_try_time() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.try_time_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& company_stock_price::try_time() const {
  // @@protoc_insertion_point(field_get:company_stock_price.try_time)
  return _internal_try_time();
}
inline void company_stock_price::unsafe_arena_set_allocated_try_time(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* try_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.try_time_);
  }
  _impl_.try_time_ = try_time;
  if (try_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:company_stock_price.try_time)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::release_try_time() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.try_time_;
  _impl_.try_time_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::unsafe_arena_release_try_time() {
  // @@protoc_insertion_point(field_release:company_stock_price.try_time)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.try_time_;
  _impl_.try_time_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::_internal_mutable_try_time() {
  
  if (_impl_.try_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.try_time_ = p;
  }
  return _impl_.try_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* company_stock_price::mutable_try_time() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_try_time();
  // @@protoc_insertion_point(field_mutable:company_stock_price.try_time)
  return _msg;
}
inline void company_stock_price::set_allocated_try_time(::PROTOBUF_NAMESPACE_ID::Timestamp* try_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.try_time_);
  }
  if (try_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(try_time));
    if (message_arena != submessage_arena) {
      try_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, try_time, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.try_time_ = try_time;
  // @@protoc_insertion_point(field_set_allocated:company_stock_price.try_time)
}

// string try_bigtext = 14;
inline void company_stock_price::clear_try_bigtext() {
  _impl_.try_bigtext_.ClearToEmpty();
}
inline const std::string& company_stock_price::try_bigtext() const {
  // @@protoc_insertion_point(field_get:company_stock_price.try_bigtext)
  return _internal_try_bigtext();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void company_stock_price::set_try_bigtext(ArgT0&& arg0, ArgT... args) {
 
 _impl_.try_bigtext_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:company_stock_price.try_bigtext)
}
inline std::string* company_stock_price::mutable_try_bigtext() {
  std::string* _s = _internal_mutable_try_bigtext();
  // @@protoc_insertion_point(field_mutable:company_stock_price.try_bigtext)
  return _s;
}
inline const std::string& company_stock_price::_internal_try_bigtext() const {
  return _impl_.try_bigtext_.Get();
}
inline void company_stock_price::_internal_set_try_bigtext(const std::string& value) {
  
  _impl_.try_bigtext_.Set(value, GetArenaForAllocation());
}
inline std::string* company_stock_price::_internal_mutable_try_bigtext() {
  
  return _impl_.try_bigtext_.Mutable(GetArenaForAllocation());
}
inline std::string* company_stock_price::release_try_bigtext() {
  // @@protoc_insertion_point(field_release:company_stock_price.try_bigtext)
  return _impl_.try_bigtext_.Release();
}
inline void company_stock_price::set_allocated_try_bigtext(std::string* try_bigtext) {
  if (try_bigtext != nullptr) {
    
  } else {
    
  }
  _impl_.try_bigtext_.SetAllocated(try_bigtext, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.try_bigtext_.IsDefault()) {
    _impl_.try_bigtext_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:company_stock_price.try_bigtext)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_company_5fstock_5fprice_2eproto