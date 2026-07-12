#include "leap.h"

/// Let A = (year % 4 == 0), B = (year % 100 == 0), C = (year % 400 == 0).
/// Decision tree (from the nested-if form):
///   ¬A           -> false
///   A ∧ ¬B       -> true
///   A ∧ B        -> C
/// So the predicate is true on  (A ∧ ¬B) ∨ (A ∧ B ∧ C).
///
/// Simplify by boolean algebra:
///   (A ∧ ¬B) ∨ (A ∧ B ∧ C)
/// = A ∧ (¬B ∨ (B ∧ C))              factor out A (distributivity)
/// = A ∧ ((¬B ∨ B) ∧ (¬B ∨ C))      distribute ¬B ∨ (B ∧ C)
/// = A ∧ (⊤ ∧ (¬B ∨ C))             excluded middle: ¬B ∨ B = ⊤
/// = A ∧ (¬B ∨ C)                   ⊤ is identity for ∧
///
/// i.e. "divisible by 4 AND (not a century OR a 400-year)".
/// The inner clause ¬B ∨ C is exactly B -> C (material implication):
/// if it's a century year, it must also be a 400-year.
///
/// `&&`/`||` short-circuit, so only multiples of 100 ever evaluate C.
bool leap_year(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
