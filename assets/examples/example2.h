/*
 * example2.h - Copyright (c) 2023 - Olivier Poncet
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __JIT_EXAMPLE2_h__
#define __JIT_EXAMPLE2_h__

// ---------------------------------------------------------------------------
// jit::PointerToFunction
// ---------------------------------------------------------------------------

namespace jit {

using PointerToFunction = void(*)(void);

}

// ---------------------------------------------------------------------------
// jit::HostCode
// ---------------------------------------------------------------------------

namespace jit {

class HostCode
{
public: // public interface
    HostCode();

    HostCode(const HostCode&) = delete;

    HostCode& operator=(const HostCode&) = delete;

    virtual ~HostCode();

    void emit_byte(const uint8_t value);

    void emit_word(const uint16_t value);

    void emit_long(const uint32_t value);

    void emit_quad(const uint64_t value);

    void nop();

    void push_rbp();

    void mov_rbp_rsp();

    void sub_rsp_imm08(const uint8_t imm08);

    void mov_rsp_rbp();

    void pop_rbp();

    void ret();

    void mov_rax_imm64(const uint64_t imm64);

    void mov_rdi_imm64(const uint64_t imm64);

    void mov_rsi_imm64(const uint64_t imm64);

    void call_rax();

    const uint8_t* current() const
    {
        return _bufptr;
    }

private: // private interface
    void allocate();

    void deallocate();

private: // private data
    uint8_t* _buffer;
    uint8_t* _bufptr;
    size_t   _length;
};

}

// ---------------------------------------------------------------------------
// jit::BasicBlock
// ---------------------------------------------------------------------------

namespace jit {

class BasicBlock
{
public: // public interface
    BasicBlock(HostCode& hostcode);

    BasicBlock(const BasicBlock&) = default;

    BasicBlock& operator=(const BasicBlock&) = default;

    virtual ~BasicBlock() = default;

    void reset();

    void begin();

    void end();

    void execute();

    HostCode* operator->()
    {
        return &_hostcode;
    }

private: // private data
    HostCode&      _hostcode;
    const uint8_t* _begin;
    const uint8_t* _end;
};

}

// ---------------------------------------------------------------------------
// End-Of-File
// ---------------------------------------------------------------------------

#endif /* __JIT_EXAMPLE2_h__ */
