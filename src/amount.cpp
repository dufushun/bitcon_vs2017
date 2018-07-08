// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2016 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "amount.h"

#include "tinyformat.h"

const std::string CURRENCY_UNIT = "RRC";

std::string Amount::ToString() const {
    return strprintf("%d.%02d %s", amount / COIN.GetSatoshis(),
                     amount % COIN.GetSatoshis(), CURRENCY_UNIT);
}

CFeeRate::CFeeRate(const Amount nFeePaid, size_t nBytes_) {
    assert(nBytes_ <= uint64_t(std::numeric_limits<int64_t>::max()));
    int64_t nSize = int64_t(nBytes_);

    if (nSize > 0) {
        nSatoshisPerK = 1000 * nFeePaid / nSize;
    } else {
        nSatoshisPerK = Amount(0);
    }
}

Amount CFeeRate::GetFee(size_t nBytes_) const {
    assert(nBytes_ <= uint64_t(std::numeric_limits<int64_t>::max()));
    int64_t nSize = int64_t(nBytes_);

    Amount nFee = nSize * nSatoshisPerK / 1000;

    if (nFee == Amount(0) && nSize != 0) {
        if (nSatoshisPerK > Amount(0)) {
            nFee = Amount(1);
        }
        if (nSatoshisPerK < Amount(0)) {
            nFee = Amount(-1);
        }
    }

    nFee = nFee >> COIN_RIGHT_SHIFT;
    return std::max(Amount(1),nFee);
}

std::string CFeeRate::ToString() const {
    return strprintf(
        "%d.%02d %s/kB", nSatoshisPerK.GetSatoshis() / COIN.GetSatoshis(),
        nSatoshisPerK.GetSatoshis() % COIN.GetSatoshis(), CURRENCY_UNIT);
}
