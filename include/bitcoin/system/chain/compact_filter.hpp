/**
 * Copyright (c) 2011-2019 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// Sponsored in part by Digital Contract Design, LLC

#ifndef LIBBITCOIN_SYSTEM_CHAIN_COMPACT_FILTER_HPP
#define LIBBITCOIN_SYSTEM_CHAIN_COMPACT_FILTER_HPP

#include <istream>
#include <memory>
#include <bitcoin/system/define.hpp>
#include <bitcoin/system/utility/data.hpp>
#include <bitcoin/system/utility/reader.hpp>
#include <bitcoin/system/utility/thread.hpp>
#include <bitcoin/system/utility/writer.hpp>

namespace libbitcoin {
namespace system {
namespace chain {

class BC_API compact_filter
{
public:
    typedef std::shared_ptr<compact_filter> ptr;
    typedef std::shared_ptr<const compact_filter> const_ptr;

    static compact_filter factory(const data_chunk& data);
    static compact_filter factory(std::istream& stream);
    static compact_filter factory(reader& source);

    compact_filter();
    compact_filter(uint8_t filter_type, const hash_digest& block_hash,
        const data_chunk& filter);
    compact_filter(uint8_t filter_type, hash_digest&& block_hash,
        data_chunk&& filter);
    compact_filter(const compact_filter& other);
    compact_filter(compact_filter&& other);

    hash_digest get_header(hash_digest previous) const;

    uint8_t filter_type() const;
    void set_filter_type(uint8_t value);

    hash_digest& block_hash();
    const hash_digest& block_hash() const;
    void set_block_hash(const hash_digest& value);
    void set_block_hash(hash_digest&& value);

    data_chunk& filter();
    const data_chunk& filter() const;
    void set_filter(const data_chunk& value);
    void set_filter(data_chunk&& value);

    bool from_data(const data_chunk& data);
    bool from_data(std::istream& stream);
    bool from_data(reader& source);
    data_chunk to_data() const;
    void to_data(std::ostream& stream) const;
    void to_data(writer& sink) const;
    virtual bool is_valid() const;
    virtual void reset();
    size_t serialized_size() const;

    // This class is move assignable but not copy assignable.
    compact_filter& operator=(compact_filter&& other);
    void operator=(const compact_filter&) = delete;

    bool operator==(const compact_filter& other) const;
    bool operator!=(const compact_filter& other) const;

    hash_digest hash() const;

protected:
    void invalidate_cache() const;

private:
    typedef std::shared_ptr<hash_digest> hash_ptr;

    hash_ptr hash_cache() const;

    mutable hash_ptr hash_;
    mutable upgrade_mutex mutex_;

    uint8_t filter_type_;
    hash_digest block_hash_;
    data_chunk filter_;
};

} // namespace chain
} // namespace system
} // namespace libbitcoin

#endif
