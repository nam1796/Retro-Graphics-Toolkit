/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class Fl_Tree_Item_Array
 *
 * This file has been generated by dub 2.2.4.
 */
#include "dub/dub.h"
#include <FL/Fl_Tree_Item_Array.H>


/** Fl_Tree_Item_Array::Fl_Tree_Item_Array(int new_chunksize=10)
 * inc/Fl_Tree_Item_Array.h:60
 */
static int Fl_Tree_Item_Array_Fl_Tree_Item_Array(lua_State *L) {
  try {
    int top__ = lua_gettop(L);
    if (top__ >= 1) {
      int type__ = lua_type(L, 1);
      if (type__ == LUA_TNUMBER) {
        int new_chunksize = dub::checkinteger(L, 1);
        Fl_Tree_Item_Array *retval__ = new Fl_Tree_Item_Array(new_chunksize);
        dub::pushudata(L, retval__, "FLTK.Fl_Tree_Item_Array", true);
        return 1;
      } else {
        Fl_Tree_Item_Array *o = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
        Fl_Tree_Item_Array *retval__ = new Fl_Tree_Item_Array(o);
        dub::pushudata(L, retval__, "FLTK.Fl_Tree_Item_Array", true);
        return 1;
      }
    } else {
      Fl_Tree_Item_Array *retval__ = new Fl_Tree_Item_Array();
      dub::pushudata(L, retval__, "FLTK.Fl_Tree_Item_Array", true);
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "new: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "new: Unknown exception");
  }
  return dub::error(L);
}

/** Fl_Tree_Item_Array::~Fl_Tree_Item_Array()
 * inc/Fl_Tree_Item_Array.h:61
 */
static int Fl_Tree_Item_Array__Fl_Tree_Item_Array(lua_State *L) {
  try {
    DubUserdata *userdata = ((DubUserdata*)dub::checksdata_d(L, 1, "FLTK.Fl_Tree_Item_Array"));
    if (userdata->gc) {
      Fl_Tree_Item_Array *self = (Fl_Tree_Item_Array *)userdata->ptr;
      delete self;
    }
    userdata->gc = false;
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "__gc: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "__gc: Unknown exception");
  }
  return dub::error(L);
}

/** Fl_Tree_Item* Fl_Tree_Item_Array::operator[](int i)
 * inc/Fl_Tree_Item_Array.h:64
 */
static int Fl_Tree_Item_Array__get_(lua_State *L) {

  Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata_n(L, 1, "FLTK.Fl_Tree_Item_Array", true));
  if (lua_type(L, 2) != LUA_TSTRING) {
    int i = luaL_checkinteger(L, 2);
    const Fl_Tree_Item *retval__ = self->operator[](i);
    if (!retval__) return 0;
    dub::pushudata(L, const_cast<Fl_Tree_Item*>(retval__), "FLTK.Fl_Tree_Item", false);
    return 1;
  }
  return 0;
}

/** int Fl_Tree_Item_Array::total() const
 * inc/Fl_Tree_Item_Array.h:72
 */
static int Fl_Tree_Item_Array_total(lua_State *L) {
  try {
    Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
    lua_pushnumber(L, self->total());
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "total: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "total: Unknown exception");
  }
  return dub::error(L);
}

/** void Fl_Tree_Item_Array::swap(int ax, int bx)
 * inc/Fl_Tree_Item_Array.h:81
 */
static int Fl_Tree_Item_Array_swap(lua_State *L) {
  try {
    Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
    int ax = dub::checkinteger(L, 2);
    int bx = dub::checkinteger(L, 3);
    self->swap(ax, bx);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "swap: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "swap: Unknown exception");
  }
  return dub::error(L);
}

/** int Fl_Tree_Item_Array::move(int to, int from)
 * inc/Fl_Tree_Item_Array.h:87
 */
#if (FL_MAJOR_VERSION>=1 && FL_MINOR_VERSION>=3 && FL_PATCH_VERSION>=3)
static int Fl_Tree_Item_Array_move(lua_State *L) {
  try {
    Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
    int to = dub::checkinteger(L, 2);
    int from = dub::checkinteger(L, 3);
    lua_pushnumber(L, self->move(to, from));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "move: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "move: Unknown exception");
  }
  return dub::error(L);
}
#endif

/** int Fl_Tree_Item_Array::deparent(int pos)
 * inc/Fl_Tree_Item_Array.h:88
 */
#if (FL_MAJOR_VERSION>=1 && FL_MINOR_VERSION>=3 && FL_PATCH_VERSION>=3)
static int Fl_Tree_Item_Array_deparent(lua_State *L) {
  try {
    Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
    int pos = dub::checkinteger(L, 2);
    lua_pushnumber(L, self->deparent(pos));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "deparent: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "deparent: Unknown exception");
  }
  return dub::error(L);
}
#endif

/** int Fl_Tree_Item_Array::reparent(Fl_Tree_Item *item, Fl_Tree_Item *newparent, int pos)
 * inc/Fl_Tree_Item_Array.h:89
 */
#if (FL_MAJOR_VERSION>=1 && FL_MINOR_VERSION>=3 && FL_PATCH_VERSION>=3)
static int Fl_Tree_Item_Array_reparent(lua_State *L) {
  try {
    Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
    Fl_Tree_Item *item = *((Fl_Tree_Item **)dub::checksdata(L, 2, "FLTK.Fl_Tree_Item"));
    Fl_Tree_Item *newparent = *((Fl_Tree_Item **)dub::checksdata(L, 3, "FLTK.Fl_Tree_Item"));
    int pos = dub::checkinteger(L, 4);
    lua_pushnumber(L, self->reparent(item, newparent, pos));
    return 1;
  } catch (std::exception &e) {
    lua_pushfstring(L, "reparent: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "reparent: Unknown exception");
  }
  return dub::error(L);
}
#endif

/** void Fl_Tree_Item_Array::clear()
 * inc/Fl_Tree_Item_Array.h:90
 */
static int Fl_Tree_Item_Array_clear(lua_State *L) {
  try {
    Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
    self->clear();
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "clear: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "clear: Unknown exception");
  }
  return dub::error(L);
}

/** void Fl_Tree_Item_Array::add(Fl_Tree_Item *val)
 * inc/Fl_Tree_Item_Array.h:91
 */
static int Fl_Tree_Item_Array_add(lua_State *L) {
  try {
    Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
    Fl_Tree_Item *val = *((Fl_Tree_Item **)dub::checksdata(L, 2, "FLTK.Fl_Tree_Item"));
    self->add(val);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "add: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "add: Unknown exception");
  }
  return dub::error(L);
}

/** void Fl_Tree_Item_Array::insert(int pos, Fl_Tree_Item *new_item)
 * inc/Fl_Tree_Item_Array.h:92
 */
static int Fl_Tree_Item_Array_insert(lua_State *L) {
  try {
    Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
    int pos = dub::checkinteger(L, 2);
    Fl_Tree_Item *new_item = *((Fl_Tree_Item **)dub::checksdata(L, 3, "FLTK.Fl_Tree_Item"));
    self->insert(pos, new_item);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "insert: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "insert: Unknown exception");
  }
  return dub::error(L);
}

/** void Fl_Tree_Item_Array::replace(int pos, Fl_Tree_Item *new_item)
 * inc/Fl_Tree_Item_Array.h:93
 */
#if (FL_MAJOR_VERSION>=1 && FL_MINOR_VERSION>=3 && FL_PATCH_VERSION>=3)
static int Fl_Tree_Item_Array_replace(lua_State *L) {
  try {
    Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
    int pos = dub::checkinteger(L, 2);
    Fl_Tree_Item *new_item = *((Fl_Tree_Item **)dub::checksdata(L, 3, "FLTK.Fl_Tree_Item"));
    self->replace(pos, new_item);
    return 0;
  } catch (std::exception &e) {
    lua_pushfstring(L, "replace: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "replace: Unknown exception");
  }
  return dub::error(L);
}
#endif

/** void Fl_Tree_Item_Array::remove(int index)
 * inc/Fl_Tree_Item_Array.h:94
 */
static int Fl_Tree_Item_Array_remove(lua_State *L) {
  try {
    Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata(L, 1, "FLTK.Fl_Tree_Item_Array"));
    int type__ = lua_type(L, 2);
    if (type__ == LUA_TNUMBER) {
      int index = dub::checkinteger(L, 2);
      self->remove(index);
      return 0;
    } else {
      Fl_Tree_Item *item = *((Fl_Tree_Item **)dub::checksdata(L, 2, "FLTK.Fl_Tree_Item"));
      lua_pushnumber(L, self->remove(item));
      return 1;
    }
  } catch (std::exception &e) {
    lua_pushfstring(L, "remove: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "remove: Unknown exception");
  }
  return dub::error(L);
}



// --=============================================== __tostring
static int Fl_Tree_Item_Array___tostring(lua_State *L) {
  Fl_Tree_Item_Array *self = *((Fl_Tree_Item_Array **)dub::checksdata_n(L, 1, "FLTK.Fl_Tree_Item_Array"));
  lua_pushfstring(L, "FLTK.Fl_Tree_Item_Array: %p", self);
  
  return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg Fl_Tree_Item_Array_member_methods[] = {
  { "new"          , Fl_Tree_Item_Array_Fl_Tree_Item_Array },
  { "__gc"         , Fl_Tree_Item_Array__Fl_Tree_Item_Array },
  { "__index"      , Fl_Tree_Item_Array__get_ },
  { "total"        , Fl_Tree_Item_Array_total },
  { "swap"         , Fl_Tree_Item_Array_swap },
#if (FL_MAJOR_VERSION>=1 && FL_MINOR_VERSION>=3 && FL_PATCH_VERSION>=3)
  { "move"         , Fl_Tree_Item_Array_move },
#endif
#if (FL_MAJOR_VERSION>=1 && FL_MINOR_VERSION>=3 && FL_PATCH_VERSION>=3)
  { "deparent"     , Fl_Tree_Item_Array_deparent },
#endif
#if (FL_MAJOR_VERSION>=1 && FL_MINOR_VERSION>=3 && FL_PATCH_VERSION>=3)
  { "reparent"     , Fl_Tree_Item_Array_reparent },
#endif
  { "clear"        , Fl_Tree_Item_Array_clear },
  { "add"          , Fl_Tree_Item_Array_add },
  { "insert"       , Fl_Tree_Item_Array_insert },
#if (FL_MAJOR_VERSION>=1 && FL_MINOR_VERSION>=3 && FL_PATCH_VERSION>=3)
  { "replace"      , Fl_Tree_Item_Array_replace },
#endif
  { "remove"       , Fl_Tree_Item_Array_remove },
  { "__tostring"   , Fl_Tree_Item_Array___tostring },
  { "deleted"      , dub::isDeleted       },
  { NULL, NULL},
};


 int luaopen_FLTK_Fl_Tree_Item_Array(lua_State *L)
{
  // Create the metatable which will contain all the member methods
  luaL_newmetatable(L, "FLTK.Fl_Tree_Item_Array");
  // <mt>

  // register member methods
  dub::fregister(L, Fl_Tree_Item_Array_member_methods);
  // setup meta-table
  dub::setup(L, "FLTK.Fl_Tree_Item_Array");
  // <mt>
  return 1;
}
