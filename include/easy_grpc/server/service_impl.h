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

#ifndef EASY_GRPC_SERVER_SERVICE_IMPL_INCLUDED_H
#define EASY_GRPC_SERVER_SERVICE_IMPL_INCLUDED_H

#include "easy_grpc/server/methods/unary.h"

#include <iostream>

namespace easy_grpc {

namespace server {
namespace detail {

template <typename CbT>
auto make_unary_method(const char* name, CbT cb) {
  return std::make_unique<Unary_method<CbT>>(name, std::move(cb));
}
}  // namespace detail
}  // namespace server

}  // namespace easy_grpc
#endif