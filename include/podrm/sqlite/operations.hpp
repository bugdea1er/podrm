#pragma once

#include <podrm/definitions.hpp>
#include <podrm/sqlite/detail/operations.hpp>
#include <podrm/sqlite/utils.hpp>

namespace podrm::sqlite {

template <DatabaseEntity T> void createTable(Connection &connection) {
  return detail::createTable(connection, DatabaseEntityDescription<T>);
}

template <typename T> bool exists(Connection &connection) {
  return detail::exists(connection, DatabaseEntityDescription<T>);
}

template <DatabaseEntity Entity>
void persist(Connection &connection, Entity &entity) {
  return detail::persist(connection, DatabaseEntityDescription<Entity>,
                         &entity);
}

} // namespace podrm::sqlite
