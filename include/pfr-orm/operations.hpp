#pragma once

#include <libpq-fe.h>
#include <pfr-orm/definitions.hpp>
#include <pfr-orm/detail/operations.hpp>

namespace pfrorm::postgres {

template <DatabaseEntity T> void createTable(PGconn &connection) {
  return detail::createTable(connection, DatabaseEntityDescription<T>);
}

template <typename T> bool exists(PGconn &connection) {
  return detail::exists(connection, DatabaseEntityDescription<T>);
}

} // namespace pfrorm::postgres