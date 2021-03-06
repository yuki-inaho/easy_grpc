// Copyright 2019 Age of Minds inc.

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef EASY_GRPC_SERIALIZE_INCLUDED_H
#define EASY_GRPC_SERIALIZE_INCLUDED_H

#include "grpc/byte_buffer_reader.h"
#include "grpc/grpc.h"

namespace easy_grpc {

template <typename T, typename E = void>
struct Serializer;

template <typename T>
grpc_byte_buffer* serialize(const T& data) {
  return Serializer<T>::serialize(data);
}

template <typename T>
T deserialize(grpc_byte_buffer* data) {
  return Serializer<T>::deserialize(data);
}
}  // namespace easy_grpc

#endif
