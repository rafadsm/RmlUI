/*
 * This source file is part of RmlUi, the HTML/CSS Interface Middleware
 *
 * For the latest information, see http://github.com/mikke89/RmlUi
 *
 * Copyright (c) 2008-2010 CodePoint Ltd, Shift Technology Ltd
 * Copyright (c) 2019 The RmlUi Team, and contributors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */
 
#ifndef RMLUICONTROLSLUAELEMENTTABSET_H
#define RMLUICONTROLSLUAELEMENTTABSET_H

#include <RmlUi/Core/Lua/LuaType.h>
#include <RmlUi/Core/Lua/lua.hpp>
#include <RmlUi/Controls/ElementTabSet.h>

using Rml::Core::Lua::LuaType;
namespace Rml {
namespace Controls {
namespace Lua {

//methods
int ElementTabSetSetPanel(lua_State* L, ElementTabSet* obj);
int ElementTabSetSetTab(lua_State* L, ElementTabSet* obj);

//getters
int ElementTabSetGetAttractive_tab(lua_State* L);
int ElementTabSetGetAttrnum_tabs(lua_State* L);

//setter
int ElementTabSetSetAttractive_tab(lua_State* L);

extern Rml::Core::Lua::RegType<ElementTabSet> ElementTabSetMethods[];
extern luaL_Reg ElementTabSetGetters[];
extern luaL_Reg ElementTabSetSetters[];


}
}
}
namespace Rml { namespace Core { namespace Lua {
//this will be used to "inherit" from Element
template<> void ExtraInit<Rml::Controls::ElementTabSet>(lua_State* L, int metatable_index);
LUACONTROLSTYPEDECLARE(Rml::Controls::ElementTabSet)
}}}
#endif