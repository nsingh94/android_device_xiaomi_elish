/*
 * Copyright (C) 2021-2025 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libvariant.h>

static const variant_info elish_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "elish",
    .marketname = "Pad 5 Pro",
    .model = "M2105K81AC",
    .build_fingerprint = "Xiaomi/elish/elish:13/RKQ1.211001.001/V816.0.2.0.TKYCNXM:user/release-keys",

    .nfc = false,
};

const std::vector<variant_info> variants = {
    elish_info,
};
