#ifndef _MANIF_MANIF_R3SO3_PROPERTIES_H_
#define _MANIF_MANIF_R3SO3_PROPERTIES_H_

#include "manif/impl/traits.h"

namespace manif
{

// Forward declaration
template <typename _Derived> struct R3SO3Base;
template <typename _Derived> struct R3SO3TangentBase;

namespace internal
{

// traits specialization

template <typename _Derived>
struct ManifoldProperties<R3SO3Base<_Derived>>
{
  static constexpr int Dim = 3; /// @brief Space dimension
  static constexpr int DoF = 6; /// @brief Degrees of freedom
  static constexpr int N   = 4; /// @brief Dimension of transformation matrix
};

template <typename _Derived>
struct ManifoldProperties<R3SO3TangentBase<_Derived>>
{
  static constexpr int Dim = 3; /// @brief Space dimension
  static constexpr int DoF = 6; /// @brief Degrees of freedom
};

} /* namespace internal */
} /* namespace manif */

#endif /* _MANIF_MANIF_R3SO3_PROPERTIES_H_ */