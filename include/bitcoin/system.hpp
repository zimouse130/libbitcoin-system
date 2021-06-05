///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2014-2021 libbitcoin-system developers (see COPYING).
//
//        GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY
//
///////////////////////////////////////////////////////////////////////////////
#ifndef LIBBITCOIN_SYSTEM_HPP
#define LIBBITCOIN_SYSTEM_HPP

/**
 * API Users: Include only this header. Direct use of other headers is fragile
 * and unsupported as header organization is subject to change.
 *
 * Maintainers: Do not include this header internal to this library.
 */

#include <bitcoin/system/assert.hpp>
#include <bitcoin/system/constants.hpp>
#include <bitcoin/system/define.hpp>
#include <bitcoin/system/error.hpp>
#include <bitcoin/system/exceptions.hpp>
#include <bitcoin/system/settings.hpp>
#include <bitcoin/system/type_constraints.hpp>
#include <bitcoin/system/version.hpp>
#include <bitcoin/system/chain/block.hpp>
#include <bitcoin/system/chain/block_filter.hpp>
#include <bitcoin/system/chain/chain_state.hpp>
#include <bitcoin/system/chain/compact.hpp>
#include <bitcoin/system/chain/header.hpp>
#include <bitcoin/system/chain/input.hpp>
#include <bitcoin/system/chain/input_point.hpp>
#include <bitcoin/system/chain/output.hpp>
#include <bitcoin/system/chain/output_point.hpp>
#include <bitcoin/system/chain/payment_record.hpp>
#include <bitcoin/system/chain/point.hpp>
#include <bitcoin/system/chain/point_value.hpp>
#include <bitcoin/system/chain/points_value.hpp>
#include <bitcoin/system/chain/script.hpp>
#include <bitcoin/system/chain/stealth_record.hpp>
#include <bitcoin/system/chain/transaction.hpp>
#include <bitcoin/system/chain/witness.hpp>
#include <bitcoin/system/concurrency/asio.hpp>
#include <bitcoin/system/concurrency/atomic.hpp>
#include <bitcoin/system/concurrency/conditional_lock.hpp>
#include <bitcoin/system/concurrency/deadline.hpp>
#include <bitcoin/system/concurrency/decorator.hpp>
#include <bitcoin/system/concurrency/delegates.hpp>
#include <bitcoin/system/concurrency/dispatcher.hpp>
#include <bitcoin/system/concurrency/enable_shared_from_base.hpp>
#include <bitcoin/system/concurrency/flush_lock.hpp>
#include <bitcoin/system/concurrency/handlers.hpp>
#include <bitcoin/system/concurrency/interprocess_lock.hpp>
#include <bitcoin/system/concurrency/monitor.hpp>
#include <bitcoin/system/concurrency/pending.hpp>
#include <bitcoin/system/concurrency/prioritized_mutex.hpp>
#include <bitcoin/system/concurrency/resubscriber.hpp>
#include <bitcoin/system/concurrency/scope_lock.hpp>
#include <bitcoin/system/concurrency/sequencer.hpp>
#include <bitcoin/system/concurrency/sequential_lock.hpp>
#include <bitcoin/system/concurrency/socket.hpp>
#include <bitcoin/system/concurrency/subscriber.hpp>
#include <bitcoin/system/concurrency/synchronizer.hpp>
#include <bitcoin/system/concurrency/thread.hpp>
#include <bitcoin/system/concurrency/threadpool.hpp>
#include <bitcoin/system/concurrency/timer.hpp>
#include <bitcoin/system/concurrency/track.hpp>
#include <bitcoin/system/concurrency/work.hpp>
#include <bitcoin/system/config/authority.hpp>
#include <bitcoin/system/config/base16.hpp>
#include <bitcoin/system/config/base2.hpp>
#include <bitcoin/system/config/base32.hpp>
#include <bitcoin/system/config/base58.hpp>
#include <bitcoin/system/config/base64.hpp>
#include <bitcoin/system/config/base85.hpp>
#include <bitcoin/system/config/block.hpp>
#include <bitcoin/system/config/checkpoint.hpp>
#include <bitcoin/system/config/compact_filter.hpp>
#include <bitcoin/system/config/directory.hpp>
#include <bitcoin/system/config/endpoint.hpp>
#include <bitcoin/system/config/hash160.hpp>
#include <bitcoin/system/config/hash256.hpp>
#include <bitcoin/system/config/header.hpp>
#include <bitcoin/system/config/input.hpp>
#include <bitcoin/system/config/output.hpp>
#include <bitcoin/system/config/parameter.hpp>
#include <bitcoin/system/config/parser.hpp>
#include <bitcoin/system/config/point.hpp>
#include <bitcoin/system/config/printer.hpp>
#include <bitcoin/system/config/script.hpp>
#include <bitcoin/system/config/settings.hpp>
#include <bitcoin/system/config/transaction.hpp>
#include <bitcoin/system/data/binary.hpp>
#include <bitcoin/system/data/collection.hpp>
#include <bitcoin/system/data/data.hpp>
#include <bitcoin/system/data/data_slice.hpp>
#include <bitcoin/system/data/string.hpp>
#include <bitcoin/system/formats/base_10.hpp>
#include <bitcoin/system/formats/base_16.hpp>
#include <bitcoin/system/formats/base_2048.hpp>
#include <bitcoin/system/formats/base_32.hpp>
#include <bitcoin/system/formats/base_58.hpp>
#include <bitcoin/system/formats/base_64.hpp>
#include <bitcoin/system/formats/base_85.hpp>
#include <bitcoin/system/iostream/bit_reader.hpp>
#include <bitcoin/system/iostream/bit_writer.hpp>
#include <bitcoin/system/iostream/container_sink.hpp>
#include <bitcoin/system/iostream/container_source.hpp>
#include <bitcoin/system/iostream/iostream.hpp>
#include <bitcoin/system/iostream/istream_bit_reader.hpp>
#include <bitcoin/system/iostream/istream_reader.hpp>
#include <bitcoin/system/iostream/ostream_bit_writer.hpp>
#include <bitcoin/system/iostream/ostream_writer.hpp>
#include <bitcoin/system/iostream/reader.hpp>
#include <bitcoin/system/iostream/writer.hpp>
#include <bitcoin/system/log/attributes.hpp>
#include <bitcoin/system/log/file_char_traits.hpp>
#include <bitcoin/system/log/file_collector.hpp>
#include <bitcoin/system/log/file_collector_repository.hpp>
#include <bitcoin/system/log/file_counter_formatter.hpp>
#include <bitcoin/system/log/rotable_file.hpp>
#include <bitcoin/system/log/severity.hpp>
#include <bitcoin/system/log/sink.hpp>
#include <bitcoin/system/log/source.hpp>
#include <bitcoin/system/log/statsd_sink.hpp>
#include <bitcoin/system/log/statsd_source.hpp>
#include <bitcoin/system/log/udp_client_sink.hpp>
#include <bitcoin/system/log/features/counter.hpp>
#include <bitcoin/system/log/features/gauge.hpp>
#include <bitcoin/system/log/features/metric.hpp>
#include <bitcoin/system/log/features/rate.hpp>
#include <bitcoin/system/log/features/timer.hpp>
#include <bitcoin/system/machine/interpreter.hpp>
#include <bitcoin/system/machine/number.hpp>
#include <bitcoin/system/machine/opcode.hpp>
#include <bitcoin/system/machine/operation.hpp>
#include <bitcoin/system/machine/program.hpp>
#include <bitcoin/system/machine/rule_fork.hpp>
#include <bitcoin/system/machine/script_pattern.hpp>
#include <bitcoin/system/machine/script_version.hpp>
#include <bitcoin/system/machine/sighash_algorithm.hpp>
#include <bitcoin/system/math/checksum.hpp>
#include <bitcoin/system/math/crypto.hpp>
#include <bitcoin/system/math/divide.hpp>
#include <bitcoin/system/math/elliptic_curve.hpp>
#include <bitcoin/system/math/golomb_coding.hpp>
#include <bitcoin/system/math/hash.hpp>
#include <bitcoin/system/math/limits.hpp>
#include <bitcoin/system/math/power.hpp>
#include <bitcoin/system/math/pseudo_random.hpp>
#include <bitcoin/system/math/ring_signature.hpp>
#include <bitcoin/system/math/sign.hpp>
#include <bitcoin/system/math/siphash.hpp>
#include <bitcoin/system/math/stealth.hpp>
#include <bitcoin/system/message/address.hpp>
#include <bitcoin/system/message/alert.hpp>
#include <bitcoin/system/message/alert_payload.hpp>
#include <bitcoin/system/message/block.hpp>
#include <bitcoin/system/message/block_transactions.hpp>
#include <bitcoin/system/message/compact_block.hpp>
#include <bitcoin/system/message/compact_filter.hpp>
#include <bitcoin/system/message/compact_filter_checkpoint.hpp>
#include <bitcoin/system/message/compact_filter_headers.hpp>
#include <bitcoin/system/message/fee_filter.hpp>
#include <bitcoin/system/message/filter_add.hpp>
#include <bitcoin/system/message/filter_clear.hpp>
#include <bitcoin/system/message/filter_load.hpp>
#include <bitcoin/system/message/get_address.hpp>
#include <bitcoin/system/message/get_block_transactions.hpp>
#include <bitcoin/system/message/get_blocks.hpp>
#include <bitcoin/system/message/get_compact_filter_checkpoint.hpp>
#include <bitcoin/system/message/get_compact_filter_headers.hpp>
#include <bitcoin/system/message/get_compact_filters.hpp>
#include <bitcoin/system/message/get_data.hpp>
#include <bitcoin/system/message/get_headers.hpp>
#include <bitcoin/system/message/header.hpp>
#include <bitcoin/system/message/headers.hpp>
#include <bitcoin/system/message/heading.hpp>
#include <bitcoin/system/message/inventory.hpp>
#include <bitcoin/system/message/inventory_vector.hpp>
#include <bitcoin/system/message/memory_pool.hpp>
#include <bitcoin/system/message/merkle_block.hpp>
#include <bitcoin/system/message/messages.hpp>
#include <bitcoin/system/message/network_address.hpp>
#include <bitcoin/system/message/not_found.hpp>
#include <bitcoin/system/message/ping.hpp>
#include <bitcoin/system/message/pong.hpp>
#include <bitcoin/system/message/prefilled_transaction.hpp>
#include <bitcoin/system/message/reject.hpp>
#include <bitcoin/system/message/send_compact.hpp>
#include <bitcoin/system/message/send_headers.hpp>
#include <bitcoin/system/message/transaction.hpp>
#include <bitcoin/system/message/verack.hpp>
#include <bitcoin/system/message/version.hpp>
#include <bitcoin/system/serialization/deserialize.hpp>
#include <bitcoin/system/serialization/deserializer.hpp>
#include <bitcoin/system/serialization/endian.hpp>
#include <bitcoin/system/serialization/serialize.hpp>
#include <bitcoin/system/serialization/serializer.hpp>
#include <bitcoin/system/unicode/ascii.hpp>
#include <bitcoin/system/unicode/code_points.hpp>
#include <bitcoin/system/unicode/conversion.hpp>
#include <bitcoin/system/unicode/normalization.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_about.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_console_streambuf.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_environment.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_ifstream.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_istream.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_main.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_ofstream.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_ostream.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_streambuf.hpp>
#include <bitcoin/system/wallet/context.hpp>
#include <bitcoin/system/wallet/message.hpp>
#include <bitcoin/system/wallet/neutrino_filter.hpp>
#include <bitcoin/system/wallet/property_tree.hpp>
#include <bitcoin/system/wallet/addresses/bitcoin_uri.hpp>
#include <bitcoin/system/wallet/addresses/checked.hpp>
#include <bitcoin/system/wallet/addresses/payment_address.hpp>
#include <bitcoin/system/wallet/addresses/qr_code.hpp>
#include <bitcoin/system/wallet/addresses/stealth_address.hpp>
#include <bitcoin/system/wallet/addresses/stealth_receiver.hpp>
#include <bitcoin/system/wallet/addresses/stealth_sender.hpp>
#include <bitcoin/system/wallet/addresses/tiff.hpp>
#include <bitcoin/system/wallet/addresses/uri.hpp>
#include <bitcoin/system/wallet/addresses/uri_reader.hpp>
#include <bitcoin/system/wallet/addresses/witness_address.hpp>
#include <bitcoin/system/wallet/keys/ec_point.hpp>
#include <bitcoin/system/wallet/keys/ec_private.hpp>
#include <bitcoin/system/wallet/keys/ec_public.hpp>
#include <bitcoin/system/wallet/keys/ec_scalar.hpp>
#include <bitcoin/system/wallet/keys/ek_private.hpp>
#include <bitcoin/system/wallet/keys/ek_public.hpp>
#include <bitcoin/system/wallet/keys/ek_token.hpp>
#include <bitcoin/system/wallet/keys/encrypted_keys.hpp>
#include <bitcoin/system/wallet/keys/hd_private.hpp>
#include <bitcoin/system/wallet/keys/hd_public.hpp>
#include <bitcoin/system/wallet/keys/mini_keys.hpp>
#include <bitcoin/system/wallet/mnemonics/dictionaries.hpp>
#include <bitcoin/system/wallet/mnemonics/dictionary.hpp>
#include <bitcoin/system/wallet/mnemonics/electrum.hpp>
#include <bitcoin/system/wallet/mnemonics/electrum_v1.hpp>
#include <bitcoin/system/wallet/mnemonics/language.hpp>
#include <bitcoin/system/wallet/mnemonics/languages.hpp>
#include <bitcoin/system/wallet/mnemonics/mnemonic.hpp>

#endif
