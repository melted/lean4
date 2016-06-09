/-
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.meta.base_tactic init.meta.environment init.trace

meta_constant tactic_state : Type₁

namespace tactic_state
meta_constant env : tactic_state → environment
meta_constant format_expr : tactic_state → expr → format
end tactic_state

meta_definition tactic [reducible] (A : Type) := base_tactic tactic_state A

namespace tactic
open tactic_state

meta_definition get_env : tactic environment :=
do s ← read,
   return (env s)

meta_definition get_decl (n : name) : tactic declaration :=
do s ← read,
   returnex (environment.get (env s) n)

meta_definition trace (s : string) : tactic unit :=
return (_root_.trace s (λ u, ()))

meta_definition trace_expr (e : expr) : tactic unit :=
do s ← read,
   trace (to_string (format_expr s e))

end tactic
