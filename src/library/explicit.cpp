/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "util/sstream.h"
#include "library/explicit.h"
#include "library/kernel_bindings.h"

namespace lean {
static name g_explicit_name("@");
[[ noreturn ]] static void throw_ex() { throw exception("unexpected occurrence of '@' expression"); }

// We encode the 'explicit' expression mark '@' using a macro.
// This is a trick to avoid creating a new kind of expression.
// 'Explicit' expressions are temporary objects used by the elaborator,
// and have no semantic significance.
class explicit_macro_cell : public macro_definition_cell {
public:
    virtual name get_name() const { return g_explicit_name; }
    virtual expr get_type(expr const &, expr const *, extension_context &) const { throw_ex(); }
    virtual optional<expr> expand(expr const &, extension_context &) const { throw_ex(); }
    virtual void write(serializer &) const { throw_ex(); }
};

static macro_definition g_explicit(new explicit_macro_cell());
expr mk_explicit(expr const & e) {
    return mk_macro(g_explicit, 1, &e);
}

bool is_explicit(expr const & e) {
    return is_macro(e) && macro_def(e) == g_explicit;
}

expr const & get_explicit_arg(expr const & e) {
    lean_assert(is_explicit(e));
    return macro_arg(e, 0);
}

static int mk_explicit(lua_State * L) { return push_expr(L, mk_explicit(to_expr(L, 1))); }
static int is_explicit(lua_State * L) { return push_boolean(L, is_explicit(to_expr(L, 1))); }
static void check_explicit(lua_State * L, int idx) {
    if (!is_explicit(to_expr(L, idx)))
        throw exception(sstream() << "arg #" << idx << " is not a '@'-expression");
}
static int get_explicit_arg(lua_State * L) {
    check_explicit(L, 1);
    return push_expr(L, get_explicit_arg(to_expr(L, 1)));
}

void open_explicit(lua_State * L) {
    SET_GLOBAL_FUN(mk_explicit,      "mk_explicit");
    SET_GLOBAL_FUN(is_explicit,      "is_explicit");
    SET_GLOBAL_FUN(get_explicit_arg, "get_explicit_arg");
}
}
